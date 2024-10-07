#include <iostream>

int main()
{
    int N;
    std::cin >> N;

    int r_terbaik = 1;
    int c_terbaik = N;

    // Mencari pasangan r dan c dengan selisih terkecil
    for (int r = 1; r * r <= N; r++)
    {
        if (N % r == 0)
        {
            int c = N / r;
            if ((c - r) < (c_terbaik - r_terbaik))
            {
                r_terbaik = r;
                c_terbaik = c;
            }
        }
    }
    std::cout << r_terbaik << " " << c_terbaik << std::endl;

    return 0;
}
