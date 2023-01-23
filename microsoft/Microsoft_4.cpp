//https://leetcode.com/problems/rotate-function/description/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        //F(K) = F(K-1) + SUM - N * (array [N - 1 - (K-1)]) = F(K-1) + SUM - N * (array [N - K])
            long long sum=0;
            for(auto i:nums){
                sum+=i;
            }
            long long n=nums.size();

                    long long dp[n];
            long long ans;
            dp[0]=0;
            for(long long i=0;i<n;i++){
                dp[0]+=i*nums[i];
                
            }
            ans=dp[0];
            for(long long i=1;i<n;i++){
                dp[i]=dp[i-1] + sum-n*nums[n-i];
                ans=max(ans,dp[i]);
            }
        return ans;
    }
};