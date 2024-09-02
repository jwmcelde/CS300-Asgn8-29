#include <iostream>

int fib(int n);

int main(){
    for (int i = 0; i < 16; i++){
        std::cout << i << "th number of the fibonacci sequnce: " << fib(i) << '\n';
        
    }
}

int fib(int n){
    if (n < 2) return n;
    
    int x = 0;
    int y = 1;
    int num;

    for(int i = 2; i <= n; i++){
        num = x + y;
        x = y;
        y = num;
    }
    return num;
}
