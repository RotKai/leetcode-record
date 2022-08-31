class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n,vector<int>(3,0));
        /* 利润最大 (操作后)
        1. 买到股票
        2. 卖完股票（无冷冻期）
        3. 卖完股票（有冷冻期）
        */
        dp[0][0] = -prices[0];
        bool sell = false;
        for (int i=1; i<n; ++i){
                dp[i][0] = max (dp[i-1][0], dp[i-1][1]-prices[i]);
                dp[i][1] = max (dp[i-1][2], dp[i-1][1]);
                dp[i][2] = dp[i-1][0]+prices[i];
        }
        return max(dp[n-1][2],dp[n-1][1]);
    }
};
