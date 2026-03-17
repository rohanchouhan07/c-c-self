#include <iostream>
using namespace std;

int main() {
    int arr[5]={70,50,86,41,52};
    int l=0;
    int right=5-1;
    int loc=l;

    step1 : while(arr[loc]<arr[right]){
        right--;
    }
    if(right==loc){
        return 1 ;
    }
    if(arr[loc]>arr[right]){
        swap(arr[loc],arr[right]);
        loc=right;
    }
    while(arr[loc]>arr[l] and l!=loc){
        l++;
    }
    if(l==loc){
        return 1;
    }
    if(arr[loc]<arr[l]){
        swap(arr[loc],arr[l]);
        loc=l;
    }
    goto step1;

    return 0;
}