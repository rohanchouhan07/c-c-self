#include<iostream>
using namespace std;
int main(){
    int n=5;
    // cin>n;
    int a[n]={5,4,3,2,1};
    
    int i=0;
    int min=a[0];
    
    for(int i=0;i<n;i++){
        min=a[i];
        int pivot=i;
        for(int j=i+1;j<n;j++){
            if(min>a[j]){
                min=a[j];
                pivot=j;
            }
        }
        swap(a[i],a[pivot]);

    }

    for(int i=0;i<n;i++){
        cout<<a[i];
    }

}