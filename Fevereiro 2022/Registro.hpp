#ifndef REGISTRATION_HPP
#define REGISTRATION_HPP

#include <string>

struct Registr;

class Registro{
 public:
    Registro();
    ~Registro();
    
    void novoRegistro(std::string User, 
                     std::string password,
                     int id, 
                     std:: string email);
    
    
 private:
    static int id;
    Registr* head = nullptr;
};
#endif
