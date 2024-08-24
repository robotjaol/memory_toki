#include <iostream>

int main()
{
    int jantan, betina, total;
    jantan = 67;
    betina = 98;
    total = jantan+ betina;

    if(total % 2 == 0){
        std::cout << "total banyaknya bebek adalah bilangan genap" << std::endl;
    }
    else{
        std::cout << "total banyaknya bebek adalah bilangan ganjil" << std::endl; 
    }
}