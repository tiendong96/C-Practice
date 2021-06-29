#include <iostream>

using namespace std;


bool isSafeBridge(string s)
{
    for(int i = 0; i < s.size(); i++)
    {
        if(isspace(s.at(i)))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cout << isSafeBridge ("## ##");
    return 0;
}