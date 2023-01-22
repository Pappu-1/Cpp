#include <iostream>
using namespace std;
int fun(int x){
    if(x<=0){
        return x;
    }
    int y= fun(x-1);
        if(x%2==0){
           return y+x;
        }
    return y;
}
int main() {
    cout<<fun(5);
}