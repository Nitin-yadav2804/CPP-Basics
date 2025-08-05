#include<iostream>
using namespace std;
int main () {

int a,r,n;
    cout<<"First Term : ";
    cin>>a;
    cout<<"Common Ratio : ";
    cin>>r;
    cout<<"No of Terms : ";
    cin>>n;


for(int i=1;i<=n;i++){
    cout<<a<<",";
    a*=r;
}







    return 0;
}