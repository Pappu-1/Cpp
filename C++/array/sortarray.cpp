#include <iostream>

using namespace std;

int main() {
    int n=5;
    int arr[5]={4,6,2,5,1};
    
    int i =0;
    while(i<n){
        if(arr[i]<=arr[i+1]){
            i++;
        }else if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            i--;
        }
    }
    for(int i =0;i<n;i++){
        cout<<arr[i];
    }
}