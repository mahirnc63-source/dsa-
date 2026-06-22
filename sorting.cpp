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
void bubblesort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }

        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void insertionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0&&arr[j-1]>arr[j]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    

}
void merge(int arr[],int low,int high,int mid){
    int k[high-low+1];
    int i=0;
    int left=low;
    int right=mid+1;
    while(left<=mid&&right<=high){
        if(arr[left]<=arr[right]){
            k[i]=arr[left];
            left++;
            i++;

        }
        else{
            k[i]=arr[right];
            right++;
            i++;
        }
    }
    while(left<=mid){
        k[i]=arr[left];
            left++;
            i++;


    }
    while(right<=high){
        k[i]=arr[right];
            right++;
            i++;

    }
    for(int j = 0; j < i; j++){
    arr[low + j] = k[j];
}

}
void ms(int arr[],int low,int high){
    if(low>=high) return;
    int mid=(low+high)/2;
    ms(arr,low,mid);
    ms(arr,mid+1,high);
    merge(arr,low,high,mid);
}
void mergesort(int arr[],int n){
    ms(arr,0,n-1);
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"hello";

}

int main(){
    int arr[]={13,26,48,4,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    //selectionsort(arr,n);
    //bubblesort(arr,n);
    //insertionsort(arr,n);
    mergesort(arr,n);

    return 0;
}