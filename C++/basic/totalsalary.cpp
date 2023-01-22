#include<iostream>
#include<math.h>
using namespace std;

int totalSalary(int n , char a){
    float hra = (20 * n)/100;
    float da = (50 * n)/100;
    float pf = (11 * n)/100;

    
    int allow = 0 ;
    if(a == 'A'){
         allow = 1700;
    } 
    else if(a == 'B'){
        allow = 1500;
    }
    else if(a == 'C'){
        allow = 1300;
    }
    else{
        allow = 1300;
    }

    int totalSalary = n + hra + da + allow - pf;

    return totalSalary;
}
int main(){
    int n;
    char a;
    cout<<"Enter basic salary value between 0 to 7,500,000 and grade from which you belong : ";
    cin>>n>>a;
    cout<<totalSalary(n,a);
}