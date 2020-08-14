#include<iostream>
using namespace std;

int main() {
    int n,i;
    cin>>n;
    string color;
    cin>>color;
    int count=0,k=0;
    for(i=0; color[i]!='\0'; i++)
    k++;
    
    for(i=0; i<k-1; i++){
        if(color[i]==color[i+1])
        count++;
    }
    cout<<count;
    
    return 0;
}