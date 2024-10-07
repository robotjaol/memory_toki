#include <bits/stdc++.h>

std::vector<int> jumlah_bersebelahan(std::vector<int> v)
{
    std::vector<int> result;
    for (int i = 0; i < v.size() - 1; i++)
    {
        result.push_back(v[i] + v[i + 1]); // Add result penjumlahan elemen ke-i dan ke-(i+1)
    }

    return result;
}

void cetak_vector(std::vector<int> v)
{
    std::cout << "vector: ";
    for (int x : v)
    {
        std::cout << " " << x;
    }
    std::cout << std::endl;
}

int main()
{
    cetak_vector(jumlah_bersebelahan({1, 2, 3, 4, 5}));
    cetak_vector(jumlah_bersebelahan({17, 8, 1945}));
}