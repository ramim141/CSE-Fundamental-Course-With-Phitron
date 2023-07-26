#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> adds;
    string add;
    while (cin >> add && add != "end")
    {
        adds.push_back(add);
    }

    int Q;
    cin >> Q;

    string cmd, PR;
    vector<string>::iterator cr = adds.begin();

    for (int i = 0; i < Q; i++)
    {
        cin >> cmd;

        if (cmd == "visit")
        {
            cin >> PR;

           
            vector<string>::iterator it;
            for (it = adds.begin(); it != adds.end(); ++it)
            {
                if (*it == PR)
                {
                    cr = it;
                    cout << PR << endl;
                    break;
                }
            }

            if (it == adds.end())
            {
                cout << "Not Available" << endl;
            }
        }
        else if (cmd == "next")
        {
            ++cr;
            if (cr != adds.end())
            {
                cout << *cr << endl;
            }
            else
            {
                cout << "Not Available" << endl;
                --cr; 
            }
        }
        else if (cmd == "prev")
        {
            if (cr != adds.begin())
            {
                --cr;
                cout << *cr << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
