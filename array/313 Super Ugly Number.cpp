class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        priority_queue<int, vector<int>, greater<int>> q;
        q.push(1);
        int number=0;
        int cur = 0;
        while (!q.empty() && number!=n ){
            if (cur == q.top()) {q.pop();continue;}
            cur = q.top(); q.pop();
            for (auto prime:primes){
                if (cur <= INT_MAX / prime)
                    q.push(cur*prime);
                else
                    break;
            }
            number ++;
        }
        return cur;
    }
};
