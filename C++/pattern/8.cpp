#include <iostream>

using namespace std;

int main(){
    int n=4;
    
    for(int i=1; i<=n;i++){ 
        int z=i;
        int k=2*i-2;
        for(int j =1; j<=n-i;j++){
            cout<<" ";
            }
        for(int j=1;j<=i;j++){
            cout<<z++;
        }
        for(int j=1;j<=i-1;j++){
            cout<<k--;
        }
        cout<<endl;
    }
    
    
    
}