#include <iostream>

int main(){
    int total_bebek = 67 + 98;
    

    if(total_bebek % 13 == 0 ){
        std::cout << 13 << std::endl;
    }
    else if(total_bebek % 11 == 0 ){
        std::cout << 11 << std::endl;
    }
    else if(total_bebek % 5 == 0 ){
        std::cout << 5 << std::endl;
    }
    else if(total_bebek % 3 == 0 ){
        std::cout << 3 << std::endl;
    }else{
        std::cout << 1 << std::endl;
    }
}