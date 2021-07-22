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
int i,n,o=0,c=0;
string s;
cin>>s;
n=s.size();
map<char,char>m;
m[s[0]]='(';
m[s[n-1]]=')';
if(m.size()==1)
cout<<"NO\n";
else{
for(i=0;i<n;i++){
    if(m.find(s[i])!=m.end()){
        s[i]=m[s[i]];
        if(s[i]=='(')
        o++;
        else
        c++;
    }
}
char ch;
if(o>c)
ch=')';
else
ch='(';
for(i=0;i<n;i++){
    if(s[i]!='(' && s[i]!=')')
    s[i]=ch;
}
stack<char>st;
bool flag=true;
for(i=0;i<n && flag;i++){
    if(s[i]=='(')
    st.push(s[i]);
    else{
        if(!st.empty())
        st.pop();
        else
        flag=false;
    }
}
if(st.empty() && flag)
cout<<"YES\n";
else
cout<<"NO\n";
}
}
return 0;
}