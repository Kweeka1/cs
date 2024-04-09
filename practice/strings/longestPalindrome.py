# Given a string s which consists of lowercase or uppercase letters,
# return the length of the longest palindrome that can be built with those letters.

# Letters are case sensitive, for example, "Aa" is not considered a palindrome here.

from numpy import zeros

class Solution:
    def longestPalindrome(self, s: str) -> int:
        chars_count = zeros(128, dtype = int)
        for char in s:
            chars_count[ord(char)] += 1
        result = 0
        for count in chars_count:
            result += (count // 2) * 2
            if result % 2 == 0 and count % 2 == 1:
                result += 1
        return result

class LongestPalindrome:
    def __init__(self) -> None:
        self.result: int = 0
        self.rest: int = 0

    def solve(self, string: str):
        chars_count = zeros(122 - 65, dtype = int)

        for char in string:
            chars_count[ord(char) - 65] += 1

        for count in chars_count:
            if count % 2 == 1:
                # if count is odd, take the smallest odd remainder
                # ex: 5 -> 1
                self.rest = 1

            # extract only the even numbers from count
            # ex: 5 -> 4
            self.result += count - count % 2

        return self.result + self.rest

s = LongestPalindrome()
k = Solution()
print(k.longestPalindrome("abcecccbb"))
print(s.solve("cccc"))