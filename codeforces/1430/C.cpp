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
int i,n,c;
cin>>n;
cout<<"2\n";
if(n==2){
    cout<<2<<" "<<1<<"\n";
}
else{
    cout<<n<<" "<<n-2<<"\n";
    c=(n+n-2)/2 +(n+n-2)%2;
   
    for(i=n-1;i>=1;i--){
        if(i!=n-2){
        cout<<c<<" "<<i<<"\n";
        c=(c+i)/2 + (c+i)%2;
       
        }
    }
}
}
return 0;
}