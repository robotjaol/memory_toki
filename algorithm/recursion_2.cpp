#include <iostream>

void cetak_menurun(int n)
{
    if (n == 1 || n == 0)
    {
        return;
    }
    std::cout << n << std::endl;
    return cetak_menurun(n - 1);
}

int main()
{
    cetak_menurun(10);
}