#include <bits/stdc++.h>
using namespace std;

pair<string, int> highestWord(const string &S)
{
    stringstream ss(S);
    string word;

    map<string, int> wordCount;
    string maxWord;
    int maxCount = 0;

    while (ss >> word)
    {
        wordCount[word]++;
        if (wordCount[word] > maxCount)
        {
            maxCount = wordCount[word];
            maxWord = word;
        }
    }
    cout << maxWord << " " << maxCount << endl;
    return make_pair(maxWord, maxCount);
}

int main()
{
    int T;
    cin >> T;
    cin.ignore();

    for (int i = 0; i < T; i++)
    {
        string S;
        getline(cin, S);

        pair<string, int> result = highestWord(S);
    }

    return 0;
}
