// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int sumacif(int a);
int main() {
    // Write C++ code here
    int n=12345;
    cout <<sumacif(n);

    return 0;
}
int sumacif(int a){
    if(a==0){
        return 0;
    }
    else{
        return a%10+sumacif(a/10);
    }
}
