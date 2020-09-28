#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t){
        int n,m,i,j;
        cin>>n>>m;
        int A[n][2][2];
        for(i=0;i<n;i++)
        cin>>A[i][0][0]>>A[i][0][1]>>A[i][1][0]>>A[i][1][1];
        int count=0;
        
        for(i=0;i<n;i++){
            if(A[i][0][1]==A[i][1][0])
            count++;
        }
        if(count>0 && m%2==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
        t--;
    }
    return 0;
}