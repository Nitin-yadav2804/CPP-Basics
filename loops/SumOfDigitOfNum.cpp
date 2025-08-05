#include<iostream>
using namespace std;
int main () {
int n;
cout<<"Enter a Number : ";
cin>>n;
int lastdigit;
int sum=0;
while(n>0){
    lastdigit=n%10;
    n/=10;
    sum+=lastdigit;

}
cout<<"Sum Of Digits is "<<sum;



    return 0;
}