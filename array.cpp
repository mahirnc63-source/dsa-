#include <bits/stdc++.h>
using namespace std;
int largest(int arr[],int n){
    int large=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>large){
            large=arr[i];
        }
    }
    return large;
}
int main(){
    int arr[6]={2,4,8,6,9};;
    int n=sizeof(arr) / sizeof(arr[0]);
    int a=largest(arr,n);
    cout<<"largest="<<a;

    return 0;
}