// Arquivo: Usuario.h
#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <vector>
using namespace std;

class Avaliacao;
class Lista;
class Usuario {
private:
    string nome;
    string email;
    bool admin;
    string status;
    vector<string> avisos;
    vector<Usuario*> seguindo;
    vector<Usuario*> seguidores;
    vector<Avaliacao*> avaliacoes;
    vector<Lista*> listas;
public:
    Usuario(string nome, string email, bool admin=false);
    string getNome();
    string getEmail();
    string getStatus();
    void suspender(string motivo);
    void adicionarAviso(string msg);
    void seguir(Usuario* outroUsuario);
    void listarSeguindo();
    void listarSeguidores();
    void adicionarAvaliacao(Avaliacao* avaliacao);
    void criarLista(string nomeLista);
    void curtirAvaliacao(Avaliacao* avaliacao);
    void mostrarPerfil();

};

#endif // USUARIO_H
