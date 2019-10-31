#include <iostream>

int main(){

std::cout<< "Escribe el radio: ";
    int R;
std::cin >> R;
  int pi=3.145;
    float dia=R*2;
    std::cout << "diametro: " << dia << std::endl;
    float peri=2*pi*R; 
    std::cout << "Perimetro: " << peri << std::endl;
    float area=pi*R*R;

    std::cout << "Area: " << area << std::endl;
  
  return 0;
}
