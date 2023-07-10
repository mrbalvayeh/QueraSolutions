#include <iostream>
#include <string>
using namespace std;

int main() {
    string word, a;
    int i;
    cin >> word;
    cout << word << endl;
    for (i = 1; i < word.length(); i++)
    {
        string stuff(i, word[i]);
        a = word.substr(i,word.length());
        cout << stuff << a<<endl;
    }
    return 0;
}
