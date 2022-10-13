// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void F(int n,int a[],int &k);
int main() {;
    int n = 3;
    int a[3];
    srand(time(0));
    for(int i=0;i<n;i++){
        a[i]=rand()%10;
    }
    for(int i=0;i<n;i++){
        cout<<a[i];
        cout<<" ";
    }
    cout<<endl;
    int k=0;
    F(n,a,k);
    cout<<"K este: ";
    cout<<k;
    return 0;
}

void F(int n,int a[],int &k){
    if(a[n-1]%2==0&&n>=0){
        k*=10;
        k+=a[n-1];
        F(n-1,a,k);
    }
    else if(n>=0){
        F(n-1,a,k);
    }
    else if(k==0){
        k-=1;
    }
}
