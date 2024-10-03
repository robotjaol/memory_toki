#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

int main()
{

    int n;
    int total = 0;
    int counter = 0;

    std::cout << "Please enter the lenght : " << std::endl;

    std::vector<int> memory(n);
    std::cin >> n;
                                 // std::sort(memory.begin(), memory.end()); // sort the vector
                                 // for (int i = 0; i < n; i++)
                                 // {
                                 //     std::cout << memory[i] << " "; // print the sorted vector
                                 // }
    for (int i = 0; i < n; i++)  // input the vector data of memory
    {
        std::cin >> memory[i];
    }

    // std::sort(memory.begin(), memory.end()); // sort the vector
    // for (int i = 0; i < n; i++)
    // {
    //     std::cout << memory[i] << " "; // print the sorted vector
    // }

    for (int j = 0; j < n; j++)
    {
        total += memory[j];
    }

    double average = static_cast<double>(total) /n;  // [total / n] n -> from vector length
    int maxNum = *max_element(memory.begin(), memory.end());

    std::cout << "Total number : " << total << std::endl;     
    std::cout << "Average number : " << average << std::endl;
    std::cout << "Max number : " << maxNum << std::endl;  

    return 0;
}