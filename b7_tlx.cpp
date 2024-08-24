#include <iostream>

int main(){

    int luas_kandang = 12;
    int baris = 1;

    while(baris < 4){
        luas_kandang += 7;
        std::cout << baris << ": ";
        std::cout << luas_kandang << std::endl;

        baris += 1 ;
    }
}