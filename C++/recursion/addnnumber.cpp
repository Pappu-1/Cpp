#include <iostream>
using namespace std;
int fun(int x){
    if(x<=0){
        return x;
    }
    int y= fun(x-1);
    return y+x;
    }
int main() {
    cout<<fun(5);
}