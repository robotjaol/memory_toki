#include <iostream>
#include <string>

std::string biner(int n)
{
    if (n == 0)
    {
        return "0";
    }
    if (n == 1)
    {
        return "1";
    }
    return biner(n / 2) + std::to_string(n % 2);
}

int main()
{
    std::cout << biner(0) << std::endl;
    std::cout << biner(1) << std::endl;
    std::cout << biner(512) << std::endl;
    std::cout << biner(1697) << std::endl;
    std::cout << biner(1048575) << std::endl;
}
