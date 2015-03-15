class Solution {
public:
    int numTrees(int n) {
        int i=1;
        int result=0;
        int result1,result2;   
        if(n<=2)      
	      return n;  
		  
        for (i; i <= n; i++){
	       result1 = numTrees(i-1);
	       result2 = numTrees(n-i);	  
	       if (result1 != 0 && result2 != 0)
                result += result1*result2;
	       else
		        result += result1 > result2 ? result1 : result2;
	  	  
        }
		
       return result;
    }
};