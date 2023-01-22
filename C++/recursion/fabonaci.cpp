#include <iostream>
using namespace std;
int fun(int x){
    if(x<=2){
        return 1;
    }
    int y =fun(x-1)+fun(x-2);
    return y;
    
}
int main() {
    int n=6;
    for(int i=1;i<=n;i++)
    cout<<fun(i);
}