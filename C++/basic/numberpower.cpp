#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int x,n;
    cin>>x>>n;
    int power=1;

    for(int i=1; i<=n ; i++){
        power *= x ;
    }
    cout<<power;
}