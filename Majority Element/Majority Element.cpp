class Solution {
public:
    int majorityElement(vector<int> &num) {
        map<int,int> m1;
        int max=0,index;
        for(int i=0;i<num.size();i++){
            if(m1.find(num[i]) == m1.end())
                m1[num[i]] = 1;
            else
                m1[num[i]]++;
            if(m1[num[i]] > max){
                 index = num[i];
                 max =m1[num[i]];
            }
        }
        return index;
    }
};