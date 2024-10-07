#include <bits/stdc++.h>
// Intinya soal ini menambahkan semua deret angka, kemudian total angka dikurangi urutan angka dari i
// dan akan dicetak berulang sesuai jumlah deret

int main()
{
    long long N;
    std::cin >> N;

    std::vector<int> A(N);
    long long total = 0;

    for (int i = 0; i < N; i++)
    {
        std::cin >> A[i];
        total += A[i];
    }

    for (int i = 0; i < N; i++)
    {
        std::cout << total - A[i] << std::endl;
    }

    return 0;
}
