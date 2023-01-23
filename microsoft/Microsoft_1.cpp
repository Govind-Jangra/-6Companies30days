//https://leetcode.com/problems/evaluate-reverse-polish-notation/description/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<int> s;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+"){
                    int a=s.top();
                    s.pop();
                    int b=s.top();
                    s.pop();

                    int y=b+a;
                    s.push(y);
            }
            else if(tokens[i]=="*"){
                int a=s.top();
                    s.pop();
                    int b=s.top();
                    s.pop();

                    int y=a*b;
                    s.push(y);
            }
            else if(tokens[i]=="/"){
                int a=s.top();
                    s.pop();
                    int b=s.top();
                    s.pop();

                    int y=b/a;
                    s.push(y);
            }
           else if(tokens[i]=="-"){
                int a=s.top();
                    s.pop();
                    int b=s.top();
                    s.pop();

                    int y=b-a;
                    s.push(y);
            }
            else {
                int x=stoi(tokens[i]);
                s.push(x);
            }
        }
        int ans=s.top();
        return ans;
    }
};