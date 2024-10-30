#ifndef AVALIACAO_HPP_INCLUDED
#define AVALIACAO_HPP_INCLUDED
#include <iostream>
using namespace std;

class Avaliacao{
private:
    string avaliacao;

public:
    string getAvaliacao();
    bool setAvaliacao(string avaliacao);
    bool validacaoAvaliacao(string avaliacao);

};

inline string Avaliacao::getAvaliacao(){
    return avaliacao;
}

#endif // AVALIACAO_HPP_INCLUDED
