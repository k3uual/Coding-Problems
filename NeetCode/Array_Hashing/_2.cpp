#include <iostream>
#include <string>
#include<unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        int i;
        int size = s.size();
        if(t.size() != s.size())
            return false;
        unordered_map<char, int> track;
        
        for(i = 0; i < size; i++) {
                track[s[i]]++;
                track[t[i]]--;
        }

        for(auto t : track) {
            if(t.second != 0)
                return false;
        }
        return true;
        
    }
};

int main(){
    Solution sol;
    cout<<sol.isAnagram("anagram","gramana");
}