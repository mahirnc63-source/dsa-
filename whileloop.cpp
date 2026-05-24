//Given a digit d (0 to 9), find the sum of the first 50 positive integers (integers > 0) that end with digit d.

#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int i=1;
    int j=1;
    int sum=0;
    while(i<=50){
        if(j%10==num){
            sum+=j;
            j+=1;
            i+=1;

        }
        else{
            j+=1;
        }
    }
    cout<<sum;
    return 0;
}