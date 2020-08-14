#include<iostream>
using namespace std;

int main() {
    string word;
    cin>>word;
    int i;
    if(word[0]>=97 && word[0]<=122)
    word[0]-=32;
    
    cout<<word;
    
    return 0;
}