#include <iostream>

int main(int a,int b, int c){
    
    if((a*a+b*b=c*c)|(b*b+c*c=a*a)|(a*a+c*c=b*b)){
        std::cout << "Si puede " <<  std::endl;
        
    }
    else{
        std::cout << "No puede " <<  std::endl;
    }

  return 0;
}
