#include <iostream>

int main()
{
    int N = 10;

    for (int i = 0; i < N; i++)
    {
        for (int b = 0; b <= i; b++)
        {
            std::cout << "*";
        }

        for (int t = 9; t > i; t--)
        {
            std::cout << ".";
        }

        std::cout << std::endl;
    }

    return 0;
}
