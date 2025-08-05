#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; // you need not mention size
    // inserting / input do n opt use []
    v.push_back(6);
    cout<<"s "<<v.size()<<endl;
    cout<<"c "<<v.capacity()<<endl; 
    v.push_back(1);
    cout<<"s "<<v.size()<<endl;
    cout<<"c "<<v.capacity()<<endl;
    v.push_back(9);
    cout<<"s "<<v.size()<<endl; 
    cout<<"c "<<v.capacity()<<endl;
    v.push_back(0);
    cout<<"s "<<v.size()<<endl; 
    cout<<"c "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"s "<<v.size()<<endl;
    cout<<"c "<<v.capacity()<<endl; 
    v.push_back(18);
    cout<<"s "<<v.size()<<endl;
    cout<<"c "<<v.capacity()<<endl;
    v.push_back(5);
    cout<<"s "<<v.size()<<endl; 
    cout<<"c "<<v.capacity()<<endl;
    v.push_back(8);
    cout<<"s "<<v.size()<<endl; 
    cout<<"c "<<v.capacity()<<endl;
    // // if you want to update / input 
    // cout<<v[0]<<" ";
    // cout<<v[1]<<" ";
    // cout<<v[2]<<" ";
    // cout<<v[3]<<" ";

}