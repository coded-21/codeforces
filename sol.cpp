#include <iostream>
using namespace std;

int main(){
    int n,k;
    int count=0;
    cin >> n >> k;
    int s[n];
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    for(int i =0; i<n; i++)
    {
        if(s[i] >= s[k-1] && s[i] != 0) count++;
    }
    cout<<count;
    return 0;
}