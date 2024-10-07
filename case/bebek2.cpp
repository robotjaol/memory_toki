#include <iostream>
#include <cmath>

int main()
{
    long long N;
    std::cin >> N;

    long long r_terbaik = 1;
    long long c_terbaik = N;

    // Loop hanya sampai sqrt(N)
    for (long long r = 1; r * r <= N; ++r)
    {
        if (N % r == 0)
        {
            long long c = N / r;
            if (r <= c && (c - r) < (c_terbaik - r_terbaik))
            {
                r_terbaik = r;
                c_terbaik = c;
            }
        }
    }

    std::cout << r_terbaik << " " << c_terbaik << std::endl;

    return 0;
}
