// Arquivo: AvaliacaoComDestaque.h
#ifndef AVALIACAO_COM_DESTAQUE_H
#define AVALIACAO_COM_DESTAQUE_H

#include "Avaliacao.h"
using namespace std;

class AvaliacaoComDestaque : public Avaliacao {
private:
    int curtidas;
public:
    AvaliacaoComDestaque(Usuario* autor, Musica* musica, int nota, string comentario, int curtidas = 0);
    void curtir();
    int getCurtidas();
    void mostrarAvaliacao() override;
};

#endif // AVALIACAO_COM_DESTAQUE_H
