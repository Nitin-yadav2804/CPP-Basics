#include<iostream>
using namespace std;
int main(){
   int x=35;
   int lo=0;
   int hi=x;
   bool flag=false;
   while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        long long m=(long long)mid;
        long long y=(long long)x;
        if(m*m==y){
            flag=true;
            cout<<mid;
            break;
        }
        if(m*m<y) lo=mid+1;
        if(m*m>y) hi=mid-1;
    }
    if(flag==false) cout<<hi;
}