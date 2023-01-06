#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int num;
    cin >> num;
    vector<int> v;
    while (num--)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    int n;
    while (cin >> n)
    {
        vector<int>::iterator it = find(v.begin(), v.end(), n);
        if (it != v.end())
            cout << "Found!" << endl;
        else
            cout << "Not Found!" << endl;
    }
    return 0;
}