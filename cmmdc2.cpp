// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int cmmdc(int a,int b);
int main() {
    // Write C++ code here
    cout << cmmdc(18,24);

    return 0;
}

int cmmdc(int a,int b){
    if(a<b){
        for(int i=a;i>=1;i--){
            if(a%i==0&&b%i==0){
                return i;
            }
        }
    }
    else{
        for(int i=b;i>=1;i--){
            if(a%i==0&&b%i==0){
                return i;
            }
        }
    }
}
