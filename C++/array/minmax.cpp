#include<iostream>
using namespace std;

int main(){
int n;
cin >> n;

int arr[n];
for(int i=0;i<n;i++){
    cin >> arr[i];
}
int max = arr[0];
int min = arr[0];

for(int i =1;i<n;i++){
    if(arr[i]>max){
        int max = arr[i];
    }
    else if(arr[i]<min){
        int min = arr[i];
    }
}
cout<<max<<" "<<min;
}