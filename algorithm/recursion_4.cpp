#include <iostream>

int jumlah_digit(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n % 10) + jumlah_digit(n / 10);
    }
}

int main()
{
    std::cout << jumlah_digit(1982304556) << std::endl;
}
