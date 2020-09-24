#include<iostream>
using namespace std;

int main() {
    int x=0;
    int n;
    cin>>n;
    int step=0;
    while(x<n){
        x+=5;
        step++;
    }
    cout<<step;
    
    return 0;
}