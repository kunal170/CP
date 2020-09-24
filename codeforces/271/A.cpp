#include<iostream>
using namespace std;

int main(){
    int y,i,rem,n,c;
    cin>>y;
    int H[10];
    int x=y+1;
    while(true){
        for(i=0;i<10;i++)
          H[i]=-1;
        n=x;
        c=0;
        while(n>0){
            rem=n%10;
            n/=10;
            H[rem]++;
            if(H[rem]>0)
            c++;
        }
        if(c==0)
        break;
        x++;
    }
    cout<<x;
    return 0;
}