class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long z=0;
        int y=x;
        while(y!=0){
            z=z*10 + y%10;
            y=y/10;
        }
        if(z==x){
            return true;
        }else{
            return false;
        }
    }
};