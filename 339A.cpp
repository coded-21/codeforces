#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int count=0;
    string s;
    cin>>s;
    char arr[s.length()];

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '+') continue;
        arr[count++] = s[i];
    }
    sort(arr, arr+count);
    for (int i = 0; i < count; i++)
    {
        cout<<arr[i];
        if(i == count-1){break;}
        cout<<'+';
    }
    return 0;
}