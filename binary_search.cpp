#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    //int a[20]={2,4,9,10,15,18,19,25,30,35,36,39,40,45,49,50,55,56,60,70};
    int a[20],l=0,Search,i,m,n;
cout<<"Enter a range ";
cin>>n;
int r=n-1;
for (i=0;i<n;i++){
    cout<<"Enter "<<i<<" Number :";
    cin>>a[i];

}
cout<<"Enter num you want to search";
cin>>Search;
    while(l<=r)
    {
        m=(l+r)/2;
        if(a[m]==Search)
        {
            cout<<"Number is founded at position "<<m+1;
            break;
        }
        else if (a[m]>Search){
            r=m-1;
        }
        else if(a[m]<Search){
            l=m+1;
        }
    }
    if(l>r){
        cout<<"not found ";
    }
    getch();
}
