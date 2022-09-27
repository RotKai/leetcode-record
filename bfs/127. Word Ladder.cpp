class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set <string> wordset(wordList.begin(),wordList.end());
        if (wordset.find(endWord) == wordset.end()) return 0;
        unordered_map <string,int> pathdict;
        pathdict.insert({beginWord,1});
        queue<string> q;
        q.push(beginWord);
        while (!q.empty()){
            auto word = q.front(); q.pop();
            auto path = pathdict[word];
            for (int i = 0; i < word.size(); ++i){
                string newword = word;
                for (int j =0 ; j < 26; ++j){
                    newword[i] = 'a' + j;
                    if (newword == endWord) return path + 1;
                    if (wordset.find(newword) != wordset.end() && pathdict.find(newword) == pathdict.end()){
                        pathdict.insert({newword,path+1});
                        q.push(newword);
                    }    
                }
            }
        }
        return 0;

    }
};
