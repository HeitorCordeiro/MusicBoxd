#include "Avaliacao.h"
#include "Usuario.h"
#include "Musica.h"
#include <iostream>
#include <iomanip>

using namespace std;

// Construtor: inicializa todos os campos da avaliação, definindo data atual e oculto como falso
Avaliacao::Avaliacao(Usuario* autor, Musica* musica, int nota, string comentario)
    : autor(autor), musica(musica), nota(nota), comentario(comentario), oculto(false) {
    dataCriacao = time(nullptr); // Registra a data e hora da criação
}

// Retorna a nota atribuída à música
int Avaliacao::getNota() {
    return nota;
}

// Retorna verdadeiro se a avaliação estiver marcada como oculta
bool Avaliacao::isOculto() {
    return oculto;
}

// Marca a avaliação como oculta, impedindo que seja exibida
void Avaliacao::ocultar() {
    oculto = true;
}

// Retorna o ponteiro da música associada à avaliação
Musica* Avaliacao::getMusica() {
    return musica;
}

// Exibe as informações da avaliação no console, incluindo autor, nota e data
void Avaliacao::mostrarAvaliacao() {
    if (oculto) {
        cout << "[AVALIAÇÃO OCULTA]" << endl;
        return;
    }

    cout << "Autor: " << (autor ? autor->getNome() : "<desconhecido>") << endl;
    cout << "Música: " << (musica ? musica->getTitulo() : "<sem música>") << endl;
    cout << "Nota: " << nota << "/10" << endl;
    cout << "Comentário: " << comentario << endl;

    // Exibe data de criação formatada (dia/mês/ano e hora:minuto:segundo)
    tm* data = localtime(&dataCriacao);
    cout << "Data: " << put_time(data, "%d/%m/%Y %H:%M:%S") << endl;
}
