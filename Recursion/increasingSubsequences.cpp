
// Print all increasing sequences of length k from first n natural number

#include<iostream>
#include<string>
#include<vector>
using namespace std;
void printSubset(int arr[],int n,int idx,vector<int> ans, int k){
    if(idx==n){
        if(ans.size()==k){
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" "; 
            }
            cout<<endl;
        }
        return;
    }
    if((ans.size()+n-idx) < k) return; // Time complexity better ho jayegi
    printSubset(arr,n,idx+1,ans, k);
    ans.push_back(arr[idx]);
    printSubset(arr,n,idx+1,ans, k);
}
int main(){
    int nu,k;
    cout<<"Please enter the value of n: ";
    cin>>nu;
    cout<<"Please enter the value of k: ";
    cin>>k;
    int arr[nu];
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i =0; i<nu;i++){
        arr[i]=i+1;
    }
    vector<int> v;
    printSubset(arr,n,0,v,k);
}

