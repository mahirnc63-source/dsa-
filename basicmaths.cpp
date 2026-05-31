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
void reverse(int n){
    int rem=0;
    int rev=0;
    while(n>0){
        rem=n%10;
        n=n/10;
        rev=rev*10+rem;
    }
    cout<<rev;
}
void palindrome(int n){
    int num=n;
    int rem=0;
    int rev=0;
    while(n>0){
        rem=n%10;
        n=n/10;
        rev=rev*10+rem;
    }
    if(num==rev){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }

}
int main(){
    //countdigit(467890654);
    //reverse(4567);
    palindrome(121);
    return 0;
}