#include<iostream>
using namespace std;
void countdigit(int n){
    int count=0;
    while(n>0){
        n=n/10;
        count+=1;

    }
    cout<<count;
}
int main(){
    countdigit(467890654);
    return 0;
}