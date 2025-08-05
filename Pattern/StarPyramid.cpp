#include<iostream>
using namespace std;
int main () {

int n;
cout<<"No. of Rows : ";
cin>>n;

// for(int i=1;i<=n;i++){
    
//     // space
//     for(int j=1;j<=n-i;j++){
//             cout<<" ";
//     }
    
//     for(int k=1;k<=2*i-1;k++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

int nst=1;   // nst : number of stars
int nsp=n-1; // nsp : number of spaces 
for(int i=1;i<=n;i++){
    // spaces
    for(int j=1; j<=nsp;j++){
        cout<<" ";
    }
    nsp--;
    // stars
    for(int k=1;k<=nst;k++){
        cout<<"*";
    }
    cout<<endl;
    nst+=2;

}

    return 0;
}