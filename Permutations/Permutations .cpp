class Solution {
public:
    void  permute_fill(vector<vector<int>> &result,vector<int> &num,int i,vector<int> temp){
	    if( i == num.size()){
		     result.push_back(temp);
		     return;
	    }
	    for(int j = 0;j<num.size();j++){
		    if(find(temp.begin(),temp.end(),num[j]) != temp.end()) //��ֹ�ظ�
			     continue;
		    temp.push_back(num[j]);
		    permute_fill(result,num,i+1,temp);//������д��һ��λ�á�
		    temp.pop_back();
	   }
}
vector<vector<int> > permute(vector<int> &num) {
	vector<vector<int>> result;
	vector<int> temp ;
    permute_fill(result,num,0,temp);
	return result;
}
};