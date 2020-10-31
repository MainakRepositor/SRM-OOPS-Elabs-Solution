#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
    stringstream ss(str);
    vector<int> result;
    int temp_int;
    char temp_char;

    ss >> temp_int;
    result.push_back(temp_int);
    while (ss >> temp_char)
    {
        ss >> temp_int;
        result.push_back(temp_int);
    }
    return result;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}
