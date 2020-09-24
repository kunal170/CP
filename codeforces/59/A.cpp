#include<iostream>
using namespace std;

int main() {
    string s;
    cin>>s;
    int l=0, u=0,i;
    for(i=0;s[i]!='\0'; i++){
        if(s[i]>=97 && s[i]<=122)
        l++;
        else if(s[i]>=65 && s[i]<=90)
        u++;
    }
    if(l>=u){
        for(i=0; s[i]!='\0'; i++){
            if(s[i]>=65 && s[i]<=90)
            s[i]+=32;
        }
    }
    else{
        for(i=0; s[i]!='\0'; i++){
            if(s[i]>=97 && s[i]<=122)
            s[i]-=32;
        }
    }
    cout<<s;
    return 0;
    
}
