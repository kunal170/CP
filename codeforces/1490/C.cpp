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
const ll N = 1'000'000'000'000L;

set<ll> s;

void cal() {
  for (ll i = 1; i * i * i <= N; i++) {
    s.insert(i * i * i);
  }
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
cal();
while(t--){
ll n,i;
cin>>n;
bool c=false;
for(i=1;i*i*i<n;i++){
    if(s.count(n-i*i*i)){
        c=true;
        break;
    }
}

if(c)
cout<<"YES\n";
else cout<<"NO\n";
}
return 0;
}