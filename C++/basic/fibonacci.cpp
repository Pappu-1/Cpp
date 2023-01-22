#include<iostream>
using namespace std;

int main(){
    int n=10;
    int a=1;
    int b=1;
    cout<<a<<" "<<b<<" ";
    // int sum=a+b;
    for(int i=1;i<=n;i++){
        int sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;

    }
}