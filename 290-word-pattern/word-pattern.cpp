#include <sstream>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int n = pattern.size();
        vector<string> v;

        stringstream ss(s);
        string word;
        while (ss >> word) {
            v.push_back(word);
        }

        // If the number of words doesn't match the pattern length, return false
        if (n != v.size()) return false;

        unordered_map<char, string> m;
        unordered_map<string, char> m1;

        for (int i = 0; i < n; i++) {
            char currentPattern = pattern[i];
            string currentWord = v[i];

            // Check if the pattern character is already mapped to a different word
            if (m.count(currentPattern) && m[currentPattern] != currentWord) {
                return false;
            }

            // Check if the word is already mapped to a different pattern character
            if (m1.count(currentWord) && m1[currentWord] != currentPattern) {
                return false;
            }

            // Otherwise, update the mappings
            m[currentPattern] = currentWord;
            m1[currentWord] = currentPattern;
        }

        return true;
    }
};