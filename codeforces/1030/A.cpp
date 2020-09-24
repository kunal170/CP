#include<iostream>
using namespace std;

int main() {
    int n,i,hard=0;
    cin>>n;
    int A[n];
    for(i=0;i<n;i++){
        cin>>A[i];
        if(A[i]==1)
        hard++;
    }
    if(hard>0)
    cout<<"HARD";
    else
    cout<<"EASY";
    return 0;
}