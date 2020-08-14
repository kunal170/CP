#include<iostream>
using namespace std;

int main() {
    string name;
    cin>>name;
    int i,j,k=0;
    for(i=0; name[i]!='\0'; i++)
    k++;
   
   int H[26]={0};
   int count=0;
   
   for(i=0; i<k; i++) {
       if(H[name[i]-97]<1) {
           H[name[i]-97]++;
           count++;
       }
   }
   if(count%2==0)
   cout<<"CHAT WITH HER!";
   else
   cout<<"IGNORE HIM!";
    return 0;
}