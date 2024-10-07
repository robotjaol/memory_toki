#include <iostream>
#include <algorithm>

int main()
{
    int N;
    std::cin >> N;

    int A[N];
    for (int i = 0; i < N; i++)
    {
        std::cin >> A[i];
    }

    int max_value = *std::max_element(A, A + N);
    int min_value = *std::min_element(A, A + N);

    std::cout << max_value << " " << min_value << std::endl;

    return 0;
}
