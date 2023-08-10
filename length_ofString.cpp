#include<iostream>
using namespace std;
int getLength(string s){
   int i=0;
   while(s[i]!='\0'){
    i++;
   }
   return i;
}

int main(){
    string s;
    cin>>s;
   
   cout<<getLength(s);

}