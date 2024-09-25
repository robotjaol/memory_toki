#include <iostream>
using namespace std;

int main()
{
    int luas[4][3] = {
        {225 * 335, 299 * 278, 300 * 250},
        {215 * 394, 144 * 718, 300 * 290},
        {200 * 400, 240 * 333, 142 * 619},
        {314 * 298, 411 * 198, 333 * 222}};

    int harga_jual[3] = {100, 120, 150};

    int total_penjualan_merek_1 = 0;
    int total_penjualan_merek_2 = 0;
    int total_penjualan_merek_3 = 0;

    for (int i = 0; i < 4; i++)
    {
        total_penjualan_merek_1 += luas[i][0] * harga_jual[0];
        total_penjualan_merek_2 += luas[i][1] * harga_jual[1];
        total_penjualan_merek_3 += luas[i][2] * harga_jual[2];
    }

    cout << total_penjualan_merek_1 << endl;
    cout << total_penjualan_merek_2 << endl;
    cout << total_penjualan_merek_3 << endl;

    return 0;
}
