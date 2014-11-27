class Solution {
public:
    string convert(string s, int nRows) {
        string result;
        int col;
        int column;
        int row;
        if((s.size()<=nRows)||(nRows == 1)){
           result=s;
           return result;
        }
        if (s.size()%(2*nRows-2) !=0)
             column = s.size()/(2*nRows-2) +1;
        else 
             column = s.size()/(2*nRows-2) ;
        for(row =0 ;row<nRows;row++){
            for(col=0;col<column;col++){
                if(row == 0){
                    result+=s[(2*nRows-2)*col];
                }else if(row == nRows-1){
                    if((s.size()%(2*nRows-2) >= nRows)||(s.size()%(2*nRows-2) == 0)){
                        result+=s[nRows-1+(2*nRows-2)*col];
                    }else{ 
                        if(col <column-1){
                             result+=s[nRows-1+(2*nRows-2)*col];
                         }
                    }
                }else{
                    if(((col <column-1)&&(s.size()%(2*nRows-2) !=0))||(s.size()%(2*nRows-2) ==0)){
                        result+=s[row+(2*nRows-2)*col];
                        result+=s[2*nRows-2-row+(2*nRows-2)*col];
                    }else {
                        if((row<=s.size()%(2*nRows-2))&&(s.size()%(2*nRows-2)<=nRows)){
                             result+=s[row+(2*nRows-2)*col];
                        }else if (((nRows-row-1)<=(s.size()%(2*nRows-2)-nRows))&&(s.size()%(2*nRows-2)>nRows)){
                             result+=s[2*nRows-2-row+(2*nRows-2)*col];
                        }
                        
                    }
                }
                
            }
            
        }
        
        return result;
    }
};