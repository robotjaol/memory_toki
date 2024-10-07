#include <iostream>
#include <string>

bool palindrom(std::string s)
{
    if (s.length() <= 1)
    {
        return true;
    }

    if (s[0] == s[s.length() - 1])
    {
        return palindrom(s.substr(1, s.length() - 2));
    }

    return false;
}

int main()
{
    std::cout << palindrom("") << std::endl;
    std::cout << palindrom("x") << std::endl;
    std::cout << palindrom("aa") << std::endl;
    std::cout << palindrom("ab") << std::endl;
    std::cout << palindrom("ini") << std::endl;
    std::cout << palindrom("itu") << std::endl;
    std::cout << palindrom("anna") << std::endl;
    std::cout << palindrom("ibu ratna antar ubi") << std::endl;
    std::cout << palindrom("rumah murah") << std::endl;
    std::cout << palindrom("aku suka rajawali bapak apabila wajar aku suka") << std::endl;
}
