#include <iostream>
#include <string>

int main()
{
    std::string s = "lorem ipsum dolor sit amet platea sapien eu. primis suscipit dapibus tellus adipiscing dolor eu erat. sollicitudin ac eros accumsan duis ullamcorper hac odio imperdiet.";
    std::string result = s.substr(32, 8);

    std::cout << result << std::endl;
}