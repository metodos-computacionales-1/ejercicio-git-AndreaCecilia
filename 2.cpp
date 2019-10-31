#include <iostream>
int a;
int b;
int c;
int main( int argc, char *argv[]){
    argc=3;
     std::cout << "Have " << argc << " arguments:" << std::endl;

        
    
    if((argv[0]*argv[0]+argv[1]*argv[1]=argv[2]*argv[2])){
        std::cout << "Si puede " <<  std::endl;
        
    }
    else{
        std::cout << "No puede " <<  std::endl;
    }

  return 0;
}
