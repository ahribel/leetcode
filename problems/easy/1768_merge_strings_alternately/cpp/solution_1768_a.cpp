#include "solution_1768.h"

namespace s1 {

string mergeAlternately(string word1, string word2) {
    const string& lte = word1.size() <= word2.size() ? word1 : word2;
    const string& gt = word1.size() > word2.size() ? word1 : word2;

    string merged;
    merged.resize(word1.length()+word2.length());

    size_t i { 0 }, j { 0 };
    while (i < lte.size()) {
        merged[j++] = word1[i];
        merged[j++] = word2[i++];
    }
    while (i < gt.size()) {
        merged[j++] = gt[i++];
    }
    return merged;
}

};

