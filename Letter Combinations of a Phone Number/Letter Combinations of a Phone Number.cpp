class Solution {
public:
    void print_letter(string digits,vector<string> &result,int index,string *str,string &temp)
    {
       int i = 0;
       //string temp;
	   
       if (index == digits.size()){
           result.push_back(temp);		   
           return ;
       }
       for (i = 0; i < str[digits[index]-'0'].size(); i++){
           temp += str[digits[index]-'0'][i];
           print_letter(digits,result,index+1,str,temp);
		   temp.erase(index);
       }
    }
    vector<string> letterCombinations(string digits) {
        string  str[10];
        vector<string> result;
		string temp;
		
       // str[0] += '';
        //str[1] +='';
        str[2] += "abc";
        str[3] += "def";
        str[4] += "ghi";
        str[5] += "jkl";
        str[6] += "mno";
        str[7] += "pqrs";
        str[8] += "tuv";
        str[9] += "wxyz";
        print_letter(digits,result,0,str,temp);
		
        return result;
        
    }
};