// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void cifmin(int num,int &min);
int main() {;
    int num=143454;
    int min=9;
    cifmin(num,min);
    cout<<min;
    return 0;
}

void cifmin(int num,int &min){
    if(num%10<min&&num!=0){
        min=num%10;
        cifmin(num/10,min);
    }
    else if(num!=0){
        cifmin(num/10,min);
    }
    
}
