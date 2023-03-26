#include<iostream>
#include<string>
#include<iomanip>
#include<map>
using namespace std;
int main()
{
    int testcase;
    string s;
    bool flag = false;
    cin >> testcase;
    cin.ignore();
    cin.ignore();

    for (int i = 0; i < testcase; i++)
    {
        if(flag)
        {
            cout<<endl;
        }
        flag = true;
        map<string, float> treeMap;
        float cnt = 0;
        while (getline(cin, s) && s != "")
        {
            treeMap[s]++;
            cnt++;
        }
        map<string, float>::iterator it;
        for (it = treeMap.begin(); it != treeMap.end(); it++)
        {
            cout << (*it).first << " " << fixed << setprecision(4) << ((*it).second / cnt) * 100 << endl;
        }
    }
}
