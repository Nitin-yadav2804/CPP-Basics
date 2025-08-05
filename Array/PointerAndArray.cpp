#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,2,6,1,7};
    int* ptr = arr;  // giving address
 
    for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr; // ptr is pointing to ist element 


    *ptr = 8; // ptr[0]=8
    ptr++; // ptr is pointing to 2nd element 
    *ptr = 9; // ptr[1]=9
    ptr--; // ptr is pointing to ist element 
    cout<<endl;

    
       for(int i=0;i<=4;i++){
           cout<<i[ptr]<<" ";
       }
        cout<<endl;
     
       for(int i=0;i<=4;i++){
           cout<<i[arr]<<" ";
       }
}

   
