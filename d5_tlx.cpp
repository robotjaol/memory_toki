#include <iostream>

int main(){

    int N = 10;

    for(int i = 1; i <= N; i++){
        for (int j = 1; j <= N; j++)
        {
            if( i == 1 || j == 1 || i == N || j == N ){
                std::cout << "*";
            }

            else{
                std::cout << ".";
            }
        }

        std::cout << std::endl;
        
    }
}