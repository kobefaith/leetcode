class Solution {
public:
    string convertToTitle(int n) {
        string str;
        vector<char> vec;
        while(n > 0){
            if(n % 26 == 0){
                vec.push_back('Z');
                n -= 26;
            }else
                vec.push_back(n%26-1+'A');
            n /= 26;
        }
        for(int i = vec.size()-1;i>=0;i--)
            str += vec[i];
        return str;
        
    }
};