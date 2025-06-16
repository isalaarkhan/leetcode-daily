class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = s.length()-1;
        int length = 0;

        while(size>=0 && s[size]==' '){
             size-- ;

        }
        while(size>=0 && s[size] !=' '){
             length++;
             size--;

        }
        return length;

    }
};