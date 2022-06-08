bool isPalindrome(string s) {
    string s1 = s;
    reverse(s1.begin(), s1.end());
    return s==s1;
}

class Solution {
public:
    int removePalindromeSub(string s) {
        if (s.size()) {
            if (isPalindrome(s)) return 1;
            else return 2;
        }
        return 0;
    }
};
