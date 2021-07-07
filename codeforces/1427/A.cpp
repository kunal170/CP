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
int i,m,x,c=0,n=0,p=0;
cin>>m;
vector<int>pos,neg;
for(i=0;i<m;i++){
    cin>>x;
    if(x==0)
    c++;
    else if(x>0){
        p+=x;
        pos.push_back(x);
    }
    else{
        n+=x;
        neg.push_back(x);
    }
}
if(p==abs(n))
cout<<"NO\n";
else{
    cout<<"YES\n";
    if(p>abs(n)){
        for(i=0;i<pos.size();i++)
        cout<<pos[i]<<" ";
        for(i=0;i<neg.size();i++)
        cout<<neg[i]<<" ";
    }
    else{
        for(i=0;i<neg.size();i++)
        cout<<neg[i]<<" ";
        for(i=0;i<pos.size();i++)
        cout<<pos[i]<<" ";
    }
    while(c--)
    cout<<0<<" ";
    cout<<"\n";
}
}
return 0;
}