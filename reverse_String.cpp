#include<iostream>
using namespace std;

int getLength(string s){
    int i=0;
    while(s[i]!='\0'){
        i++;
    }
    return i;
}

void reverseString(string s,int length){
   while(length >=0){
    cout<<s[length];
    length--;
   }
}

int main(){
    string s;
    cin>>s;
   int length= getLength(s);
   reverseString(s,length);

}