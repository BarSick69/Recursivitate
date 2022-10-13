// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void cifmax(int num,int &max);
int main() {;
    int num=200754;
    int max=0;
    cifmax(num,max);
    cout<<max;
    return 0;
}

void cifmax(int num,int &max){
    if(num%10>max){
        max=num%10;
        cifmax(num/10,max);
    }
}
