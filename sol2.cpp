#include <iostream>
using namespace std;

int main(){
    int n,k;
    int count=0;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++){
        cin>>a[i];
        cout<<a[k];
        if (a[i] >= a[k] && a[i] != 0)
        {
            count++;
        }
    cout<<count;
    return 0;
    }
}