//https://leetcode.com/problems/combination-sum-iii/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
   void solve(int k,int n,vector<int> &temp,vector<vector<int>> &ans,int vis[],int sum,unordered_set<int> &st,int m){
        if(temp.size()==k){
            if(sum==n && st.find(m)==st.end()){
                ans.push_back(temp);
                st.insert(m);
            }
            return;
        }
        for(int i=1;i<=9;i++){
            if(vis[i]==0){
                vis[i]=1;
                temp.push_back(i);
                solve(k,n,temp,ans,vis,sum+i,st,m*i);
                temp.pop_back();
                vis[i]=0;
            }

        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        vector<vector<int>> ans;
         int m=1;
         unordered_set<int> st;
        int sum=0;
        int vis[10]={0};
        solve(k,n,temp,ans,vis,sum,st,m);
        return ans;
    }
};