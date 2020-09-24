#include<iostream>
using namespace std;

void swap(char *x, char *y){
    char temp=*x;
    *x=*y;
    *y=temp;
}

int main() {
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int i,j=0;
    for(i=0; s2[i+1]!='\0'; i++)
    j++;
    for(i=0;i<j;i++,j--)
    swap(&s2[i], &s2[j]);
    
    if(s1==s2)
    cout<<"YES";
    else
    cout<<"NO";
    
    return 0;
}