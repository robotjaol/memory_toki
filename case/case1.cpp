#include <bits/stdc++.h>

// Total kan semua deret N
int main()
{
    int N;
    std::cin >> N;

    std::vector<int> A(N);
    int total = 0;

    // Input and sum total
    for (int i = 0; i < N; i++)
    {
        std::cin >> A[i];
        total += A[i];
    }

    // Print total - A[i] while i
    for (int i = 0; i < N; i++)
    {
        std::cout << total - A[i] << std::endl;
    }

    return 0;
}