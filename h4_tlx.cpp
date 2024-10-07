#include <iostream>
#include <string>

int main()
{
    std::string s = "thequickbrownfoxjumpsoverthelazydog";

    for (char c : s)
    {
        c = toupper(c);

        if (c == 'Z')
        {
            c = 'A';
        }
        else
        {
            c = c + 1;
        }

        std::cout << c;
    }
    std::cout << std::endl;

    return 0;
}
