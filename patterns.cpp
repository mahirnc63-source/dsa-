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

void pattern5(int n){
    for(int i=1;i<=n;i++){
        //space
        for(int j=1;j<=i-1;j++){
            cout<<" ";
            

        }
        //star
        for(int j=1;j<=2*n-(2*i-1);j++){
            cout<<"*";
        }
        //space
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    
}
void pattern6(){
    pattern4(5);
    pattern5(5);
}
void pattern7(int n){
    for(int i=1;i<=9;i++){
        if(i>n){
            for(int j=1;j<=2*n-i;j++){
                cout<<"*";

            }

        }
        else{
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
        }
        cout<<endl;
        
    }
}
pattern8(int n){
    
    for(int i=1;i<=n;i++){
        int count=1;
        if(i%2==0){
            count=0;
        }
        for(int j=1;j<=i;j++){
            cout<<count;
            count=1-count;
        }
        cout<<endl;
    }
}
pattern9(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n;j++){
            if(j<=i){
                cout<<j;
            }
            else if(j>2*n-i){
                cout<<2*n-j+1;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

}
void pattern10(int n){
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}
void pattern11(int n){
    
    for(int i=1;i<=n;i++){
        char ch='A';
        for(int j=1;j<=n-i+1;j++){
            cout<<ch<<" ";
            ch=ch+1;
        }
        cout<<endl;
    }
}

int main(){
    //pattern1();
    //pattern2();
    pattern11(5);
    return 0;

}