class Solution {
public:
    /**
     * @param costs: n x 3 cost matrix
     * @return: An integer, the minimum cost to paint all houses
     */
    int minCost(vector<vector<int>> &costs) {
        int n = costs.size();
        if (!n) return 0;
        
        vector<vector<int>> f(n, vector<int>(3, 0x7fffffff));
        f[0][0] = costs[0][0];
        f[0][1] = costs[0][1];
        f[0][2] = costs[0][2];
        for (int i = 1; i < n; i++)
            for (int j = 0; j < 3; j++)
                for (int k = 0; k < 3; k++) 
                    if (j != k)
                        f[i][j] = min(f[i][j], f[i-1][k] + costs[i][j]);
                        
        return min(f[n-1][0], min(f[n-1][1], f[n-1][2]));
    }
};
