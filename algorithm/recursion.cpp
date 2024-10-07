#include <iostream>

int faktorial(int n)
{
    if(n == 0 || n ==1){
        return 1;
    }
    else{
        return n * faktorial(n-1); //recursion
    }
}

int main()
{
    std::cout << faktorial(12) << std::endl;
}