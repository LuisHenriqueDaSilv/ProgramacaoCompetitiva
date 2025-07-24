class Solution {
public:
    int myAtoi(string s) {

        int ans = 0;
        int n = s.length();
        int converted;
        int i = 0;
        int negative = 0;
        while(s[i] == ' '){
            i++;
        }

        if(s[i] == '-' || s[i] == '+'){
            negative = s[i] == '-';
            i++;
        }

        while(i < n){
            if(s[i] >= 48 && s[i]<= 57) {
                converted = s[i]-48;
                if (ans > (INT_MAX - converted) / 10) {
                    return negative ? INT_MIN : INT_MAX;
                }
                ans=ans*10+converted;
            } else {
                break;
            }
            i++;
        }

        return negative? ans*-1:ans;
    }
};