#include <iostream>

int main()
{

    int luas[5];

    luas[0] = 225 * 335;
    luas[1] = 215 * 394;
    luas[2] = 198 * 400;
    luas[3] = 314 * 298;
    luas[4] = 299 * 278;

    int terbesar = luas[0];

    for (int i = 0; i < 5; i++)
    {

        if (terbesar < luas[i])
        {
            terbesar = luas[i];
        }
    }

    std::cout << terbesar << std::endl;
}