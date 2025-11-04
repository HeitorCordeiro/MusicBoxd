#ifndef AVALIACAO_COM_DESTAQUE_H
#define AVALIACAO_COM_DESTAQUE_H

#include "Avaliacao.h"

// Classe derivada que representa uma avaliação com destaque, permitindo curtidas
class AvaliacaoComDestaque : public Avaliacao {
private:
    int curtidas; // Quantidade de curtidas que a avaliação recebeu

public:
    // Construtor que chama o construtor da classe base e define o número inicial de curtidas
    AvaliacaoComDestaque(Usuario* autor, Musica* musica, int nota, string comentario, int curtidas = 0);

    // Incrementa o número de curtidas
    void curtir();

    // Retorna o número atual de curtidas
    int getCurtidas();
    
    // Sobrescreve o método de exibição para incluir as curtidas
    void mostrarAvaliacao() override;
};

#endif // AVALIACAO_COM_DESTAQUE_H
