// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void zero(int n,int &zeros);
int main() {
    int n = 100010110;
    int zeros=0;
    zero(n,zeros);
    // Write C++ code here
    cout << zeros;

    return 0;
}

void zero(int n,int &zeros){
    if(n!=0){
        if(n%10==0){
            zeros+=1;
            zero(n/10,zeros);
        }
        else{
            zero(n/10,zeros);
        }
    }
}
