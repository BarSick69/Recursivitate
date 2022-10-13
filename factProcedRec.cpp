// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void fact(int n,int &rez);
int main() {
    int rez=1;
    int n=5;
    fact(n,rez);
    cout<<rez;
    return 0;
}
void fact(int n,int &rez){
    if(n>1){
        rez*=n;
        fact(n-1,rez);
    }
}
