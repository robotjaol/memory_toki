#include <iostream>

int main()
{
    int N, M, P;
    std::cin >> N >> M >> P;

    // A [N x M]
    int A[100][100];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            std::cin >> A[i][j];
        }
    }

    // B [M x P]
    int B[100][100];
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < P; j++)
        {
            std::cin >> B[i][j];
        }
    }

    // C -> N x P untuk hasil perkalian
    int C[100][100] = {0}; // Inisialisasi matriks C == nol

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < P; j++)
        {
            for (int k = 0; k < M; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // C
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < P; j++)
        {
            std::cout << C[i][j];
            if (j < P - 1)
                std::cout << " ";
        }
        std::cout << std::endl; // Ganti baris cok
    }

    return 0;
}
