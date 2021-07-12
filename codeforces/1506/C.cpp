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
int i,j,c=0,n,m;
string s1,s2;
cin>>s1>>s2;
n=s1.size();
m=s2.size();
int dp[n+1][m+1];
for(i=0;i<=n;i++)
dp[i][0]=0;
for(j=1;j<=m;j++)
dp[0][j]=0;
for(i=1;i<=n;i++){
    for(j=1;j<=m;j++){
        if(s1[i-1]==s2[j-1]){
            dp[i][j]=1+dp[i-1][j-1];
            c=max(c,dp[i][j]);
        }
        else
        dp[i][j]=0;
    }
}
cout<<n-c+m-c<<"\n";
}
return 0;
}