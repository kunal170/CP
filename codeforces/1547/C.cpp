#include<bits/stdc++.h>
using namespace std;
#define mod        1000000007
#define pb         push_back
#define mp         make_pair
#define rep(n)     for(int i=0;i<n;i++)
#define repit(x)   for(auto it : x)
#define ll         long long
#define vi         vector<int>
#define vc         vector<char>
#define vs         vector<string>
#define mii        map<int ,int>
#define mci        map<char ,int>
/* bool prime[100001];
 const int N=100000;
 void sieve() {
 int i,j;
for(i=2;i<=N;i++)
prime[i]=true;
 prime[0]=prime[1]=false;
for(i=2;i*i<=N;i++){
if(prime[i]){
for(j=i*i;j<=N;j+=i)
prime[j]=false;
}
}
}*/
int gcd(int a,int b){
if(b==0)
return a;
else
return gcd(b,a%b);
}
void swap(int *x,int *y){
int temp=*x;
*x=*y;
*y=temp;
}
int main()
{
    
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--){
int i,n,m,k,j,l;
cin>>l>>n>>m;
int A[n],B[m],C[n+m];
for(i=0;i<n;i++)
cin>>A[i];
for(i=0;i<m;i++)
cin>>B[i];
bool c=true;
i=j=k=0;
while(i<n && j<m && c){
    if(A[i]<B[j])
    C[k++]=A[i++];
    else if(B[j]<A[i])
    C[k++]=B[j++];
    else{
        if(i<j)
        C[k++]=A[i++];
        else
        C[k++]=B[j++];
    }
    if(C[k-1]==0)
    l++;
    else{
        if(C[k-1]>l)
        c=false;
    }
}
while(i<n && c){
    C[k++]=A[i++];
    if(C[k-1]==0)
    l++;
    else{
        if(C[k-1]>l)
        c=false;
    }
}
while(j<m && c){
    C[k++]=B[j++];
    if(C[k-1]==0)
    l++;
    else{
        if(C[k-1]>l)
        c=false;
    }
}
if(!c)
cout<<"-1\n";
else{
    for(i=0;i<n+m;i++)
    cout<<C[i]<<" ";
    cout<<"\n";
}
}
return 0;
}