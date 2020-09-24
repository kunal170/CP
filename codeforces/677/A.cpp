#include<iostream>
using namespace std;

int main() {
    int n,h,w=0,i;
    cin>>n>>h;
    int A[n];
    for(i=0;i<n;i++){
    cin>>A[i];
    if(A[i]<=h)
    w++;
    else
    w+=2;
    }
    cout<<w;
    return 0;
    
}