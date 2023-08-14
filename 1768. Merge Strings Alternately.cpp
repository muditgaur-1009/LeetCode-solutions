#include<iostream>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged;
        int n1 = word1.length();
        int n2 = word2.length();
        int i = 0, j = 0;

        while (i < n1 && j < n2) {
            merged += word1[i++];
            merged += word2[j++];
        }

        while (i < n1) {
            merged += word1[i++];
        }

        while (j < n2) {
            merged += word2[j++];
        }

        return merged;
    }
};

int main() {
    
    return 0;
}