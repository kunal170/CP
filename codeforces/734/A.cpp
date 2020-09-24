#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    string g;
    cin>>g;
    int a=0,d=0,i;
    for(i=0;i<n;i++){
        if(g[i]=='A')
        a++;
        else if(g[i]=='D')
        d++;
    }
    if(a>d)
    cout<<"Anton";
    else if(a<d)
    cout<<"Danik";
    else
    cout<<"Friendship";
    return 0;
}