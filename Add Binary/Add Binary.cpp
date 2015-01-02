class Solution {
public:
    string addBinary(string a, string b) {
        vector<char> vec;
        string result;
        if(a.size() == 0)
            return b;
	    if(b.size() == 0)
		    return a;
        int temp=0;
        int i = a.size()-1;
        int j = b.size()-1;
        while(i>=0 && j>=0){
            vec.push_back(((a[i]-'0')+(b[j]-'0')+temp)%2 +'0');
            temp = ((a[i]-'0')+(b[j]-'0')+temp)/2;
            i--;
            j--;
        }
        if(i >= 0){
            while(i >= 0){
                vec.push_back(((a[i]-'0')+temp)%2 +'0');
                temp = ((a[i]-'0')+temp)/2;
                i--;
            }
            
        }else if(j >= 0){
            while(j >= 0){
                vec.push_back(((b[j]-'0')+temp)%2 +'0');
                temp = ((b[j]-'0')+temp)/2;
                j--;
            }
        }
        if(temp != 0)
		   vec.push_back('1');
        for(i = vec.size()-1 ; i >=0;i--)
            result += vec[i];
        return result;
    }
};