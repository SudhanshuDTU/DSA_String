#include<iostream>
using namespace std;
   int smallestSubstring(string S) {
       int zeroIndex,oneIndex,twoIndex;
       bool zero=false;
       bool one=false;
       bool two=false;
       int ans = INT_MAX;
       for(int i=0;i<S.length();i++){
           if(S[i] == '0'){
               zeroIndex = i;
               zero=true;
           }
           else if(S[i] == '1'){
               oneIndex = i;
               one=true;
           }
            else if(S[i] == '2'){
               twoIndex = i;
               two=true;
           }
           
           if(zero && one &&two){
               ans = min(ans, max({zeroIndex,oneIndex,twoIndex}) - min({zeroIndex,oneIndex,twoIndex}));
           }
           
       }
       
       if(ans == INT_MAX){
           return -1;
       }
       return ans+1;
    }