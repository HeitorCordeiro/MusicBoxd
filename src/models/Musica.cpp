#include "Musica.h"
#include "Artista.h"
#include "Avaliacao.h"
#include <iostream>

using namespace std;

Musica::Musica(string titulo, string genero, float duracao, Artista* artista, string album, int ano, string capa, vector<string> plataformas)
    : titulo(titulo), genero(genero), duracao(duracao), album(album), anoLancamento(ano), capa(capa), plataformas(plataformas), artista(artista) {
    // implementação 
}

string Musica::getTitulo() {
    // implementação 
}

Artista* Musica::getArtista() {
    // implementação 
}

void Musica::adicionarAvaliacao(Avaliacao* avaliacao) {
    // implementação 
}

float Musica::calcularMedia() {
    // implementação 
}

void Musica::mostrarInfo() {
    // implementação 
}
