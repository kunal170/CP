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
int i,x1,x2,p1,p2,l1=0,l2=0,x,r1,r2;
cin>>x1>>p1>>x2>>p2;
x=x1;
vector<int>v1,v2;
while(x){
    l1++;
    v1.push_back(x%10);
    x/=10;
}
x=x2;
while(x){
    l2++;
    v2.push_back(x%10);
    x/=10;
}
reverse(v1.begin(),v1.end());
reverse(v2.begin(),v2.end());
l1+=p1;
l2+=p2;
if(l1<l2)
cout<<"<\n";
else if(l1>l2)
cout<<">\n";
else{
    if(p1==p2){
        if(x1<x2)
        cout<<"<\n";
        else if(x1>x2)
        cout<<">\n";
        else
        cout<<"=\n";
    }
    else{
    bool f=true;
    i=0;
    while(i<v1.size() || i<v2.size()){
        if(i>=v1.size())
        r1=0;
        else
        r1=v1[i];
        if(i>=v2.size())
        r2=0;
        else
        r2=v2[i];
        i++;
        if(r1<r2){
            cout<<"<\n";
            f=false;
            break;
        }
        else if(r1>r2){
            cout<<">\n";
            f=false;
            break;
        }
    }
    if(f)
    cout<<"=\n";
    }
}
}
return 0;
}