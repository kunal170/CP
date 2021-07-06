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
ll i,n,c=0,x,l=0,k=0;
cin>>x;
n=x;
map<ll,ll>m;
for(i=2;i*i<=n;i++){
    while(n%i==0){
        m[i]++;
        n/=i;
    }
}
if(n>1){
    m[n]++;
    n=1;
}
else
n=1;
for(auto it=m.begin();it!=m.end();it++){
    if(it->second > l){
        l=it->second;
        c=it->first;
    }
}
cout<<l<<"\n";
vector<ll>v(l,1);
for(auto it=m.begin();it!=m.end();it++){
    k=l-1;
    while(it->second){
        v[k--]*=it->first;
        it->second--;
    }
}
for(i=0;i<l;i++)
cout<<v[i]<<" ";
cout<<"\n";
}
return 0;
}