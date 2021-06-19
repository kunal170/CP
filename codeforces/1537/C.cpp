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
ll i,n,l,h,mini,j=0;
cin>>n;
ll A[n],B[n];
for(i=0;i<n;i++)
cin>>A[i];
sort(A,A+n);
mini=A[n-1]-A[0];
l=0;
h=n-1;
for(i=0;i<n-1;i++){
    if(A[i+1]-A[i]<mini){
        mini=A[i+1]-A[i];
        l=i;
        h=i+1;
    }
}
B[n-1]=A[h];
for(i=l;i<n;i++){
    if(i!=h)
B[j++]=A[i];
}
i=0;
while(j<n-1){
    B[j++]=A[i++];
}
for(i=0;i<n;i++)
cout<<B[i]<<" ";
cout<<"\n";
}
return 0;
}