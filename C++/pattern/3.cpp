#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int value = 1;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<(2*value + 2*j - n + 1);
        }
        value = value + 1;
        cout<<endl;
    }
}