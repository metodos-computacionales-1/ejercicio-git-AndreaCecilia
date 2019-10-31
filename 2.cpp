#include <iostream>

int main( ){
    std::cout<< "Escribe un numero: ";
    int a;
    std::cin >> a;
   std::cout<< "Escribe otro numero: ";
    int b;
    std::cin >> b; 
    std::cout<< "Escribe otro numero: ";
    int c;
    std::cin >> c;

        
    
    if((a*a+b*b==c*c)){
        std::cout << "Si puede " <<  std::endl;
        
    }
    else{
        std::cout << "No puede " <<  std::endl;
    }

  return 0;
}
