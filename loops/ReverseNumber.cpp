#include<iostream>
using namespace std;
int main () {
int n;
cout<<"Enter a Number : ";
cin>>n;
int lastdigit;
int rev=0;
while(n>0){
    lastdigit=n%10;
    rev=(rev*10)+lastdigit;
    n/=10;

}
cout<<"Reverse Of This Number is "<<rev<<endl;




    return 0;
}