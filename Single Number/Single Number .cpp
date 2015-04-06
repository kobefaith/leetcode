class Solution {
public:
    int singleNumber(int A[], int n) {
        unordered_map<int,int> map;
        for (int i = 0; i < n; i++){
            if (map.find(A[i]) != map.end()){
                map.erase(map.find(A[i]));
            }else{
                map[A[i]] = i;
            }
        }
        return A[map.begin()->second];
    }
};