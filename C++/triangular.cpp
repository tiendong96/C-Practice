#include <iostream>

using namespace std;


int triangle (int num)
{
    if(num == 0)
    {
        return num;
    }
    else 
    {
        return num + triangle(num-1);
    }
};


int main()
{
    cout << triangle(6);
    return 0;
}