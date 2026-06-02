#include<iostream>
using namespace std;
void f(int i,int n){
    if(i>n) return;
    cout<<i<<endl;
    f(i+1,n);
}
void f1(int i,int n){
    if(i<1) return;
   
    f1(i-1,n);
    cout<<i<<endl;
}
int main(){
    f(1,4);
    f1(4,4);
    
}