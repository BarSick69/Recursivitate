// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void CntCifKRec(int n,int k,int &c);
int main() {;
    int n = 52774288;
    int k = 6;
    int c = 0;
    CntCifKRec(n,k,c);
    cout<<c;
    return 0;
}
void CntCifKRec(int n,int k,int &c){
    if(n!=0){
        if(n%10>k){
            c+=1;
            CntCifKRec(n/10,k,c);
        }
        else{
            CntCifKRec(n/10,k,c);
        }
    }
}
