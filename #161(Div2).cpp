#include <iostream>
using namespace std;

int main()
{
    int m,x=0;
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            cin>>x;
            if (x==1)
            {
                m = (abs(j-3) + abs(i-3));
            }
        }
    }
    std::cout<<m;
    return 0;
}