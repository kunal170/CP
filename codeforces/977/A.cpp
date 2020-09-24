#include<iostream>
using namespace std;

int main() {
    long long n;
    cin>>n;
    int k;
    cin>>k;
    while(k && n>0){
        if(n%10==0)
        n/=10;
        else
        n--;
        
        k--;
    }
    cout<<n;
    
    return 0;
}