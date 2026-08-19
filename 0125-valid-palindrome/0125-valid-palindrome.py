class Solution(object):
    def isPalindrome(self, s):
        
        new_s = ""

        for i in s:
            if i.isalnum():
                new_s += i.lower()

        original_s = new_s

        reverse_str = ""

        while len(new_s) > 0:
            reverse_str += new_s[-1]
            new_s = new_s[:-1]

        if original_s == reverse_str:
            return True
        else:
            return False