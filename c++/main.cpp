#include <iostream>
#include <string>
//#include "lengthOfLastWord.h"
#include "lengthOfLongestSubstring.h"
using namespace std;

int main() {
    string string1;
    string1 = "abcabcab";
    lengthOfLongestSubstring s;
    cout << s.index(string1) << endl;
    return 0;
}