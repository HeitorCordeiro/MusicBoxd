#include "Usuario.h"
#include "Avaliacao.h"
#include "Lista.h"
#include <iostream>

using namespace std;

Usuario::Usuario(string nome, string email, bool admin)
    : nome(nome), email(email), admin(admin), status("ativo") {
    // implementação 
}

string Usuario::getNome() {
    // implementação 
}

string Usuario::getEmail() {
    // implementação 
}

string Usuario::getStatus() {
    // implementação 
}

void Usuario::suspender(string motivo) {
    // implementação
}

void Usuario::adicionarAviso(string msg) {
    // implementação
}

void Usuario::seguir(Usuario* outroUsuario) {
    // implementação 
}

void Usuario::listarSeguindo() {
    // implementação 
}

void Usuario::listarSeguidores() {
    // implementação 
}

void Usuario::adicionarAvaliacao(Avaliacao* avaliacao) {
    // implementação 
}

void Usuario::criarLista(string nomeLista) {
    // implementação 
}

void Usuario::curtirAvaliacao(Avaliacao* avaliacao) {
    // implementação 
}

void Usuario::mostrarPerfil() {
    // implementação 
}
