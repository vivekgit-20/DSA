class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;

        string doubleString=s+s;
        // return true if present
        return doubleString.find(goal)!=string::npos;
    }
};