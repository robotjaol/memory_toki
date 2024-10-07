#include <iostream>
#include <string>
#include <vector>

std::string kalkulator(char op, std::vector<std::string> data)
{
    if (op == '+')
    {
        long long sum = 0;
        for (std::string s : data)
        {
            sum += std::stoll(s); // Cnv S to Long long
        }
        return std::to_string(sum);
    }
    else if (op == '*')
    {
        long long product = 1;
        for (std::string s : data)
        {
            product *= std::stoll(s); // Cnv S to Long long
        }
        return std::to_string(product);
    }
    else
    {
        return "KESALAHAN";
    }
}

int main()
{
    std::cout << kalkulator('+', {"1234567890", "0", "987654321", "314159265"}) << std::endl;
    std::cout << kalkulator('+', {"123", "456", "789", "111"}) << std::endl;
    std::cout << kalkulator('*', {"123", "456", "789", "111"}) << std::endl;
    std::cout << kalkulator('*', {"17", "8", "1945"}) << std::endl;
    std::cout << kalkulator('?', {"3", "2", "1"}) << std::endl;
}
