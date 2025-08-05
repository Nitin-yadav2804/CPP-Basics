#include<iostream>
using namespace std;
int main () {

// int a,d,n;
// cout<<"Enter First Digit :";
// cin>>a;
// cout<<"Enter Common Difference :";
// cin>>d;
// cout<<"No of Terms :";
// cin>>n;
//     for( int i=a ; i<=(a+(n-1)*d); i+=d){

// cout<<i<<",";
// }



int a,d,n;
cout<<"Enter First Digit :";
cin>>a;
cout<<"Enter Common Difference :";
cin>>d;
cout<<"No of Terms :";
cin>>n;
for(int i=1;i<=n;i++){
    cout<<a<<",";
    a+=d;
}

    return 0;
}