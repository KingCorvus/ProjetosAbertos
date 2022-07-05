#include "Registro.hpp"
#include "Login.hpp"

int Registro::id = 0;
struct Registr{
    std::string User; 
    std::string password;
    int id; 
    std:: string email;
    Registr* prev = nullptr; Registr* next = nullptr;
};

Registro::Registro(/* args */){
}

Registro:: ~Registro(){
}

void Registro::novoRegistro(std::string User, std::string password, int id, std:: string email){
 if (head == nullptr){
    
 }
 
}