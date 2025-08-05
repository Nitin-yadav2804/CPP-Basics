#include<iostream>
using namespace std;
void fun(int x,int y){
    cout<<"Address of fun x "<<&x<<endl;
    cout<<"Address of fun y "<<&y<<endl;

}
int main () {
int x;
int y;
cout<<"Address of int x "<<&x<<endl;
cout<<"Address of int y "<<&y<<endl;
fun(x,y);
    return 0;
}