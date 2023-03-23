#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    int n1, n2;
    while(cin>>n1>>n2)
    {
        vector<int> vec;
        for(int i= min(n1, n2); i<=max(n1, n2); i++)
        {
            int n = i, cnt =  1;
            while(n != 1)
            {
                if(n % 2 == 1)
                {
                    n = 3*n+1;
                    cnt++;
                }
                else
                {
                    n /= 2;
                    cnt++;
                }
            }
            vec.push_back(cnt);
        }
        sort(vec.begin(), vec.end(), cmp);
        cout<<n1<<" "<<n2<<" "<<vec[0]<<endl;
    }
}
