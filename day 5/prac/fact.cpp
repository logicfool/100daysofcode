#include <iostream>

using namespace std;


int factorial(int n){
    int sum;
    if (n == 0){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
    sum = n - factorial(n-1);
    return sum;
}

int main(){
    cout << factorial(4);
}