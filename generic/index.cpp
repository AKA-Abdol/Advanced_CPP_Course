#include <bits/stdc++.h>

using namespace std;

template <typename T>
T cross(T a, int b){
    T ans;
    for(int i = 0; i < b; i++)
        ans += a;
    return ans;
}

int main()
{
    cout << cross<string>("hasan", 2) << endl;
    cout << cross<int>(5, 2) << endl;
    return 0;
}