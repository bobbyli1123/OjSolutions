// 2025-4-26
// 151. 反转字符串中的单词 <Medium> [双指针]

#include "environment.h"

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());

        int n = s.size();
        int idx = 0;
        for (int start = 0; start < n; ++start) {
            if (s[start] != ' ') {
                if (idx != 0) s[idx++] = ' ';
            }

            int end = start;
            while (end < n && s[end] != ' ') s[idx++] = s[end++];

            reverse(s.begin() + idx - (end - start), s.begin() + idx);

            start = end;
        }
        s.erase(s.begin() + idx, s.end());
        return s;
    }
};

int main() {
    return 0;
}