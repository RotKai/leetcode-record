
class Solution {
private:
    // void printvector(vector<int>& nums){
    //     cout <<"print vector" <<endl;
    //     for (auto i:nums){
    //         cout << i << endl;
    //     }
    // }
    // void printlst(vector<pair<int,int>>& nums){
    //     cout <<"print lst" <<endl;
    //     for (auto i:nums){
    //         cout << i.first << " " << i.second << endl;
    //     }
    // }
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> newlst(nums.size());
        vector<pair<int, int>> lst;
        int n = nums.size() / 2;
        sort(nums.begin(),nums.end(),[](int a, int b)->bool {
            return a > b;
        });
        for (int i=0; i<n; ++i){
            lst.push_back({nums[i],nums[i+n]});
        }

        for (int i=0; i<n; i++){
            nums[i*2] = lst[i].second;
            nums[i*2+1] = lst[i].first;
        }
        // printvector(nums);
        // printlst(lst);


    }
};
