class Solution:
    def longestCommonPrefix(self, strs: list[str]) -> str:
        if len(strs) == 0:
            return ""

        prelen = len(strs[0])

        for i in range(len(strs) - 1):
            prefix = 0

            for j in range(min(prelen, len(strs[i + 1]))):
                if (strs[i][j] == strs[i + 1][j]):
                    prefix += 1
                else:
                    break

            prelen = min(prelen, prefix)

        prefix = strs[0][:prelen]
        return prefix

s = Solution()
print(s.longestCommonPrefix(["flower","flow","flight"]))