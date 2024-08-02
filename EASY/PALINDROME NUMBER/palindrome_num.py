class Solution:
    def isPalindrome(self, x) -> bool:
        r = 0
        a = x
        if x < 0:
            return False
        while x!=0:
            digit = x % 10
            r = r * 10 + digit
            x //= 10
        return (r == a)
    
ob = Solution()
x = ob.isPalindrome(121)
y = ob.isPalindrome(-121)
z = ob.isPalindrome(10)
print(x)
print(y)
print(z)