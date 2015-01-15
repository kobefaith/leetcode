class Solution {
public:
    vector<string> anagrams(vector<string> &strs) {
        unordered_map<string, vector<string> > group;
        for (int i =0 ;i<strs.size();i++) {
            string key = strs[i];
            sort(key.begin(), key.end());
            group[key].push_back(strs[i]);
        }
        vector<string> result;
        for (auto it = group.cbegin(); it != group.cend(); it++) {
            if (it->second.size() > 1)
                  result.insert(result.end(), it->second.begin(), it->second.end());
        }
        return result;
    }
};