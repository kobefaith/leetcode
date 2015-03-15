class Solution {
public:
    string getPermutation(int n, int k) {
       int fact[10]={0,1,2,6,24,120,720,5040,40320,362880};
	   string str;
	   vector<int> vec;
	   for (int i = 1; i <= n; i++)
		   vec.push_back(i);
	   for (int i = n; i > 1; i--){
	       str += vec[(k-1)/fact[i-1]]+'0';
		   vec.erase(vec.begin()+((k-1)/fact[i-1]));
		   k -= (k-1)/fact[i-1]*fact[i-1];
	   }
	   str += vec[0]+'0';
	   
	   return str; 
    }
};