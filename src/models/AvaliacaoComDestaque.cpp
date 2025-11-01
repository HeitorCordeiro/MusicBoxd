#include "AvaliacaoComDestaque.h"
#include <iostream>

using namespace std;

AvaliacaoComDestaque::AvaliacaoComDestaque(Usuario* autor, Musica* musica, int nota, string comentario, int curtidas)
    : Avaliacao(autor, musica, nota, comentario), curtidas(curtidas) {
    // implementação
}

void AvaliacaoComDestaque::curtir() {
    // implementação
}

int AvaliacaoComDestaque::getCurtidas() {
   // implementação 
}

void AvaliacaoComDestaque::mostrarAvaliacao() {
    // implementação
}
