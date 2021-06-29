#include <iostream>

using namespace std;

int addUp(int num)
{
    int ans = 0;
    //4 -> 1 + 2 + 3 + 4 = 10
    while (num != 0)
    {
        ans += num;
        num--;
    }

    return ans;
};

int main()
{
    cout << addUp(13);
    return 0;
}