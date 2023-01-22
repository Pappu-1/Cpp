#include<iostream>
using namespace std;

int main(){
int n;
cin >> n;

int arr[n];
for(int i=0;i<n;i++){
    cin >> arr[i];
}
int target = 5;
int max=0;
int s,e;
for(int i=0;i<n;i++){
    for(int j=i+1;i<n;i++){
        if(arr[i]+arr[j]==target){
            if(max<j-i){
                max=(j-i);
                s=i;
                e = j;
            }
        }
}
}
cout<<s<<" "<<e<<endl;

}