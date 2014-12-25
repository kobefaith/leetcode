class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        vector<int> result;
        int temp =1;
        for(int i=digits.size()-1;i>=0;i--){
            if(temp != 0){
                digits[i] +=temp;
                temp = digits[i]/10;
                digits[i] = digits[i]%10;
            }else
                  break;
        }
        if(temp != 0){
            result.push_back(temp);
            for(int i = 0;i<digits.size();i++)
               result.push_back(digits[i]);
            return result;
        }
        return digits;
    }
};