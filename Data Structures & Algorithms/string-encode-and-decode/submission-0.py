class Solution:

    def encode(self, strs: List[str]) -> str:
        encodedStr = ""
        for string in strs:
            encodedStr += string + '###' 

        print(encodedStr)
        return encodedStr

    def decode(self, s: str) -> List[str]:
        splitStr = s.split("###")
        splitStr = splitStr[:-1]
            
        return splitStr
