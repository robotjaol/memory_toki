#include <iostream>

int total_kandang = 10;
int bebek[11]; // total kandang bebek

void kosongkan_kandang()
{
    for (int i = 1; i <= total_kandang; i++)
    {
        bebek[i] = 0;
    }
}

void isi_bebek_ke_dalam_kandang(int kandang_awal, int kandang_akhir, int banyak_bebek)
{
    for (int i = kandang_awal; i <= kandang_akhir; i++)
    {
        bebek[i] += banyak_bebek;
    }
}

int bebek_terbanyak_dalam_suatu_kandang()
{
    int bebek_terbanyak = bebek[1];
    for (int i = 2; i <= total_kandang; i++)
    {
        bebek_terbanyak = std::max(bebek_terbanyak, bebek[i]);
    }
    return bebek_terbanyak;
}

int main()
{
    kosongkan_kandang();

    isi_bebek_ke_dalam_kandang(1, 8, 2);
    isi_bebek_ke_dalam_kandang(2, 9, 10);
    isi_bebek_ke_dalam_kandang(5, 6, 1);
    isi_bebek_ke_dalam_kandang(9, 10, 3);
    isi_bebek_ke_dalam_kandang(1, 4, 7);
    isi_bebek_ke_dalam_kandang(1, 4, 2);
    isi_bebek_ke_dalam_kandang(4, 8, 6);

    std::cout << bebek_terbanyak_dalam_suatu_kandang() << std::endl;
}
