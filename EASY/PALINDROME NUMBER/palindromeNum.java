class palindromeNum{
    public boolean isPalindrome(int x){
        int rev = 0, digit, a=x;
        if(x<0){
            return false;
        }
        while (x != 0){
            digit = x % 10;
            rev = rev * 10 + digit;
            x /= 10;
        }
        return (a == rev);
    }
    public static void main(String[] args) {
        palindromeNum p = new palindromeNum();
        boolean x = p.isPalindrome(121);
        boolean y = p.isPalindrome(-121);
        boolean z = p.isPalindrome(10);
        System.err.println(x);
        System.err.println(y);
        System.err.println(z);
    }
}