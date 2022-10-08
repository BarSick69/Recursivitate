// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void cmmdc(int a,int b);
int main() {
    // Write C++ code here
    cmmdc(24,32);
    return 0;
}

void cmmdc(int a,int b){
    if(a>b){
        cmmdc(a-b,b);
    }
    else if(b>a){
        cmmdc(a,b-a);
    }
    else{
        cout<<a;
    }
}
