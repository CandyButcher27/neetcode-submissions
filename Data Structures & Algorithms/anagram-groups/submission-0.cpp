class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>umap;
        vector<vector<string>>result;
        string key;

        for(string s : strs){
            key = s;
            sort(s.begin(),s.end());
            umap[s].push_back(key);
        }

        for(auto& pair : umap){
            result.push_back(pair.second);
        }

        return result;
    }
};
