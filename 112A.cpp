#include <iostream>
#include <algorithm>
using namespace std;

string s1, s2;
int main()
{
    cin >> s1 >> s2;
    transform(begin(s1), end(s1), begin(s1), ::tolower);
    transform(begin(s2), end(s2), begin(s2), ::tolower);
    cout<<s1.compare(s2);
}