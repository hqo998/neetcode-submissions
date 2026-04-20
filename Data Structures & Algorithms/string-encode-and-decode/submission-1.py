class Solution:

    def encode(self, strs: List[str]) -> str:
        encodedStr = ""
        for string in strs:
            encodedStr += string + 'zaza' 

        print(encodedStr)
        return encodedStr

    def decode(self, s: str) -> List[str]:
        splitStr = s.split("zaza")
        splitStr = splitStr[:-1]
            
        return splitStr
