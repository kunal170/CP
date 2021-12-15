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
int i,n,a,b;
cin>>n>>a>>b;
int H[n+1];
for(i=1;i<=n;i++)
H[i]=0;
vector<int>v1,v2;
v1.push_back(a);
H[a]=1;
H[b]=1;
v2.push_back(b);
for(i=1;i<a;i++){
    if(H[i]!=1 && i<b){
    v2.push_back(i);
    H[i]=1;
    }
}
for(i=b+1;i<=n;i++){
    if(H[i]!=1 && i>a){
    v1.push_back(i);
    H[i]=1;
    }
}
if(v1.size()>n/2 || v2.size()>n/2)
cout<<"-1\n";
else{
    for(i=1;v1.size()!=n/2 && i<=n;i++){
        if(!H[i] && i>a){
        v1.push_back(i);
        H[i]=1;
        }
    }
    for(i=1;v2.size()!=n/2 && i<=n;i++){
if(!H[i] && i<b){
        v2.push_back(i);
        H[i]=1;
        }
    }
    if(v1.size()==n/2 && v2.size()==n/2){
    for(i=0;i<v1.size();i++)
    cout<<v1[i]<<" ";
    for(i=0;i<v2.size();i++)
    cout<<v2[i]<<" ";
    cout<<"\n";
    }
    else
    cout<<"-1\n";
}
}
return 0;
}