#include <iostream>

using namespace std;

int main(){
    int n=3;
    
    for(int i=1; i<=n;i++){
        int sum = 1; 
        for(int j=1; j<=2*i+1;j++){
            if(j==1){
                cout<<"1";
            }
            else if(j==n-1){
                cout<<"=";
            }
            else if(j%2==0){
                cout<<"+";
            }
            else if(j==n){
                cout<<sum;
            }
        }
        cout<<endl;
    }
}