#include <iostream>

int main()
{
    int jantan, betina, tanggal;

    jantan = 0;
    betina = 0;
    tanggal = 1;

    while (betina <= 10 * jantan)
    {
        jantan += 1;
        betina += tanggal;
        tanggal += 1;
    }

    std::cout<< tanggal <<std::endl;

}