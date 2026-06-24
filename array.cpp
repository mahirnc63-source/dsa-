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
int secondlargest(int arr[],int n){
    int large=arr[0];
    int slarge=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>large){
            slarge=large;
            large=arr[i];
        }
        else if(arr[i]<large&&arr[i]>slarge){
            slarge=arr[i];
        }
    }
    return slarge;

}
int main(){
    int arr[6]={2,4,8,6,9};;
    int n=sizeof(arr) / sizeof(arr[0]);
    int a=secondlargest(arr,n);
    cout<<"slargest="<<a;

    return 0;
}