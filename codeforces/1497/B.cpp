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
ll i,n,m,x,c=0;
cin>>n>>m;
ll A[m]={0};
for(i=0;i<n;i++){
    cin>>x;
    A[x%m]++;
}
/*for(i=0;i<m;i++)
cout<<A[i]<<" ";
cout<<endl;*/
for(i=0;i<=m/2;i++){
    
    if(i==0){
        if(A[i]>0)
        c++;
    }
    else{
        if(i==m-i){
            if(A[i]>0)
            c++;
        }
        else{
            if(A[i]>0 && A[m-i]>0){
            if(max(A[i],A[m-i])-min(A[i],A[m-i])<=1)
            c++;
            else
            c+=max(A[i],A[m-i])-min(A[i],A[m-i]);
            }
            else
            c+=A[i]+A[m-i];
        }
    }
    
}
cout<<c<<"\n";
}
return 0;
}