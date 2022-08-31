class Solution {
public:
    string reverseVowels(string s) {
        int n = s.size();
        if (n==1) return s;
        unordered_set<char> vowels = {'a','e','i','o','u', 'A','E','I','O','U'};
        int left = 0;
        int right = n-1;
        while (left < right){
            while (!vowels.count(s[left]) && left < right)
                left ++;
            while (!vowels.count(s[right]) && left < right)
                right --;
            swap(s[left],s[right]);
            left ++;
            right --;
        }
        return s;
    }
};
