#include<iostream>
using namespace std;

int main() {
    int i,grp=1;
    long n;
    cin>>n;
    string mag[n];
    for(i=0;i<n;i++)
    cin>>mag[i];
    for(i=0;i<n-1;i++){
        if(mag[i]!=mag[i+1])
        grp++;
    }
    cout<<grp;
    return 0;
}