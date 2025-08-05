#include<iostream>
using namespace std;
int main () {

int n;
cout<<"Enter The Number : ";
cin>>n;
bool flag = true;  // true means prime
for(int i=2;i<=(n-1);i++){
    if(n%i==0){
         flag = false;    // false means composite
        break;
    }

}
if(n==1) cout<<"1 is neither prime nor a composite number ";
else if(flag==true) {
    cout<<n<<" is a prime number";

}else{
     cout<<n<<" is a composite number";
    
}




    return 0;
}