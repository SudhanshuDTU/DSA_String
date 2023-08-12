#include<iostream>
using namespace std;

int main(){
    string s = "abbbaa";
    int freq[26] = {0};

    // for(int i=0;i<26;i++){
    //     freq[i] = 0;    
    // }
    for(int i=0;i<s.length();i++){
            freq[s[i] - 'a']++;
    }
     
     char ans = 'a';
     int max = freq[0];
    for(int i=1;i<26;i++){
        if(freq[i]>max){
            max=freq[i];
            ans = i + 'a';
        }
    }

    cout<<ans;
    cout<<max;



}