class Solution {
public:
    vector<vector<int> > permuteUnique(vector<int> &num) {
        vector<vector<int> > result;
		
        sort(num.begin(), num.end());
        do {
           result.push_back(num);
        } while(next_permutation(num.begin(), num.end()));
		
        return result;
    }
};