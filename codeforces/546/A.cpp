#include<iostream>
using namespace std;

int main() {
    int k,w,i=1;
    unsigned long long n,sum=0;
    cin>>k>>n>>w;
    for(;i<=w;i++)
    sum+=(i*k);
    if(sum>n)
    cout<<sum-n;
    else
    cout<<0;
    
    return 0;
}