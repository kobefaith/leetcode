class Solution {
public:
    string simplifyPath(string path) {
        stack<string> stk;
        int beg=0;
        int end=0;
		string s;
		string result;
		while(end < path.size()){
		    while(path[beg] == '/'&& beg <path.size())
			     beg++;		
		    end=beg;
		    while(path[end] !='/' && end<path.size())			
			     end++;		
		    s += path.substr(beg,end-beg);		
	        if(s == ".."){
	            if(!stk.empty())				
				    stk.pop();			
		    }else if(s != "." && s!=""){
		        stk.push(s);
		    }
		    s.clear();		
		    beg=end;
	   }
	   if(stk.empty())
		   return "/";
	   while(!stk.empty()){
	       s=stk.top();
	       stk.pop();
		   result.insert(0,s);
		   result.insert(0,"/");
		   s.clear();
	   }
	   return result;
    }
};