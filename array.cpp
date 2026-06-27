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
int issorted(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){

        }
        else{
            return 0;
        }
    }
    return 1;
}
void rotateleft1(vector<int>& arr){
    int temp=arr[0];
    for(int i=1;i<arr.size();i++){
        arr[i-1]=arr[i];
    }
    arr[arr.size()-1]=temp;
}
int main(){
    /*int arr[6]={2,3,6,8,4,9};;
    int n=sizeof(arr) / sizeof(arr[0]);
    int a=issorted(arr,n);
    cout<<"slargest="<<a;*/
    vector<int> arr={1,2,3,4,5};
    rotateleft1(arr);
    for(int x:arr){
        cout<<x<<" ";
    }

    return 0;
}