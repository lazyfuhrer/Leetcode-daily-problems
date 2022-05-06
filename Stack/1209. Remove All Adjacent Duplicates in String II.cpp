class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int> > st;
        
        for (int i=0; i<s.size(); ++i) {
            if (st.empty() || st.top().first!=s[i])
                st.push({s[i], 1});
            else {
                int val = st.top().second;
                st.pop();
                st.push({s[i], val+1});
            }
            if (st.top().second==k)
                st.pop();
        }
        s.clear();
        while (!st.empty()) {
            auto val = st.top();
            st.pop();
            while (val.second--) {
                s += val.first;
            }
        }
        reverse(s.begin(), s.end());
        return s;
    }
};
