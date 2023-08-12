
#include<iostream>
using namespace std;

int remAnagram(string str1, string str2)
{
    unordered_map<char,int> map;
    
    for(int i=0;i<str1.length();i++){
        map[str1[i]]++;
    }
    
    for(int i=0;i<str2.length();i++){
        map[str2[i]]--;
    }
    
    int count=0;
    for(auto i : map){
        count = count + abs(i.second);
    }
    
    return count;
 
}