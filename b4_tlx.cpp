#include <iostream>

int main(){
    int jantan = 63;
    int betina = 192;

    // bulan pertama
    betina = betina + jantan;
    jantan = jantan - (jantan/3);

    //bulan kedua
    jantan =  jantan + betina;
    betina = betina - 10;

    std::cout << jantan + betina << std::endl;
}