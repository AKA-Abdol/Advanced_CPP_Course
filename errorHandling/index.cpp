#include <bits/stdc++.h>

using namespace std;

class OutOfRangeError : public logic_error
{
public:
    OutOfRangeError(string errMsg, int typeNo = 0) : logic_error(errMsg) {
        type = typeNo == 0 ? "under-range" : "higher-range";
    }
    string getType(){return type;}
private:
    string type;
};

typedef vector<int> VI;

int main()
{
    VI v = {1, -2, 3};
    int n;
    cin >> n;
    try
    {
        if (n < 0)
            throw OutOfRangeError("Index value should be higher than 0!");

        if (n + 1 > v.size())
            throw OutOfRangeError("Index value is higher than vector size!", 1);
    }
    catch(OutOfRangeError err)
    {
        cerr << err.what() << endl;
        if(err.getType() == "higher-range")
            cout << "last index of vector: " << v.size() << endl;
        
        throw err;
    }
    catch(...)
    {
        cerr << "unknown error" << endl;
    }

    return 0;
}