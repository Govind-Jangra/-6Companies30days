//https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/description/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfSubstrings(string s) {
        int a=0,b=0,c=0;
        
        int i=0,j=0;
        int n=s.size();
        int ans=0;
        while(i<s.length() and j<s.length())
        {
         if(s[j]=='a')++a;
         else if(s[j]=='b')++b;
        else if(s[j]=='c')++c;
            
            while(a>0 and b>0 and c>0)
            {
                ans+=n-j;
                if(s[i]=='a')--a;
                else if(s[i]=='b')--b;
                else if(s[i]=='c')--c;
                i++;
            }
            j++;
        }
        return ans;
    }
};