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
void f2(int i,int n){
    if(i<1) return;
    cout<<i<<endl;
    f2(i-1,n);
}
int sum(int n){
    if(n==0) return 0;
    return n+sum(n-1);
}
int factorial(int n){
    if(n==0) return 1;
    return n*factorial(n-1);
}
int main(){
    //f(1,4);
    //f1(4,4);
    //f2(4,4);
    cout<<factorial(5);
    return 0;
    
}