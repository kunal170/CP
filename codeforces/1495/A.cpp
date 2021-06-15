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
ll i,x,y,n,k,j;
cin>>n;
j=k=0;
ll A[n],B[n];
for(i=0;i<2*n;i++){
    cin>>x>>y;
    if(x!=0)
    A[j++]=abs(x);
    else
    B[k++]=abs(y);
}
sort(A,A+n);
sort(B,B+n);
long  double sum=0;
for(i=0;i<n;i++)
sum+=sqrt(powl(A[i],2)+powl(B[i],2));
cout<<setprecision(15)<<fixed<<sum<<"\n";
}
return 0;
}