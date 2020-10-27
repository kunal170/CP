#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t){
        int n;
        cin>>n;
        int *A,*B;
        A=new int[n];
        B=new int[n];
        int i,j;
        for(i=0;i<n;i++)
        cin>>A[i];
        for(i=0,j=n-1;i<n/2;i++,j--)
        B[i]=(-1)*(A[j]);
        for(;i<n;i++,j--)
        B[i]=A[j];
        for(i=0;i<n;i++)
        cout<<B[i]<<" ";
        cout<<endl;
        delete A,B;
        t--;
    }
    return 0;
}