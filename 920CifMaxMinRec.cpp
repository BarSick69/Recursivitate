// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void cifmaxmin(int num,int &min,int &max);
int main() {;
    int num=31807;
    int min=9;
    int max=0;
    cifmaxmin(num,min,max);
    cout<<min<<endl;
    cout<<max<<endl;
    return 0;
}

void cifmaxmin(int num,int &min,int &max){
  if(num!=0){
    if(num%10>max){
        max=num%10;
    }
    if(num%10<min){
        min=num%10;
    }
    cifmaxmin(num/10,min,max);

  }
    
    
}
