#include<iostream>
#include<conio.h>
using namespace std;
int main(){

    int n;
    int t;
    
    cout<<"enter range";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int l=0,r=n-1;

    cout<<"enter num to search";
    cin>>t;

    while(l<=r){
        int mid=(l+r)/2;

        if(arr[mid]==t){
            cout<<"num found at"<<mid+1;
            break;
        }
        else if(arr[mid] > t ){
            r=mid-1;
        }
        else if(arr[mid] < t){
            l=mid+1;
        }
    }
if(l>=r){
    cout<<"not foundd";
}
}