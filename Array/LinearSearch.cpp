#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of element in array :";
    cin>>n;
    // input
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"enter element you want to search : ";
    cin>>x;
    // search
    // checlmark
    bool flag = false; // false means not found
    for(int i=0;i<=n-1;i++){
        if(arr[i]==x) flag = true;
    }
    if (flag==true) cout<<"element found";
    if (flag==false) cout<<"element not found";
}