#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int x=1;
    while(x<=n){
        if(x==1)
        cout<<"I hate ";
        else if(x%2==0)
        cout<<"that I love ";
        else
        cout<<"that I hate ";
        x++;
    }
    cout<<"it";
    return 0;
}