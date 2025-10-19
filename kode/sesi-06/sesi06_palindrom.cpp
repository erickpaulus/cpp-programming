#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

//Bad sample
bool isPalindrome(const string &word) {
    int word_length = word.length();
    int middle_index = word_length / 2;
    for (int i = 0; i < middle_index; i++) {
        if (word[i] != word[word_length - i - 1]) {
            return false;
        }
    }
    return true;
}

//Good sample
bool isPalindrome(const string &word) {
    return word == string(word.rbegin(), word.rend());
}

int main() {
    string word = "racecar";
    bool result = isPalindrome(word);
    cout << boolalpha << result << endl;  // Output: true
    system("pause");
    return 0;
}
