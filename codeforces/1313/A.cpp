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
int a,b,c,ans=0;
cin>>a>>b>>c;
int A[3];
A[0]=a;
A[1]=b;
A[2]=c;
sort(A,A+3,greater<int>());
a=A[0];
b=A[1];
c=A[2];
if(a>0){
   // cout<<"1\n";
    ans++;
    a--;
}
if(b>0){
    //cout<<"2\n";
    ans++;
    b--;
}
if(c>0){
    //cout<<"3\n";
    ans++;
    c--;
}
if(a>0 && b>0){
   //cout<<"4\n";
    ans++;
    a--;
    b--;
}
if(a>0 && c>0){
    //cout<<"5\n";
    ans++;
    a--;
    c--;
}
if(b>0 && c>0){
    //cout<<"6\n";
    ans++;
    b--;
    c--;
}
if(a>0 && b>0 && c>0){
    //cout<<"7\n";
    ans++;
    a--;
    b--;
    c--;
}
cout<<ans<<"\n";
}
return 0;
}