class Solution {
public:
    int value(char c) {
        if(c=='I') return 1;
        else if(c=='V') return 5;
        else if(c=='X') return 10;
        else if(c=='L') return 50;
        else if(c=='C') return 100;
        else if(c=='D') return 500;
        else if(c=='M') return 1000;

        return 0;
    }
    int romanToInt(string s) {
        int ans=0;
        int n=s.size();

        for(int i=0;i<n;i++) {
            // if condition like IX or XC occurs
            if(i+1<n && value(s[i])<value(s[i+1])) {
                    ans-=value(s[i]); // subtract character value
            }
            else { // add character value
                ans+=value(s[i]);
            }
        }
        return ans;
        
    }
};