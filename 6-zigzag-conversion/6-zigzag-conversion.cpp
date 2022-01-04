class Solution {
public:
    string convert(string s, int numRows) {
        string str="";
        if(numRows<2){
            return s;
        }
        for(int r=0;r<numRows;r++){
            int i=r;
            while(i<s.size()){
                str.push_back(s[i]);
                
                if(r!=0 && r!=numRows-1 && ((i-r)+numRows+numRows-2-r)<s.length()){
                    str.push_back(s[(i-r) + numRows+numRows-2 - r]);
                }
                i=i+numRows+numRows-2;
                
            }
        }
        
        
        return str;
        
    }
};