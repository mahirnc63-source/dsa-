#include <bits/stdc++.h>
using namespace std;
void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
        
    }
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }


}
int main(){
    int arr[]={13,26,48,4,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionsort(arr,n);
    return 0;
}