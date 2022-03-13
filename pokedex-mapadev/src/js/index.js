    // Duas variáveis no JS pra trabalhar com os elementos da tela
const listaSelecaoPokemons = document.querySelectorAll('.pokemon')
const pokemonCard = document.querySelectorAll('.cartao-pokemon')

    // Evento de clique feito pelo usuário na listagem de
listaSelecaoPokemons.forEach(pokemon => {
    pokemon.addEventListener('click', () => {
    // remover cartão aberto
        const cartaoPokemonAberto = document.querySelector('.aberto')
        cartaoPokemonAberto.classList.remove('aberto')


    // Ao clicar em um pokémon da listagem, pega o id desse pokemon pra saber qual cartão mostrar
    const idPokemonSelecionado = pokemon.attributes.id.value

    const idDoCartaoPokemonParaAbrir = 'cartao-' + idPokemonSelecionado
    const cartaoPokemonParaAbrir = document.getElementById(idDoCartaoPokemonParaAbrir)
    cartaoPokemonParaAbrir.classList.add('aberto')

    // remover a classe ativo que marca selecionado
    const pokemonAtivoNaListagem = document.querySelector('.ativo')
    pokemonAtivoNaListagem.classList.remove('ativo')

    // adicionar a classe ativo do item da lista selecionado
    const pokemonSelecionadoNaListagem = document.getElementById(idPokemonSelecionado)
    pokemonSelecionadoNaListagem.classList.add('ativo')
    })
})