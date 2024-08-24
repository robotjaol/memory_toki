#include <iostream>
#include <string>

int main()
{
    int A = 364 * 79;
    int B = 243 * 99;
    int C = 189 * 155;

    std::string terbesar, terkecil;

    if (A > B && A > C)
    {
        terbesar = "A";
        if (B > C)
        {
            terkecil = "C";
        }
        else

        {
            terkecil = "B";
        }
    }
    else if (B > A && B >> C)
    {
        terbesar = "B";
        if (A > C)
        {
            terkecil = "C";
        }
        else
        {
            terkecil = "A";
        }
    }
    else
    {
        terbesar = "C";

        if (B > A)
        {
            terkecil = "A";
        }

        else
        {
            terkecil = "B";
        }
    }

    std::cout << terbesar << std::endl;
    std::cout << terkecil << std::endl;

}