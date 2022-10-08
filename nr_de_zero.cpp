// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void nr_de_zero(int n);
int zero=0;
int main() {
    // Write C++ code here
    nr_de_zero(12400010);
    return 0;
}

void nr_de_zero(int n){
    if(n%10==0){
        zero+=1;
        nr_de_zero(n/10);
    }
    else{
        cout<<zero;
    }
}
