/* 	*********************************************************************************************
	*										BULBA RPG											*
	*********************************************************************************************
	*	Nome: 		HunterUnown (Caçador de Palavras)											*
	*	Descrição:	O script procura por palavras - inseridas no vetor item[], que tenham as	*
	*				letras inseridas pelo usuário.												*
	*	Créditos: 	Adrian C. 08/01/2023														*
	*********************************************************************************************  */
	
#include <iostream>
#include <locale.h>
#include <string>
#include <cstring>

using namespace std;

main (){
	setlocale(LC_ALL,"");
	
//	Declaração de variáveis
	string item[] = {
    /* Exp. Candies */
    "Lucky Egg","Rare Candy","Pokemon Candy","Type Candy","Exp Candy XS","Exp Candy S","Exp Candy M","Exp Candy L","Exp Candy XL","Pokerus Vacine",
    
    /* Gems */
    "Normal Gem","Fire Gem","Water Gem","Electric Gem","Grass Gem","Ice Gem","Fighting Gem","Poison Gem","Ground Gem",
    "Flying Gem","Psychic Gem","Bug Gem","Rock Gem","Ghost Gem","Dragon Gem","Dark Gem","Steel Gem","Dark Gem",
    "Blood Gem","Frost Gem",
    
    /* Clusters */
    "Normal Cluster","Fire Cluster","Water Cluster","Electric Cluster","Grass Cluster","Ice Cluster","Fighting Cluster","Poison Cluster","Ground Cluster",
    "Flying Cluster","Psychic Cluster","Bug Cluster","Rock Cluster","Ghost Cluster","Dragon Cluster","Dark Cluster","Steel Cluster","Dark Cluster", "Bulba Form Cluster",
    
    /* Incenses e Breeding */
    "Full Incense","Lax Incense","Luck Incense","Odd Incense","Pure Incense","Rock Incense","Rose Incense","Sea Incense","Wave Incense","Shadow Shadow Incense",
    "Shadow Destiny Knot","Destiny Knot","Light Ball",

    /* de Evolução */
    "Dragon Scale","UpGrade","Dubious Disc","Electirizer","Magmarizer","Prism Scale","Protector","Reaper Cloth","Sachet","Whipped Dream","Oval Stone",
    "Chipped Pot","Sweet Apple","Tart Apple","Berry Sweet","Clover Sweet","Flower Sweet","Love Sweet","Ribbon Sweet","Star Sweet","Strawberry Sweet",
    "Galarica Cuff","Galarica Wreath","Royal Honey","Kings Rock","Razor Claw","Razor Fang","Deep Sea Scale","Deep Sea Tooth","Metal Coat","Ice Crown",
    "Black Augurite","Peat Block","Auspicious Armor","Malicious Armor","Leaders Crest",

    /* Pedras de Evolução & Shard*/
    "Dawn Stone","Dawn Shard","Dusk Stone","Dusk Shard","Fire Stone","Red Shard","Ice Stone","Ice Shard","Leaf Stone","Green Shard","Moon Stone","Moon Shard",
    "Shiny Stone","Shiny Shard","Sun Stone","Sun Shard","Thunder Stone","Yellow Shard","Water Stone","Blue Shard",

    /* Medicinais */
    "Potion","Super Potion","Hyper Potion","Max Potion","Full Restore","Antidote","Paralyze Heal","Awakening","Burn Heal","Ice Heal","Full Heal","Pewter Crunchies",
    "Rage Candy Bar","Lava Cookie","Old Gateau","Casteliacone","Lumiose Galette","Shalour Sable","Big Malasada","Revive","Max Revive","Sacred Ash","Sweet Heart",
    "Heal Powder","Energy Powder","Energy Root","Revival Herb","Fresh Water","Soda Pop","Lemonade","MooMoo Milk","Berry Juice","Ether","Max Ether","Elixir",
    "Max Elixir","Joy Scent","Caffa Shot","Pollen Puff","Max Honey","Dynamax Candy","Remedy","Fine Remedy","Superb Remedy","Jubilife Muffin","Blessed Pot",

    /* Apricorns e Aprijuices */
    "Black Apricorn","Blue Apricorn","Green Apricorn","Pink Apricorn","Red Apricorn","White Apricorn","Yellow Apricorn","Apricorn","Black Juice","Blue Juice",
    "Green Juice","Pink Juice","Red Juice","Yellow Juice","White Juice","Happy Juice","Random Juice","Super Juice","Spoiled Apricorn",

    /* Battle e Feathers */
    "Health Wing","Muscle Wing","Resist Wing","Genius Wing","Clever Wing","Swift Wing","Max Mushroom","X Attack","X Defend","X Sp Attack","X Sp Defense",
    "X Speed","Ability Urge","Item Drop","Item Urge","Reset Urge","Guard Spec","Dire Hit","Aux Power","Aux Guard","Aux Evasion","Aux Powerguard",
    "Swap Snack","Choice Dumpling","TwiceSpiced Radish",

    /* Berries */
    "Cheri","Chesto","Pecha","Rawst","Aspear","Leppa","Oran","Persim","Lum","Sitrus","Figy","Wiki","Mago","Aguav","Iapapa","Razz","Bluk","Nanab","Wepear",
    "Pinap","Pomeg","Kelpsy","Qualot","Hondew","Grepa","Tamato","Cornn","Magost","Rabuta","Nomel","Spelon","Pamtre","Watmel","Durin","Belue","Occa","Passho",
    "Wacan","Rindo","Yache","Chople","Kebia","Shuca","Coba","Payapa","Tanga","Charti","Kasib","Haban","Coldur","Babiri","Chilan","Roseli","Liechi","Ganlon",
    "Salac","Petaya","Apicot","Lansat","Starf","Enigma","Micle","Custap","Jaboca","Rowap","Kee","Maranga","Caffa","Kinbeet","Nopol","Pumpcoll","Pynle","Rinka",
    "Spimle","Suseed","Lemo","Avocad","Cauli","Cocolum","Mispero","Unedo",

    /* Contest */
    "Pokeblock","Blue Scarf","Green Scarf","Pink Scarf","Red Scarf","Yellow Scarf","Stickers","Seals",

    /* Escape e Lures */
    "Escape Rope","Poke Doll","Fluffy Tail","Poke Toy","Smoke Ball","Repel","Super Repel","Max Repel","Lure","Super Lure","Max Lure","Pokeshi Doll",
    "Scatter Bang","Sticky Glob","Stealth Spray",

    /* Flutes */
    "Black Flute","Blue Flute","Red Flute","Yellow Flute","White Flute",

    /* Held */
    "Choice Band","Choice Scarf","Choice Specs","Binding Band","Damp Rock","Heat Rock","Icy Rock","Smooth Rock","Light Clay","Grip Claw","Terrain Extender",
    "Mental Herb","Power Herb","White Herb","Big Root","Leftovers","Shell Bell","Absorb Bulb","Assault Vest","Cell Battery","Electric Seed","Grassy Seed",
    "Misty Seed","Psychic Seed","Expert Belt","Life Orb","Luminous Moss","Metronome","Muscle Band","Scope Lens","Snowball","Weakness Policy","Wide Lens",
    "Wise Glasses","Zoom Lens","Lagging Tail","Quick Claw","Focus Band","Focus Sash","Flame Orb","Toxic Orb","Sticky Barb","Iron Ball","Black Sludge",
    "Ring Target","Air Ballon","Amulet Coin","Bright Powder","Eject Button","Float Stone","Protective Pads","Red Card","Rocky Helmet","Safety Gogles","Shed Shell",
    "Eviolite","Lucky Punch","Metal Powder","Quick Powder","Stick","Thick Club","Black Belt","Black Glasses","Charcoal","Dragon Fang","Hard Stone","Magnet",
    "Miracle Seed","Mystic Water","NeverMelt Ice","Poison Barb","Sharp Beak","Silk Scarf","Silver Powder","Soft Sand","Spell Tag","Twisted Spoon","Mystic Crown",
    "Pulse Bracelet","Explosive Stone","Sharp Claws","Punching Glove","Blunder Policy","Eject Pack","HeavyDuty Boots","Room Service","Throat Spray","Utility Umbrella",
    "Soothe Bell","Feather Fan","Slingshot","Poisonous Needle","Ectoplasm Gloves","Everstone","Wildfire Mask","Mimikyu Fantasy","Cosplay Fantasy","Microfone","Grill Teeth",
    "Shin Guard","Cotton Flower","Plague Mask","Majoras Mask","Icy Seed","Baby Seed","Booster Energy","Ability Shield","Clear Amulet","Mirror Herb","Covert Cloak","Loaded Dice", "Exp Share",

    /* Diversos */
    "Honey","Isco Caterpie","Isco Krabby","Isco Poliwag","Isco Slowpoke Tail","Isco Tropical","Isco Eletrico","Isco Profundo","Isco Alto Mar","Isco Escama Dragao","Wool",
    "Cotton","Silk String","Rotten Berry","Adrenaline Orb","Catching Net","Sleep Grenade","Dynamax Crystal","Spring Mulch","Summer Mulch","Fall Mulch","Winter Mulch",
    "Super Mulch","Deluxe Mulch","Perpetual Mulch","Magnetic Grenade","Stun Grenade","Abillity Choker","Yell Horn","Stun Gel","Prestine Gel","Nectar","Bean Cake",
    "Grain Cake","Honey Cake","Salt Cake","Mushroom Cake","Smoke Bomb","Recharge Battery","Hisuian Stone","Gimmighoul Coin",

    /* Valiosos */

    "Nugget","Big Nugget","Tiny Mushroom","Big Mushroom","Pearl","Big Pearl","Silver Leaf","Gold Leaf","Slowpoke Tail","Star Piece","Stardust","Comet Shard","Rare Bone",
    "Balm Mushroom","Pearl String","Strange Souvenir","Beach Glass","Chalky Stone","Marble","Polished Mud Ball","Tropical Shell","Relic Band","Relic Copper","Relic Gold",
    "Relic Crown","Relic Silver","Relic Statue","Relic Vase","Heart Scale","Pretty Wing","Black Feather","Memory Crystal","Tiny Bamboo Shoot","Big Bamboo Shoot",

    /* Pokeballs */
    "Pokeball","Premier Ball","Great Ball","Ultra Ball","Luxury Ball","Cramped Ball","Friend Ball","Heal Ball","Status Ball","Static Ball","Soak Ball","Bubble Ball",
    "Shiny Ball","Shifter Ball","Jolt Ball","Galvic Ball","Grassy Ball","Misty Ball","Mind Ball","Dusk Ball","Dawn Ball","Lure Ball","Nest Ball","Quick Ball","Fast Ball",
    "Exotic Ball","Repeat Ball","Timer Ball","Heavy Ball","Lite Ball","Level Ball","Love Ball","Pride Ball","Frozen Ball","Gritt Ball","Rain Ball","Heat Ball","Honey Ball",
    "Miner Ball","Snare Ball","EvoStone Ball","Dyna Ball","Beast Ball","Dream Ball","Shadow Ball","Purity Ball","Type Ball","Gea Ball","Pyro Ball","Aero Ball","Aqua Ball",
    "Dive Ball","Net Ball","Navi Ball","Magnet Ball","Future Ball","Melody Ball","Spirit Ball","Aura Ball","Aura Ball","Egg Ball","Odd Ball","Feather Ball","Heavy Ball"
    };
					
	string itemAux[] = { };
	int i=0,j=0,k=0,qntItem, qntLetras, qntLetrasItem, contaLetras;

//	Número de itens existentes cadastrados
	qntItem = sizeof(item) / sizeof(string);
	
// Entrada: Quantidade de Letras
do{

	cout << "Digite a quantidade de letras sorteadas (max.30): ";
	cin >> qntLetras;
} while (qntLetras > 30);
	
		char letras[qntLetras], letrasAux[qntLetras];
	
//	Entrada: Letras sorteadas
	for (i=0;i<qntLetras;i++){
		cout << "Digite a " << i+1 << "a Letra: ";
		cin >> letras[i];
	}

system ("cls");
cout << "Itens possíveis: ";

//	Procura item
	for (i=0;i<qntItem;i++){
		int n = item[i].length();
 		char nomeItemArray[n + 1], nomeItemArrayAux[n + 1];
 	
 		strcpy(nomeItemArray, item[i].c_str());
 		copy (letras, letras+qntLetras, letrasAux);

	for (k=0;k<qntLetras;k++){												// Array das Letras Digitadas pelo Usuário
		for (j=0;j<n;j++){													// Array das Letras dos Itens
			if (toupper(letrasAux[k]) == toupper(nomeItemArray[j])){
				nomeItemArray[j] = ' ';
				letrasAux[k] = ' ';
			} 
		}
	}
		
 		contaLetras = 0;
				for (j=0;j<n;j++){											// Verifica se encontrou todos os números
					if (nomeItemArray[j] == ' '){
						contaLetras++;
				} else {
					continue;
				}
				
				if (contaLetras == n){
				cout << "\n- " << item[i];
				}
}
			
	}
	
		}
	
