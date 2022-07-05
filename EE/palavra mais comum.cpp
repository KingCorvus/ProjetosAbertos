// Exame especial - palavra mais comum - Gustavo Rodrigues de Aquino (2018020476) - Incompleto;
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> vecEntrada;
    std::vector<std::string> vecRepetido;
    std::string palavra;

    //este bloco faz cada palavra ocupar um lugar no vetor de strings
    while (std::cin >> palavra){
        vecEntrada.push_back(palavra);
    }

    std::vector<std::string>::iterator it;
    std::vector<std::string>::iterator itr;

    //este bloco seleciona todas as palavras repetidas do vetor de entrada e coloca em um novo vetor (apenas de palavras repetidas)
    for ( it = vecEntrada.begin(); it < vecEntrada.end(); it++){
        for ( itr = vecEntrada.begin()++; itr < vecEntrada.end(); itr++){
            if (*it == *itr){
                vecRepetido.push_back(*it);
            }
        }
    }

    palavraComum(vecEntrada);

    return 0;
}

//esta função conta qual das palavras do vetor de palavras repetidas é a mais comum;
std::string palavraComum(std::vector<std::string> vec){
    int count[vec.size()];
    int countFreq;
    int i = 0;
    std::vector<std::string>::iterator it;
    for ( it = vec.begin(); it < vec.end(); it++){
        if (*it == *it++){
            countFreq++;
        }else{
            count[i] = countFreq;
            i++;
        }
    }
}



//A prova escrita fechou às 15:40, eu estava no meio da segunda questão 
//não acredito que isto faça alguma diferença para mim, mas outros alunos podem ter sido prejudicados.

//Até o semestre que vem... de novo.