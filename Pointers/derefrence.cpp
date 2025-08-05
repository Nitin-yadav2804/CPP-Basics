#include<iostream>
using namespace std;
int main(){
    int x=13;
    int* p=&x;
    cout<<x<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    *p=14;
    cout<<x<<endl;
}
