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
    string getComentario();
    Usuario* getAutor();
    Musica* getMusica();
    bool isOculto();
    void ocultar();
    void revelar();
    virtual void mostrarAvaliacao();
    virtual void mostrarAvaliacaoAdmin();
    void setComentario(const string& c);
    void setNota(int n);
    virtual ~Avaliacao() = default;

};

#endif // AVALIACAO_H
