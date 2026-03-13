#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
    cin>>a[i];
    }
    
    int i=0;
    int min=a[0];
    
    for(int i=0;i<n;i++){
        min=a[i];
        int pivot=i;
        for(int j=i+1;j<=n;j++){
            if(min>a[j]){
                min=a[j];
                pivot=j;
            }
        }
        swap(a[i],a[pivot]);
        /*
        int temp=a[i];
        a[i]=a[pivot];
        a[pivot]=temp;
        */

    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }

}