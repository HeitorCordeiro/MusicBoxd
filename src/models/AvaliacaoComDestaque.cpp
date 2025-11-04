#include "AvaliacaoComDestaque.h"
#include <iostream>

using namespace std;

// Construtor: inicializa a avaliação base e define o número inicial de curtidas
AvaliacaoComDestaque::AvaliacaoComDestaque(Usuario* autor, Musica* musica, int nota, string comentario, int curtidas)
    : Avaliacao(autor, musica, nota, comentario), curtidas(curtidas) {}

// Incrementa o contador de curtidas da avaliação
void AvaliacaoComDestaque::curtir() {
    curtidas++;
}

// Retorna o número de curtidas
int AvaliacaoComDestaque::getCurtidas() {
    return curtidas;
}

// Exibe a avaliação completa, com curtidas e informações herdadas
void AvaliacaoComDestaque::mostrarAvaliacao() {
    if (oculto) {
        cout << "[AVALIAÇÃO COM DESTAQUE OCULTA]" << endl;
        return;
    }

    // Chama a exibição padrão da classe base
    Avaliacao::mostrarAvaliacao();

    // Mostra as curtidas adicionais
    cout << "Curtidas: " << curtidas << endl;
    cout << "---------------------------" << endl;
}
