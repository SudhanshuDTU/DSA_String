#include<iostream>
using namespace std;

class Solution{
public:	
	
	int len(string s){
	    int i=0;
	    while(s[i]!='\0'){
	        i++;
	    }
	    return i;
	}
	
	int isPalindrome(string S)
	{
	   int s = 0;
	   int e = len(S) -1;
	   
	   while(s<e){
	       if(S[s++]!= S[e--]){
	           return 0;
	       }
	   }
	   
	   return 1;
	}

};