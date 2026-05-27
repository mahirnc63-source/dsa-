#include <iostream>
using namespace std;
void pattern1(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern2(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";

        }
        cout<<endl;
    }
}
void pattern3(){
    for(int i=1;i<=5;i++){
        for(int j=5;j>=i;j--){
            cout<<"*"<<" ";

        }
        cout<<endl;
    }
}
void pattern4(int n){
    for(int i=1;i<=n;i++){
        //space
        for(int j=1;j<=n-i;j++){
            cout<<" ";
            

        }
        //star
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        //space
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    
}

int main(){
    //pattern1();
    //pattern2();
    pattern4(5);
    return 0;

}