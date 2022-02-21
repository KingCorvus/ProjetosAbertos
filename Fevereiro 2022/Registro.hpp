#ifndef REGISTRATION_HPP
#define REGISTRATION_HPP

#include <string>

struct Registr;

class Registro{
 public:
    Registro();
    ~Registro();
    
    void novoRegistro();
    
    
 private:
    static int id;
    Registr* head = nullptr;
};
#endif
