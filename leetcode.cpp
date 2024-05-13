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
        string removeDuplicates(string s){
            if(s.size() == 0){
                return s;
            }
            stack<char> sta;
            for(char ch : s){
                if(sta.empty()){
                    sta.push(ch);
                }
                else{
                    if(sta.top() == ch){
                        sta.pop();
                        continue;;
                    }
                    sta.push(ch);
                }
            }
            string ans;
            while(!sta.empty()){
                ans.push_back(sta.top());
                sta.pop();
            }
            reverse(ans.begin(), ans.end());
            return ans;
            
        }
};
