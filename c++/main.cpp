#include <iostream>
#include <string>
#include "lengthOfLastWord.h"
using namespace std;

int main() {
    string string1;
    string1 = "hello World";
    lengthOfLastWord s;
    cout << s.lengthOfLastWordFn(string1) << endl;
    return 0;
}