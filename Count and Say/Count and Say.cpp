class Solution {
public:
    string step(const string str){
        string result;
	    int i=0;
	    while(i<str.size()){
	        int num = 1;
		    while(i<str.size()-1 && str[i] == str[i+1]){
		        num++;
			    i++;
		    }
		    result += '0'+num;
		    result += str[i];
		    i++;
	    }
	    return result;
     }
    string countAndSay(int n) {
       string str = "1";	
	   while(--n)
	       str = step(str);
	   return str;
    }

};