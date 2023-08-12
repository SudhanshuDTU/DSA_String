#include<iostream>
using namespace std;

 long binarySubstring(int n, string a){
        long num =0;
        for(int i=0;i<a.length();i++){
            if(a[i]=='1'){
                num++;
            }
        }
        
        long res =( num*(num-1))/2;
        
        return res;
       
        
        
    }