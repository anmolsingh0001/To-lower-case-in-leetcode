class Solution {
public:
    string toLowerCase(string s) {
        string test;
        int n=s.size();
        for(int i=0; i<n; i++){
            test+=tolower(s[i]);
        }

        return test;
    }
};