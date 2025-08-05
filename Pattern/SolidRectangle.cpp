#include<iostream>
using namespace std;
int main () {

int n,m;
cout<<"No. of Rows : ";
cin>>n;
cout<<"No. of Columns : ";
cin>>m;

for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        cout<<"*";
    }
    cout<<endl;


}



    return 0;
}