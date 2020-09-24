#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int A[n][2];
    int i;
    for(i=0;i<n;i++)
    cin>>A[i][0]>>A[i][1];
    int count=0;
    for(i=0;i<n;i++){
        if(A[i][1]-A[i][0]>=2)
        count++;
    }
    cout<<count;
    return 0;
}