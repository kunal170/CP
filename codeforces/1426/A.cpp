#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t){
        int n,k,floor=0,x;
        cin>>n>>k;
        x=2;
        floor=1;
        while(x<n){
            x+=k;
            floor++;
        }
        cout<<floor<<endl;
        t--;
    }
    return 0;
}