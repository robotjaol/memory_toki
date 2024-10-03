#include <iostream>

int main()
{
    int n, fn, fn1, fn2, counter;

    std::cout << "Enter the number of terms: ";
    std::cin >> n;

    fn      = 0;
    fn1     = 1;
    fn2     = 0;
    counter = 0;

    do
    {
        // fn = fn1 + fn2;
        // std::cout << fn1 << std::endl;
        fn = fn1 + fn2;
        fn1 = fn2;
        fn2 = fn;

        std::cout << "Fibonacci : " << fn << std::endl;
        counter++;

    } while (n > counter);

    std::cout << "Program finished" << std::endl;
}