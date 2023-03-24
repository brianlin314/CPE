#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    while(cin >> n && n != 0)
    {
        int cnt = 0;
        string bin = "";
        while(n != 0)
        {
            if(n % 2 == 1)
            {
                bin += '1';
                cnt++;
            }
            else
            {
                bin += '0';
            }
            n /= 2;
        }
        reverse(bin.begin(), bin.end());
        cout << "The parity of "<< bin << " is " << cnt << " (mod 2)." << endl;
    }
    return 0;
}

