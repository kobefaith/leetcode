class Solution {
public:
    vector<string> fullJustify(vector<string> &words, int L) {
        int len=0;
        int beg=0;
        vector<string> result;
        for(int i=0;i<words.size();i++){
            if(len+words[i].size()+i-beg>L){
                result.push_back(justify(words,L,beg,i-1));
                beg=i;
			    len=0;
            }
            len+=words[i].size();
        }
        result.push_back(justify(words,L,beg,words.size()-1));
        return result;
    }
    string justify(vector<string> &words, int L,int beg,int end){
        string result;
        int totallen=0;
        vector<int> space;
        int ave_space;
        int num;
        for(int i=beg;i<=end;i++)
            totallen += words[i].size();
        if(end == words.size()-1){//最后一行
            for(int i=beg;i<=end;i++){
                result += words[i];
                if(beg !=end && L-totallen>0)
				   result += " ";
            }
            if(beg == end){//填充右边的空格
                for(int i=0;i<L-totallen-end+beg;i++)
                   result +=" ";
            }else{
                for(int i=0;i<L-totallen-end+beg-1;i++)
                   result +=" ";
            }
        }else{//不是最后一行
            if((end-beg)==0){
                result += words[end];
			    for(int i=0;i<L-words[end].size();i++)
			      result +=" ";
		   } else{
			   num=end-beg;
            ave_space = (L-totallen-end+beg)/num;
            for(int i=0;i<end-beg;i++)
                space.push_back(ave_space+1);
            for(int i=0;i<(L-totallen-end+beg)%num;i++)
                space[i] += 1;
            for(int i=beg;i<end;i++){
                result += words[i];
                for(int j=0;j<space[i-beg];j++)
                   result += " ";
            }
            result += words[end];
		   }
        }
        return result;
    }
};