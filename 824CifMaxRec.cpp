#include <iostream>
using namespace std;
void cifmax(int num,int &max);
int main() {;
    int num=1252598246;
    int max=0;
    cifmax(num,max);
    cout<<max;
    return 0;
}

void cifmax(int num,int &max){
    if(num%10>max&&num!=0){
        max=num%10;
        cifmax(num/10,max);
    }
    else if(num!=0){
        cifmax(num/10,max);
    }
}
