#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    // print on console
    // cout << "hasan kojayi" << endl;

    // // input from console
    // int a;
    // cin >> a;
    // cout << "pow2: " << a * a << endl;

    // // while & for
    // for(int i = 0; i < 10; i++)
    //     cout << to_string(i) << " * " << to_string(i) << " = " << i * i << endl;
    
    // int n = 10;
    // while(n--)
    //     cout << "hasan ";
    // cout << endl;

    // array and vectors
    int a[100];
    int end = 0;
    int n = 5;
    while(n--)
        cin >> a[end++];
    cout << a[2] << endl;
    // C -> just array (ordered memory allocation) ==> C++ -> (class)vector (unordered)
    vector<int> v;
    n = 5;
    while(n--){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    cout << v.size() << endl;

    return 0;
}