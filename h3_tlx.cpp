#include <bits/stdc++.h>
int main()
{
    std::string s = "lorem ipsum dolor sit amet platea sapien eu. primis suscipit dapibus tellus adipiscing dolor eu erat. sollicitudin ac eros accumsan duis ullamcorper hac odio imperdiet.";

    int total_vokal = 0;

    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            total_vokal++;
        }
    }

    std::cout << total_vokal << std::endl;
}