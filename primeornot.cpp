#include<iostream>
using namespace std;
int main(){
    cout<<"ENTER THE NUMBER To check prime or not";
    int i,n;
    cin>>n;
    int p = 1;
    if(n<=1){
        p = 0;
    }
    else{
        for(i=2;i<=(n/2);i++){
        if(n%i==0){
            p =0;
             break;
        }
      }
    }
    if(p ==0){
        cout<<n <<" is not prime";
    }
    else{
        cout<<n <<" is  prime";
    }
    
}