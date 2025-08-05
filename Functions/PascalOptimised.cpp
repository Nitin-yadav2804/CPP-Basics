#include<iostream>
using namespace std;

int main () {
int a;
cout<<"No. of Rows : ";
cin>>a;
for(int i=0;i<=a;i++){
    int curr=1;
    for(int j=0;j<=i;j++){
        cout<<curr<<" ";
        curr=curr*(i-j)/(j+1);
    
    }
    cout<<endl;
}


}