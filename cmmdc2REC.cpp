// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void cmmdc(int a,int b,int &r);
int main() {
    // Write C++ code here
    int r;
    cmmdc(48,18,r);
    cout<<r;
    return 0;
}

void cmmdc(int a,int b,int &r){
    if(a>b){
        cmmdc(a-b,b,r);
    }
    else if(b>a){
        cmmdc(a,b-a,r);
    }
    else{
        r=a;
        
    }
}
