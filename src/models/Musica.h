// Arquivo: Musica.h
#ifndef MUSICA_H
#define MUSICA_H

#include <string>
#include <vector>
#include <ctime>
using namespace std;

class Artista;
class Avaliacao;

class Musica {
private:
    string titulo;
    string genero;
    float duracao;
    string album;
    int anoLancamento;
    string capa;
    vector<string> plataformas;
    Artista* artista;
    vector<Avaliacao*> avaliacoes;
public:
    Musica(string titulo, string genero, float duracao, Artista* artista, string album, int ano, string capa, vector<string> plataformas);
    string getTitulo();
    Artista* getArtista();
    void adicionarAvaliacao(Avaliacao* avaliacao);
    float calcularMedia();
    void mostrarInfo();

};

#endif // MUSICA_H
