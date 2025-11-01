// Arquivo: Avaliacao.h
#ifndef AVALIACAO_H
#define AVALIACAO_H

#include <string>
#include <ctime>
using namespace std;

class Usuario;
class Musica;

class Avaliacao {
protected:
    Usuario* autor;
    Musica* musica;
    int nota;
    string comentario;
    bool oculto;
    time_t dataCriacao;
public:
    Avaliacao(Usuario* autor, Musica* musica, int nota, string comentario);
    int getNota();
    bool isOculto();
    void ocultar();
    virtual void mostrarAvaliacao();
    virtual ~Avaliacao() = default;

};

#endif // AVALIACAO_H
