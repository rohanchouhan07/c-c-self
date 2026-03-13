#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter range";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0,r=n-1;
 int mid=(l+r)/2;
 int t;
 cout<<"enter num to search";
 cin>>t;
 while(l<r){
    if(arr[mid]==t){
        cout<<"num found at"<<mid;
        break;
    }
    else if(arr[mid] < t ){
        l=mid+1;
    }
    else if(arr[mid] > t){
        r=mid-1;
    }
    else{
        cout<<"not found";
    }}
}