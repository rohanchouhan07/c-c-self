#include <iostream>
#include<cmath>
#include<string>
using namespace std;

bool isAlphaNUm(char ch){
if((ch >='0'&& ch<='9') || (tolower(ch) >='a' and tolower(ch)<='z')){
    return true;
}
}
int main() {
    string s;
    cin>>s;
    int start=0;
    int end=s.size()-1;
    bool flag=1;
    while(start<end){
        if(!isAlphaNUm(s[start])){
            start++;
            continue;
        }
        if(!isAlphaNUm(s[end])){
            end--;
            continue;
        }
        if(tolower(s[start]!=tolower(s[end]))){
            // return false;
            flag=0;
        }

        start++;end--;

    }
    if(flag==0){
        cout<<"false";
    }
    else{
        cout<<"true";
    }

    return 0;
}