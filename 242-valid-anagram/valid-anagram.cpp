class Solution {
public:
    bool isAnagram(string s, string t) {
        int a = s.size();
        int b = t.size();
        if (a != b)
            return false;
        unordered_map<char, int> freq;

        for (char el : s) {
            freq[el]++;
        }
        for (char el : t) {
            freq[el]--;

            if (freq[el] < 0) {
                return false;
            }
        }
        return true;
        }
    };