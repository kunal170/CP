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
int i,n;
cin>>n;
int A[n+1];
set<int>s;
for(i=1;i<=n;i++){
    cin>>A[i];
    s.insert(A[i]);
}
map<int,int>m;
for(auto it=s.begin();it!=s.end();it++){
    m.insert(make_pair(*it,0));
}
for(i=1;i<=n;i++){
    m.at(A[i])++;
}
vector<int>v;
for(auto it=m.begin();it!=m.end();it++){
    if(it->second==1)
    v.push_back(it->first);
}
if(v.size()==0)
cout<<"-1\n";
else{
    sort(v.begin(),v.end());
    for(i=1;i<=n;i++){
        if(A[i]==v[0])
        break;
    }
    cout<<i<<"\n";
}
}
return 0;
}