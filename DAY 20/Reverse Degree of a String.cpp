
//PYTHON
class Solution(object):
    def reverseDegree(self, s):
        n = len(s)   # string ki length
        result = 0

        for i in range(n):
            result += (ord('z') - ord(s[i]) + 1) * (i + 1)

        return result

//C++
class Solution {
public:
    int reverseDegree(string s) {
        int n = s.length();

        int result = 0 ;
        for(int i = 0 ; i < n ; i++){
            result += ( 'z' - s[i] + 1) * (i + 1);
        }
        return result;
    }
};
