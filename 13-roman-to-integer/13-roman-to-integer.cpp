class Solution {
public:
    
    int val(char roman){
            switch (roman){
                case 'I' :
                    return 1;
            
                case 'V' :
                    return 5;
            
                case 'X' :
                    return 10;
                
                case 'L' :
                    return 50;
            
                case 'C' :
                    return 100;
                
                case 'D' :
                    return 500;
            
                case 'M' :
                    return 1000;
            }
            return -1;
        }
    
    int romanToInt(string s) {
        int n=s.size()-1;
        int ones=0 , fives=0 , tens=0 , fiftys=0 , hunds=0 , fivehunds=0 , thousands=0 ;
        int ans=0;
        
        
        for(int i=n ; i>=0 ; i--){
            if( val(s[i]) >= val(s[i+1]) ){
                ans=ans+val(s[i]);
            }else{
                ans=ans-val(s[i]);
            }
        }
        
        return ans;
    }
};