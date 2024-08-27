#include <iostream>

int main()
{
    int N = 10;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(j == N - 1 -i  || j == i){
                std::cout << "*";
            }
            else{
                std::cout << ".";
            }
        }

        std::cout << std::endl;
    }

}