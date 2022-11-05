// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int IncDecRec(int n);
int main() {
    // Write C++ code here
    cout<<IncDecRec(12457);

    return 0;
}
int IncDecRec(int n){
    if(n<10){
        if(n%2==0){
            return n+1;
        }
        else{
            return n-1;
        }
    }
    return IncDecRec(n/10)*10+IncDecRec(n%10);
   
    
}
