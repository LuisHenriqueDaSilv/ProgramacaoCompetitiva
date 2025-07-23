#include <string>
#include <iostream>
using namespace std;


class Solution {
public:
    int maximumGain(string s, int x, int y) {
        return x>y? 
            gain(s, "a", "b", x, y):gain(s, "b", "a", y, x);
    }

    int gain(string& s, string first, string second, int x, int y){
        string temp;
        int score = 0;

        // Remove most valuables
        for(char c: s){
            if(!temp.empty() && temp.back() == first[0] && c == second[0]){
                temp.pop_back();
                score+=x;
            } else {
                temp.push_back(c);
            }
        }

        string temp2;
        for(char c: temp){
            if(!temp2.empty() && temp2.back() == second[0] && c == first[0]){
                temp2.pop_back();
                score+=y;
            } else {
                temp2.push_back(c);
            }
        }

        return score;
    }
};