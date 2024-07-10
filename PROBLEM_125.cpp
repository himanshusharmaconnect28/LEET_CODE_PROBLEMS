class Solution {
private:
    bool Is_Valid (char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            return 1;
        }
        else {
            return 0;
        }
    }
    char To_Lower_Case (char ch) {
        char temp = ch;
        if (ch >= 'A' && ch <= 'Z') {
            temp = ch - 'A' + 'a';
        }
        return temp;
    }
public:
    bool isPalindrome(string s) {
        string temp = "";
        for (int i = 0; i < s.size(); i++) {
            if (Is_Valid(s[i])) {
                temp.push_back(s[i]);
            }
        }
        int new_size = temp.size();
        for (int j = 0; j < new_size; j++) {
            temp[j] = To_Lower_Case (temp[j]); 
        }
        int start = 0; 
        int end = new_size - 1;
        while (start <= end) {
            if (temp[start] != temp[end]) {
                return 0;
            }
            else {
                start++;
                end--;
            }
        }
        return 1;
    }
};
