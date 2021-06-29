#include <iostream>
#include <vector>

using namespace std;

vector<int> noOdds (vector<int> arr)
{
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i] % 2 == 0)
        {
            ans.push_back(arr[i]);
        }
    }
    return ans;
}


int main()
{
    vector<int> list = noOdds({1, 2, 3, 4, 5, 6, 7, 8});
    for (int i = 0; i < list.size(); i++)
    {
        cout << list[i] << " \n";
    }
}