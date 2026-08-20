class Solution {
    public boolean isPalindrome(int x) {
        
        if ( x<0){
            return false;
        }
        int a = x;
        int reverse = 0 ;
        while( x !=0){
            int n = x%10;
            reverse = reverse * 10 + n ;
            x =  x/10;
        }
        if (reverse == a){
            return true;
        }
       return false;
    }
}