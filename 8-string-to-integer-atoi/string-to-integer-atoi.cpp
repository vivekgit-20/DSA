class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int n=s.size();
        while(i<n && s[i]==' ') {
            // skipping leading spaces
            i++;
        }

        int sign=1;

        if(i<n && (s[i]=='-' || s[i]=='+')) {
        if(s[i]=='-' ) {
            // mainpulating sign 
            sign=-1;
            i++;
        } 
        else {
            sign = 1;
            i++;
        }

        }
        long long num =0;
        while(i<n && isdigit(s[i])) {
            num=num*10+(s[i]-'0');

            // calculating current number
        
        if(num*sign>INT_MAX) {
            return INT_MAX;
        }
        if(num*sign<INT_MIN) {
            return INT_MIN;
        }


        i++;
        }


        return num*sign;
        
        
    }
};