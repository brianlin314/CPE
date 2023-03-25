#include<iostream>
using namespace std;;
int main()
{
    int n;
    while(cin>>n)
    {
        int bottle = 0;
        while(n>=3)
        {
            int tmp = n - (n % 3);
            bottle += tmp;
            n = (n / 3) + (n % 3);
        }
        if(n == 2)
        {
            bottle += 3;
        }
        else
        {
            bottle += 1;
        }
        cout<<bottle<<endl;
    }
}
