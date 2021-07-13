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
int i,n,l,h;
string s;
cin>>s;
n=s.size();
map<char,int>m;
for(i=0;i<n;i++)
m[s[i]]=i;
bool c=true;
if(m.size()!=n)
c=false;
l=h=-1;
for(i=0;i<n &&c; i++){
    //cout<<m[i+97]<<" ";
    if(m.find(i+97)==m.end())
    c=false;
    else{
        if(l==-1){
            l=m[i+97];
            h=m[i+97];
        }
        else{
              if(l-m[i+97]==1)
              l=m[i+97];
              else if(m[i+97]-h==1)
              h=m[i+97];
              else
              c=false;

        }
    }
}
if(c)
cout<<"YES\n";
else
cout<<"NO\n";
}
return 0;
}