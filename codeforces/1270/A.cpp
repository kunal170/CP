// Problem: A. Card Game
// Contest: Codeforces - Good Bye 2019
// URL: https://codeforces.com/problemset/problem/1270/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor
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
int i,n,k,l;
cin>>n>>k>>l;
vector<int>v1(k),v2(l);
for(i=0;i<k;i++)
cin>>v1[i];
for(i=0;i<l;i++)
cin>>v2[i];

while(v1.size() && v2.size()){
	sort(v1.begin(),v1.end());
sort(v2.begin(), v2.end());
	if(v1[v1.size()-1] > v2[v2.size()-1]){
		v1.push_back(v2[v2.size()-1]);
		v2.pop_back();
	}
	else{
		v2.push_back(v1[v1.size()-1]);
		v1.pop_back();
	}
}
if(v1.size())
cout<<"YES\n";
else
cout<<"NO\n";
}
return 0;
}