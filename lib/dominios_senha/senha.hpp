#ifndef SENHA_HPP_INCLUDED
#define SENHA_HPP_INCLUDED
#include <iostream>
using namespace std;

class Senha{
private:
    string senha;

public:
    string getSenha();
    bool setSenha(string senha);
    bool validacaoSenha(string senha);

    };

inline string Senha::getSenha(){
    return senha;
}

#endif // SENHA_HPP_INCLUDED
