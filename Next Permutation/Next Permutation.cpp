class Solution {
public:
    void nextPermutation(vector<int> &num) {
        int i=num.size()-1;
        int j;
        while(i>0){
            if(num[i-1]>=num[i])
                i--;
            else{
                if(i == num.size()-1){
                    num[i] = num[i]^num[i-1];
                    num[i-1] = num[i]^num[i-1];
                    num[i] = num[i]^num[i-1];
                    break;
                }
                else {
                    sort(num.begin()+i,num.end());
                    for(j = i;j<num.size();j++){
                        if(num[j]>num[i-1])
                            break;
                    }
                    num[j] = num[j]^num[i-1];
                    num[i-1] = num[j]^num[i-1];
                    num[j] = num[j]^num[i-1];
                    break;
                }
            }
            
        }
        if(i == 0)
            sort(num.begin(),num.end());
        
    }
};