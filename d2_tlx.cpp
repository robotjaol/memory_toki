#include <iostream>

int main(){

    bool ada_yang_dijual = false;

    for(int sisi = 121; sisi <= 125; sisi++){
        bool kelipatan_2 = sisi % 2 == 0;
        bool kelipatan_3 = sisi % 3 == 0;

        if(kelipatan_2 == 0 && kelipatan_3 != 0){
            ada_yang_dijual = true;
        }
    }

    if (ada_yang_dijual == false)
    {
        std::cout << "tidak ada" << std::endl;
    }
    else{
        std::cout << "ada" << std::endl;
    }
}