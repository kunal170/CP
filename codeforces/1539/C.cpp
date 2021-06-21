#include<bits/stdc++.h>
using namespace std;
#define mod        1000000007
#define pb         push_back
#define mp         make_pair
#define rep(n)     for(int i=0;i<n;i++)
#define repit(x)   for(auto it : x)
#define ll        unsigned long long
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

ll i,n,k,x,c;
cin>>n>>k>>x;

ll A[n];
rep(n)
cin>>A[i];
sort(A,A+n);
vector<ll>v;
rep(n-1){
    c=0;
    if(x && A[i+1]-A[i]!=0){
   c=(A[i+1]-A[i])/x;
   if((A[i+1]-A[i])%x==0)
   c--;
    }
   if(c)
   v.push_back(c);  
}
c=1;
if(v.size()>0)
sort(v.begin(),v.end());
for(i=0;i<v.size();i++){
  if(v[i]<=k)
  k-=v[i];
  else
  c++;
}
cout<<c<<"\n";

return 0;
}
