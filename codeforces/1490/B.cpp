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
int i,n,x,c=0,k,d;
cin>>n;
int A[3]={0};
for(i=0;i<n;i++){
    cin>>x;
    A[x%3]++;
}
x=n/3;
if(A[0]<x){
    if(A[2]>x){
k=x-A[0];
d=A[2];
A[2]=max(x,d-k);
A[0]+=d-A[2];
c+=d-A[2];
    }
    if(A[1]>x){
k=x-A[0];
d=A[1];
A[1]=max(x,d-k);
c+=2*(d-A[1]);
A[0]+=d-A[1];
}
}
if(A[1]<x){
    if(A[0]>x){
    k=x-A[1];
    d=A[0];
    A[0]=max(x,d-k);
    A[1]+=d-A[0];
    c+=d-A[0];
    }
    if(A[2]>x){
    k=x-A[1];
    d=A[2];
    A[2]=max(x,d-k);
    A[1]+=d-A[2];
    c+=2*(d-A[2]);
}
}
if(A[2]<x){
    if(A[1]>x){
    k=x-A[2];
    d=A[1];
    A[1]=max(x,d-k);
    A[2]+=d-A[1];
    c+=d-A[1];
    }
    if(A[0]>x){
    k=x-A[2];
    d=A[0];
    A[0]=max(x,d-k);
    A[2]+=d-A[0];
    //cout<<d<<" "<<A[0]<<"\n";
    c+=2*(d-A[0]);
}
}
cout<<c<<"\n";
}
return 0;
}