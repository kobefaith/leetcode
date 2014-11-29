class Solution {
public:
    string intToRoman(int num) {
        int thousand=0;
        int hundred =0;
        int ten =0;
        int single =0;
        string result;
        thousand =num/1000;
        num %=1000;
        hundred = num/100;
        num %=100;
        ten =num/10;
        num %=10;
        single =num;
        if(thousand >0){
            for(int i=0;i<thousand;i++)
                 result +='M';
        }
        if(hundred>0){
            if(hundred == 9){
                result +="CM";
            }else if (hundred >=5){
                result +='D';
                for(int i=0;i<hundred-5;i++)
                    result+='C';
            }else if(hundred ==4){
                result +="CD";
            }else{
                for(int i=0;i<hundred;i++)
                    result+='C';
            }
        }
        if(ten>0){
            if(ten == 9){
                result +="XC";
            }else if (ten >=5){
                result +='L';
                for(int i=0;i<ten-5;i++)
                    result+='X';
            }else if(ten ==4){
                result +="XL";
            }else{
                for(int i=0;i<ten;i++)
                    result+='X';
            }
        }
        if(single>0){
            if(single == 9){
                result +="IX";
            }else if (single >=5){
                result +='V';
                for(int i=0;i<single-5;i++)
                    result+='I';
            }else if(single ==4){
                result +="IV";
            }else{
                for(int i=0;i<single;i++)
                    result+='I';
            }
        }
        return result;
    }
};