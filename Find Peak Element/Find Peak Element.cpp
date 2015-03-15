class Solution {
public:
    int findPeakElement(const vector<int> &num) {
        int i = 1;
        int max = num[0];
        int index = 0;
        if (num.size() == 1)
           return 0;
        if (num.size() == 2)
             return num[0] > num[1] ? 0 : 1;
			 
        while (i < num.size()){
            if (num[i] > num[i-1] && num[i] > num[i+1])
                return i;
            if (num[i] > max){
                max = num[i];
                index = i;
            }
            i++;
        }
		
        return index;
    }
};