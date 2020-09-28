#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t){
        long long n;
        cin>>n;
        int i,move;
        long long x=0;
        while(x*x<n){
            x++;
        }
        x--;
        move=x;
        if(x>0 && (n-pow(x,2)<=x))
        move+=x-1;
        else if(x>0)
        move+=x;
        else
        move=0;
        cout<<move<<endl;
        t--;
    }
    return 0;
}