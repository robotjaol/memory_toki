#include <iostream>

int main(){
    int total_baris = 0, luas_kandang = 12;

    while(total_baris < 3){

        luas_kandang += 7;
        std::cout << luas_kandang << std::endl;
        total_baris += 1;
    }
}