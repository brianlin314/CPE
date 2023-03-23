#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(pair<char, int> a, pair<char, int> b)
{
    if (a.second != b.second)
    {
        return a.second > b.second;
    }
    else
    {
        return a.first < b.first;
    }
}

int main()
{
    int n;
    string s;
    vector<pair<char, int> > vec(26);

    for (int i = 0; i < 26; i++)
    {
        vec[i] = {'A' + i, 0};
    }

    cin >> n;
    getchar();
    for (int i = 0; i < n; i++)
    {
        getline(cin, s);
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] >= 'a' && s[j] <= 'z')
            {
                vec[s[j] - 'a'].second++;
            }
            else if (s[j] >= 'A' && s[j] <= 'Z')
            {
                vec[s[j] - 'A'].second++;
            }
        }
    }

    sort(vec.begin(), vec.end(), cmp);
    for (auto it : vec)
    {
        if (it.second > 0)
        {
            cout << it.first << " " << it.second <<endl;
        }
    }

    return 0;
}
