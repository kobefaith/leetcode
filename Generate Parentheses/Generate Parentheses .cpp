class Solution {
public:
    void stackparenthesis(int n,vector<string> &result,int l,int r,string temp)
   {
       int i=0;	   
  	   if(l == n ){
           while (i < (l-r)){
               temp += ')';
			   i++;           
           }		
        result.push_back(temp);		
        return ;
     	} 
		
       stackparenthesis(n,result,l+1,r,temp+'(');  
       if (l > r)
          stackparenthesis(n,result,l,r+1,temp+')');
       
   }
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        stack<char> stk;
        stackparenthesis(n,result,0,0,"");
		
        return result;
    }
};