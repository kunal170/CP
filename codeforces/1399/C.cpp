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
int i,n,c,maxi=0,sum,j;
cin>>n;
int A[n];
for(i=0;i<n;i++)
cin>>A[i];
sort(A,A+n);
if(n==1)
sum=A[0];
else
sum=A[n-1]+A[n-2];
for(i=1;i<=sum;i++){
    map<int,int>m;
    for(j=0;j<n;j++)
    m[A[j]]++;
    c=0;
    for(j=0;j<n-1 && i>A[j];j++){
        if(m[A[j]]>0){
            if(m.find(i-A[j])!=m.end() && m[i-A[j]]>0){
                //cout<<i<<" "<<j<<'\n';
                if(A[j]==i-A[j]){
                    if(m[A[j]]>1){
                        c++;
                m[A[j]]-=2;
                    }
                }
                else{
                c++;
                m[A[j]]--;
                m[i-A[j]]--;
                }
            }
        }
    }
    maxi=max(maxi,c);
}
cout<<maxi<<"\n";
}
return 0;
}