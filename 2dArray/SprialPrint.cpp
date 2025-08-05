#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no of rows of 1st matrix : ";
    cin>>m;
    int n;
    cout<<"Enter the no of rows of 1st matrix : ";
    cin>>n;
    int arr[m][n];
    cout<<"enter 1st matrix : ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    // sprial 
    int minr = 0, minc = 0;
    int maxr = m-1, maxc = n-1;
    while(minr<=maxr && minc<=maxc){
        // right 
        for(int j=minc;j<=maxc;j++){
            cout<<arr[minr][j]<<" ";
        }
        if(minr>maxr  || minc>maxc) break;
        minr++;
        // down
        for(int i=minr;i<=maxr;i++){
            cout<<arr[i][maxc]<<" ";
        }
        if(minr>maxr  || minc>maxc) break;
        maxc--;
        // left
        for(int j=maxc;j>=minc;j--){
            cout<<arr[maxr][j]<<" ";
        }
        if(minr>maxr  || minc>maxc) break;
        maxr--;
        // up
        for(int i=maxr;i>=minr;i--){
            cout<<arr[i][minc]<<" ";
        }
        minc++;
    }

  

}       