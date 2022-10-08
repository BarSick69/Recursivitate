// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int  factorial(int n);
int main() {
    // Write C++ code here
    cout << factorial(5);

    return 0;
}

int factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
