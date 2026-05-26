#include <iostream>
using namespace std;
/*void pattern1(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}*/
void pattern2(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";

        }
        cout<<endl;
    }
}

int main(){
    //pattern1();
    pattern2();
    return 0;

}