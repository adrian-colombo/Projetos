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
	string item[] = { "Lucky Egg",  "Luck Incense", "Exp. Share", "Amulet Coin" };
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
	
