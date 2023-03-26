#include<iostream>
using namespace std;

int GCD(int a, int b)
{
    while(a != 0)
    {
        int tmp = a;
        a = b % a;
        b = tmp;
    }
    return b;
}

int main()
{
    int n;
    while(cin>>n && n != 0)
    {
        int sum = 0;
        for(int i=1; i<n; i++)
        {
            for(int j = i+1; j<=n; j++)
            {
                sum += GCD(i, j);
            }
        }
        cout<<sum<<endl;
    }
}
