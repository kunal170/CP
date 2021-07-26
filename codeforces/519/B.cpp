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
int i,n,x;
cin>>n;
map<int,int>m,m1,m2;
for(i=0;i<n;i++){
    cin>>x;
    m[x]++;
}
for(i=0;i<n-1;i++){
    cin>>x;
    m1[x]++;
}
for(auto it:m){
    if(m1.find(it.first)==m1.end() || it.second!=m1[it.first])
    cout<<it.first<<"\n";
}
for(i=0;i<n-2;i++){
    cin>>x;
    m2[x]++;
}
for(auto it:m1){
    if(m2.find(it.first)==m2.end() || it.second!=m2[it.first])
    cout<<it.first<<"\n";
}
return 0;
}