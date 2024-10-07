#include <iostream>
#include <cmath>
#include <climits>

int main()
{
    int N, D;
    std::cin >> N >> D;

    int X[1000], Y[1000];

    for (int i = 0; i < N; i++)
    {
        std::cin >> X[i] >> Y[i];
    }

    int min_tingkat_kedekatan = INT_MAX;
    int max_tingkat_kedekatan = INT_MIN;

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            int kedekatan = (std::abs(X[j] - X[i]) + std::abs(Y[j] - Y[i])) / D;

            if (kedekatan < min_tingkat_kedekatan)
            {
                min_tingkat_kedekatan = kedekatan;
            }
            if (kedekatan > max_tingkat_kedekatan)
            {
                max_tingkat_kedekatan = kedekatan;
            }
        }
    }

    std::cout << min_tingkat_kedekatan << " " << max_tingkat_kedekatan << std::endl;

    return 0;
}
