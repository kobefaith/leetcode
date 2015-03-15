class Solution {
public:
    string convert(string s, int nRows) {
        int i = 0;
	    int j = 0;
  	    string result;
  	    if(nRows == 1)
  	        return s;
			
	    while (i < nRows){
	        if(i == 0){
	            while (j*(2*nRows-2) < s.size()){
	                result += s[j*(2*nRows-2)];
				    j++;
			    }			
			    i++;
		    }else if (i < nRows-1){
		 	   j = 0;
			   while (1){
				   if ((i+j*(2*nRows-2)) < s.size())
				       result += s[i+j*(2*nRows-2)];
				   else
					   break;
				   if ((2*nRows-2-i+j*(2*nRows-2)) < s.size())
					   result += s[2*nRows-2-i+j*(2*nRows-2)];
				   else
					  break;
				   j++;
			   }			
			   i++;
		    }else{
		        j = 0;
			    while (nRows-1+j*(2*nRows-2) < s.size()){
			        result += s[nRows-1+j*(2*nRows-2)];
				    j++;
			    }
			    i++;			
		    }

	  }
	  
      return result;    
    }
};