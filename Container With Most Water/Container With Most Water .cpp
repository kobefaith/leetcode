class Solution {
public:
    int maxArea(vector<int> &height) {
        int result=0;
        int i=0,j=height.size()-1;
		
        while (i < j){
            if ((height[i] > height[j] ? height[j] : height[i])*(j-i) > result)
                 result = (height[i] > height[j] ? height[j] : height[i])*(j-i);
            if (height[i] > height[j])
               j--;
            else
                i++;
        }
		
        return result;
    }
};