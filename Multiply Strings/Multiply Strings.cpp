class Solution {
public:
    string multiply(string num1, string num2) {
        int i ;
	 int j ,k;
	 int carry1 = 0;
	 int carry2 = 0;
	 int step = 0;
	 int add=0;
     vector<int> vec;
	 string result;
	 string temp;
	 string re;
	 if(num1 == "0"||num2 =="0")
		 return "0";
	 for(j = num2.size()-1;j>=0;j--){
		 carry1=0;
		 temp.clear();
		 for(i =num1.size()-1;i>=0;i--){//乘数每一位与被乘数的一位相乘
			 int mul = (num1[i]-'0')*(num2[j]-'0')+carry1;
			 carry1 = mul/10;
			 mul %= 10;
			 temp += mul+'0';
		 }
		 if(carry1 != 0)
			 temp += carry1+'0';
		 if(result.size() == 0)//将每一轮相乘的结果加到最后结果中。
			 result += temp;
		 else{
			 carry2=0;
			 for( k =0;k<temp.size();k++ ){
				 add=0;
				if(k+step < result.size()){//如果原结果的位数多
					add= (result[k+step]-'0')+(temp[k]-'0')+carry2;
				    carry2 = add/10;
				    add %= 10;
					result[k+step] = add+'0';
				}else{//如果原结果的位数少
					add = (temp[k]-'0')+carry2;
				    carry2 = add/10;
				    add %= 10;
				    result += add + '0';
				}
		     }
			 if(carry2 != 0 ){
				 for(k;k<result.size()-step;k++){
					 add = result[k+step]-'0'+carry2;
					 carry2 = add/10;
				     add %= 10;
					 result[k+step] = add+'0';
				 }
				 if(carry2 != 0)
					 result +='1';
			 }
		 }		 
		 step++;
	 }
	 for(j=result.size()-1;j>=0;j--)
		 re +=result[j];
	 return re;
    }
};