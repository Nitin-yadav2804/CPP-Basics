#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}
void reverse(vector<int>& v){
     int i = 0;
    int j = v.size()-1;
    while(i<=j){
        // swap v[i] and v[j]
        int temp = v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    return;
}
void reversepart(int i, int j, vector<int>& v){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    return;
}
int main(){
    vector<int> v; 
    v.push_back(1);
    v.push_back(3); 
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);
    v.push_back(11);
   
    display(v);
    //reverse(v);
    reversepart(1,3,v);
    // for(int i=0,j=v.size()-1;i<=j;i++,j--){
    //     int temp=v[i];
    //     v[i]=v[j];
    //     v[j]=temp;
    // }
    //reverse(v.begin(),v.end());
    display (v);


}