#include<iostream>
using namespace std;

void swap(char *x, char *y){
    char temp=*x;
    *x=*y;
    *y=temp;
}

int main() {
    int n,k,i;
    cin>>n>>k;
    string s;
    cin>>s;
    while(k){
        i=0;
        while(i<n-1){
            if(s[i]=='B' && s[i+1]=='G'){
            swap(&s[i],&s[i+1]);
            i+=2;
            }
            else
            i++;
        }
        k--;
    }
    cout<<s;
    return 0;
}