#include <iostream>
#include <cmath>

int main()
{
    int A, B, K, x;
    std::cin >> A >> B >> K >> x;

    for (int i = 0; i < K; i++)
    {
        x = abs(A * x + B); // f(x) = |Ax + B|
    }

    std::cout << x << std::endl;
    return 0;
}
