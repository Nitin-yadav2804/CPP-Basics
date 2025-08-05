#include<iostream>
using namespace std;
int main(){
    int arr[6]={5,4,6,3,2,1};
    int n=6;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
//     //bubble sort
//     for(int i=0;i<n-1;i++){ // n-1 passes
//         // traverse
//         for(int j=0;j<n-1-i;j++){ // -i because after every pass last element is on correct position so we do not have to check for it so i is increasing by 1 every time so to decrease value of j by 1 after every loop we did -1
//             if(arr[j]>arr[j+1]){ // swap
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// bubble sort optimized
//bubble sort
    for(int i=0;i<n-1;i++){ // n-1 passes
        // traverse
        bool flag=true;
        for(int j=0;j<n-1-i;j++){ 
            if(arr[j]>arr[j+1]){ // swap
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag==true){ // swap did not happen
            break; 
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

