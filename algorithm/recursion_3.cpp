#include <iostream>
#include <string>

bool isVokal(char c)
{
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int hitung_vokal(std::string s)
{
    if (s.empty())
    {
        return 0;
    }

    char c = s[0];

    if (isVokal(c))
    {
        return 1 + hitung_vokal(s.substr(1));
    }
    else
    {
        return hitung_vokal(s.substr(1));
    }
}

int main()
{
    std::cout << hitung_vokal("lorem ipsum dolor sit amet fermentum egestas luctus praesent torquent justo.") << std::endl;
}
