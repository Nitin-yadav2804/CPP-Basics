#include<iostream>
using namespace std;
int main () {
int n;
cout<<"No. of Rows : ";
cin>>n;
int m;
m=n-1;
for(int i=1;i<=2*n-1;i++){
    cout<<"*";
}
    cout<<endl;

for(int j=1;j<=m;j++){
    for(int k=1;k<=m-j+1;k++){
        cout<<"*";
    }
    for(int l=1;l<=2*j-1;l++){
        cout<<" ";
    }
    for(int q=1;q<=m-j+1;q++){
        cout<<"*";
    }
    cout<<endl;
    
}
    return 0;
}