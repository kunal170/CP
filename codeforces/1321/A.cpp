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

int i,n,a=0,b=0,c=0;
cin>>n;
int A[n],B[n];
for(i=0;i<n;i++)
cin>>A[i];
for(i=0;i<n;i++)
cin>>B[i];
for(i=0;i<n;i++){
    if(A[i] && !B[i])
    c++;
    if(A[i] && B[i])
    a++;
    if(B[i])
    b++;
}
if(a+c>b)
cout<<"1\n";
else{
    int d=b+1-a;
    if(c==0)
    cout<<"-1\n";
    else{
        int ans=d/c;
        if(d%c)
        ans++;
        cout<<ans<<"\n";
    }
}

return 0;
}