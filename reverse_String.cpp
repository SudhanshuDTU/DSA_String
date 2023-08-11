#include<iostream>
using namespace std;

int getLength(string s){
    int i=0;
    while(s[i]!='\0'){
        i++;
    }
    return i;
}
string reverseString(string s,int length){
   int i=0;
   int j = length - 1;

   while(i <= j){
    swap(s[i++],s[j--]);
   }
   return s;
}

int main(){
    string s;
    cin>>s;
   int length= getLength(s);
  cout<< reverseString(s,length);

}