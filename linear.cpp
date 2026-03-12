#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter the range ";
    cin>>n;
    int k=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter num you want to search";
    int t;
    cin>>t;
    for(int i=0;i<n;i++){
        if(arr[i]==t){
            cout<<"number is found at position "<<i+1;
            k++;
            break;
        }
    }
    if(k==0){
        cout<<"number is not found";
    }
}