#include<iostream>
using namespace std;
int swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int times(int A[],int n,int k){
    int i,j,max=0;
    for(i=0;i<n-1;i++){
       for(j=i+1;j<n;j++){
           if(A[i]>A[j])
           swap(&A[i],&A[j]);
       }
        }
        if(A[0]<=k){
        for(i=1;i<n;i++){
           while(A[i]<=k){
               if(A[i]+A[0]<=k){
                   A[i]+=A[0];
                   max++;
               }
               else{
                   A[i]=k+1;
               }
               
           }
        }
        }
        return max;
}

int main() {
    int t,max,i,j,n,k;
    cin>>t;
    while(t){
        cin>>n>>k;
        int A[n];
        for(i=0;i<n;i++)
        cin>>A[i];
        max=times(A,n,k);
        cout<<max<<endl;
        t--;
    }
    return 0;
}
