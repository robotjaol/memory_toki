#include <iostream>

int main()
{
    int N;
    std::cin >> N;

    int num = 0;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << num;
            num = (num + 1) % 10;
        }
        std::cout << std::endl;
    }

    return 0;
}
