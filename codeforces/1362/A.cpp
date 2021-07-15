#include<bits/stdc++.h>
using namespace std;
#define mod        1000000007
#define pb         push_back
#define mp         make_pair
#define rep(n)     for(int i=0;i<n;i++)
#define repit(x)   for(auto it : x)
#define ll        unsigned long long
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
ll a,b,r,c=0;
cin>>a>>b;
if(a<=b){
    if(b%a)
    r=-1;
    else
    r=b/a;
}
else{
   if(a%b)
   r=-1;
   else
   r=a/b;
}
if(r==-1)
cout<<"-1"<<"\n";
else{
    while(r%8==0){
        c++;
        r/=8;
    }
    while(r%4==0){
        c++;
        r/=4;
    }
    while(r%2==0){
        c++;
        r/=2;
    }
    if(r>1)
    cout<<"-1\n";
    else
    cout<<c<<"\n";
}
}
return 0;
}