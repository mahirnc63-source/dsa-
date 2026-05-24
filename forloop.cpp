#include<iostream>
using namespace std;
int main(){
    int low,high;
    cout<<"enter the low";
    cin>>low;
    cout<<"enter the high";
    cin>>high;
    int sum=0;
    for(int i=low;i<=high;i++){
        sum+=i;

    }
    cout<<"sum of"<<low<<"to"<<high<<":"<<sum;
    return 0;
}