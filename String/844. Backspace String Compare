class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1, t1; int has1 = 0, has2 = 0;
        for (int i=s.size(); i>=0; --i) {
            if (s[i]=='#')
                has1++;
            else {
                if (has1 > 0) {
                    has1--;
                    continue;
                }
                else s1 += s[i]; 
            }
        }
        for (int i=t.size(); i>=0; --i) {
            if (t[i]=='#')
                has2++;
            else {
                if (has2 > 0) {
                    has2--;
                    continue;
                }
                else t1 += t[i];
            }
        }
        if (s1==t1)
            return true;
        else return false;
    }
};
