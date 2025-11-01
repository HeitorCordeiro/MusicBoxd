// Arquivo: Sistema.h
#ifndef SISTEMA_H
#define SISTEMA_H

#include <vector>
#include <string>
using namespace std;

class Usuario;
class Musica;
class Artista;

class Sistema {
private:
    vector<Usuario*> usuarios;
    vector<Musica*> musicas;
    vector<Artista*> artistas;
public:
    Sistema();
    void cadastrarUsuario(string nome, string email);
    void cadastrarArtista(string nome, string genero);
    void cadastrarMusica(string titulo, string genero, float duracao, string album, int ano, string capa, vector<string> plataformas, string artistaNome);
    void listarMusicas();

};

#endif // SISTEMA_H
