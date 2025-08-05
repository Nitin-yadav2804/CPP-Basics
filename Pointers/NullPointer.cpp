#include<iostream>
using namespace std;
int main(){
    int* ptr1 = NULL; // reerved address 
    int* ptr2 = 0;
    int* ptr3 = '\0';
    cout<<ptr1<<endl;
    cout<<ptr2<<endl;
    cout<<ptr3<<endl;
    // '\0' -> null character-> ascii value = 0
    char ch='\0';
    cout<<(int)ch;
}