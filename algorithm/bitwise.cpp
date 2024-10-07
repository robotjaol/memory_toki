#include <bits/stdc++.h>

int main()
{
    int a, b;

    std::cout << "Masukkan dua bilangan bulat (a dan b): ";
    std::cin >> a >> b;

    std::cout << "a: " << a << " (" << std::bitset<8>(a) << ")" << std::endl;
    std::cout << "b: " << b << " (" << std::bitset<8>(b) << ")" << std::endl;

    std::cout << "a AND b: " << (a & b) << " (" << std::bitset<8>(a & b) << ")" << std::endl;
    std::cout << "a OR b: " << (a | b) << " (" << std::bitset<8>(a | b) << ")" << std::endl;
    std::cout << "a XOR b: " << (a ^ b) << " (" << std::bitset<8>(a ^ b) << ")" << std::endl;
    std::cout << "NOT a: " << (~a) << " (" << std::bitset<8>(~a) << ")" << std::endl;
    std::cout << "NOT b: " << (~b) << " (" << std::bitset<8>(~b) << ")" << std::endl;

    return 0;
}
