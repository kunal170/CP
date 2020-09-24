#include<iostream>
using namespace std;

int main() {
    unsigned long long n;
    cin>>n;
    int rem,time=0;
    while(n>0){
        rem=n%10;
        n/=10;
        if(rem==4 || rem==7)
        time++;
    }
    if(time==4 || time==7)
    cout<<"YES";
    else
    cout<<"NO";
    
    return 0;
}