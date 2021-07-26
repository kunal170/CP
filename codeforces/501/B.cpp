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
void dfs(vector<int>g[], bool A[],vector<int>&v1,int x){
    A[x]=true;
    v1.push_back(x);
    for(auto i:g[x]){
        if(!A[i])
        dfs(g,A,v1,i);
    }
}
int main()
{
    
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int i,n,k=0;
cin>>n;
string a,b;
vector<int>g[2*n];
map<string,int>m;
map<int,string>mi;
for(i=0;i<n;i++){
    cin>>a>>b;
    if(m.find(a)==m.end()){
    m[a]=k;
    mi[k]=a;
    k++;
    }
    if(m.find(b)==m.end()){
    m[b]=k;
    mi[k]=b;
    k++;
     }
    g[m[a]].push_back(m[b]);
}
/*for(i=0;i<k;i++){
    for(auto j:g[i])
    cout<<i<<" "<<j<<"\n";
}*/
bool A[k]={false};
vector<vector<int>>v;
for(i=0;i<k;i++){
    if(!A[i]){
        vector<int>v1;
        dfs(g,A,v1,i);
        v.push_back(v1);
    }
}
cout<<v.size()<<"\n";
for(i=0;i<v.size();i++){
    cout<<mi[v[i][0]]<<" "<<mi[v[i][v[i].size()-1]]<<"\n";
}
return 0;
}