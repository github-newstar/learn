#include <cinttypes>
#include <iostream>
#include<stack>
#include<algorithm>
#include <istream>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
    public:
        bool isValid(string s){
            if(s.size() == 0 || s.size() == 1)
                return true;
            stack<char> sta;
            for(int i = 0; i < s.size(); i++){
                if(s[i] == '[' || s[i] == '{' || s[i] == '('){
                    if(s[i] == '['){
                        sta.push(']');
                    }
                    if(s[i] == '{'){
                        sta.push('}');
                    }
                    if(s[i] == '('){
                        sta.push(')');
                    }
                }
                else if(s[i] == ']' || s[i] == ']' || s[i] == ']'){
                    if(sta.size() == 0){
                        return false;
                    }
                    if(sta.top() != s[i]){
                        return false;
                    }
                    sta.pop();
                }
            }
            if(!sta.empty()){
                return false;
            }
            else{
                return true;
            }

        }
};
