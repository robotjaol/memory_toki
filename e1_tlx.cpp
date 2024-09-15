#include <iostream>

int main()
{
    int hasil = 0;

    int luas1 = 225 * 335;
    int luas2 = 215 * 394;
    int luas3 = 198 * 400;
    int luas4 = 314 * 298;
    int luas5 = 299 * 278;

    if (luas1 >= 8000)
    {
        hasil++;
    }

    if (luas2 >= 8000)
    {
        hasil++;
    }
    if (luas3 >= 8000)
    {
        hasil++;
    }
    if (luas4 >= 8000)
    {
        hasil++;
    }
    if (luas5 >= 8000)
    {
        hasil++;
    }

    std::cout << hasil << std::endl;
}