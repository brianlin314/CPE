#include<iostream>
using namespace std;
int main()
{
    string s1, s2;

    while (getline(cin, s1) && getline(cin, s2))
    {
        int arr[26] = {0}, temp[26] = {0};
        for (int i = 0; i < s1.length(); i++)
        {
            arr[s1[i] - 'a']++;
        }
        for (int i = 0; i < s2.length(); i++)
        {
            if (arr[s2[i] - 'a'] > 0)
            {
                temp[s2[i] - 'a']++;
            }
        }
        for (int i = 0; i < 26; i++)
        {
            int minimum = min(arr[i], temp[i]);
            while (minimum)
            {
                cout << (char)('a' + i);
                minimum--;
            }
        }
        cout << endl;
    }
}
