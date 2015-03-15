class Solution {
public:
    void reve_str(string &s,int beg,int end){
        char temp;
	    while (beg < end){
	        temp = s[beg];
		    s[beg] = s[end];
		    s[end] = temp;
		    beg++;
		    end--;
	    }
   }
void reverseWords(string &s) {
	int i=0;
	int beg,end = -1;
	while (i < s.size()){
		while (s[i] == ' '&& i < s.size())
			i++;
		beg = i;
		if (beg != 0 && end !=-1 && end < s.size()-1 && beg != s.size()){
			s.erase(s.begin()+end+2,s.begin()+beg);
			i = end+2;
		}else if (beg != 0 && end == -1){
			s.erase(s.begin(),s.begin()+beg);
			i=0;
		}else if (beg == s.size()){			
			s.erase(s.begin()+end+1,s.end());
			i = s.size();
		}
		beg = i;
		while (s[i] != ' ' && i < s.size())
			i++;
		end = i-1;		
		reve_str(s,beg,end);
	}
	reve_str(s,0,s.size()-1);        
}
};