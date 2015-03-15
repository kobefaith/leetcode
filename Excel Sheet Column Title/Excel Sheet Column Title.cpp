class Solution {
public:
    void getTitle(vector<char> &vec,int n){
	if (n == 0)
		return;
	if (n%26 == 0){
		n = n-1;
		vec.push_back(n%26 + 'A');
	    getTitle(vec, n/26);

	}else{
		vec.push_back(n%26-1 + 'A');
		getTitle(vec, n/26);
	}

}
string convertToTitle(int n) {
	vector<char> vec;
	string str;
	
	getTitle(vec,n);
	for (int i= vec.size()-1; i >= 0; i--){
		str += vec[i];
	}
	
	return str;
    
}
};