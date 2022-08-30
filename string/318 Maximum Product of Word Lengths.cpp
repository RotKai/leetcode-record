class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n = words.size();
        int ans = 0;
        vector<int> bits(n);
        for (int i=0; i<n; i++){
            int m = words[i].size();
            for (int j=0; j<m; j++){
                bits[i] |= 1<<(words[i][j]- 'a'); 
            }
        }
        for (int i=0; i<n; i++){
            for (int j=i+1; j<n; j++){
                if ((bits[i] & bits[j])==0){
                    int n_len = words[i].length()*words[j].length();
                    ans = max(ans,n_len);
                }
            }
        }
 
        return ans;
    }
};
