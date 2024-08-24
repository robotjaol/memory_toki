#include <iostream>

int main()
{
    int luas_kandang, total_luas_kandang, jumlah_kandang, upgrade;
    luas_kandang = 12;
    upgrade = 7;
    jumlah_kandang = 1;

    total_luas_kandang = luas_kandang;

    while (total_luas_kandang < 800)
    {
        luas_kandang += upgrade;
        total_luas_kandang += luas_kandang;
        jumlah_kandang += 1;

    }

    std::cout << jumlah_kandang << std::endl;
}