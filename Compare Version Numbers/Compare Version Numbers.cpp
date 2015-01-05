class Solution {
public:
    int compareVersion(string version1, string version2) {
       int i=0,j=0;
	   string pre1;
	   string pre2;	
	   string temp;
	   int len1,len2;
	   while(1){
	       while(i<version1.size()){
	           if(version1[i] != '.')
				   pre1 += version1[i];
		  	   else
				   break;
			   i++;
		   }
		   while(j<version2.size()){
			   if(version2[j] != '.')
				   pre2 += version2[j];
			   else
				   break;
			   j++;
		   }
		   len1 =pre1.size();
		   len2 =pre2.size();
		   if(len1>len2){
			  while(len1>len2){
				  temp += '0';
				  len2++;
			  }
			  temp += pre2;
			  pre2 = temp;			
		   }else if(len1<len2){
			  while(len1<len2){
				  temp += '0';
				  len1++;
			  }
			  temp += pre1;
			  pre1 = temp;
		   }
		   temp.clear();
		   if(pre1 == pre2){
		       pre1.clear();
		       pre2.clear();
		       if((i >= version1.size()-1)&&(j >= version2.size()-1))
				   return 0;			
			   i++;			
			   j++;
		   }else
			  return pre1>pre2?1:-1;
	  }
    }
};