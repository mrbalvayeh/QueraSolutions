#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    int n;

    cin >> n;

    string maxWord;
    int maxLetters = 0;

    for (int i=0; i<n ; i++) {
        string word;
        cin >> word;

        set<char> letters;

        for (int j=0; j<word.length(); j++)
            letters.insert(word[j]);

        int numLetters = letters.size();

        if (numLetters > maxLetters) {
            maxLetters = numLetters;
        }
    }

    cout << maxLetters;
}
