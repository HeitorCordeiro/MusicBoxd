#ifndef AVALIACAO_H
#define AVALIACAO_H

#include <string>
#include <ctime>
using namespace std;

class Usuario;
class Musica;

// Classe base que representa uma avaliação genérica feita por um usuário sobre uma música
class Avaliacao {
protected:
    Usuario* autor;       // Ponteiro para o autor da avaliação
    Musica* musica;       // Ponteiro para a música avaliada
    int nota;             // Nota atribuída à música
    string comentario;    // Comentário textual do usuário
    bool oculto;          // Indica se a avaliação está oculta
    time_t dataCriacao;   // Data e hora da criação da avaliação

public:
    // Construtor que inicializa os atributos principais
    Avaliacao(Usuario* autor, Musica* musica, int nota, string comentario);

    // Retorna a nota atribuída
    int getNota();

    // Indica se a avaliação está oculta
    bool isOculto();

    // Oculta a avaliação (marca como invisível)
    void ocultar();

    // Retorna o ponteiro da música avaliada
    Musica* getMusica();

    // Exibe os dados da avaliação no console
    virtual void mostrarAvaliacao();

    // Destrutor virtual padrão
    virtual ~Avaliacao() = default;
};

#endif // AVALIACAO_H
