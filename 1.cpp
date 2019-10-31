#include <iostream>

int main(){

std::cout<< "Escribe el radio: ";
std::cin >> int R;
  int pi=3.145;
    float dia=R*2;
    std::cout<< "diametro: ";
    std::cout<< dia;
    float peri=2*pi*R; 
    std::cout<< "Perimetro";
    std::cout<< peri;
    float area=pi*R*R;
    std::cout<< "Area";
    std::cout<< area;
  
  return 0;
}
