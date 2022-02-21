#ifndef LOGIN_HPP
#define LOGIN_HPP


#include "Registro.hpp"

class Login{
 private:
    

 public:
    Login();
    ~Login();

    bool verificaLogin(Registr* head, std::string User, std::string password);

    class ExcessaoSemLogin{};
  

};
#endif


