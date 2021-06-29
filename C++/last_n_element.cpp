#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> last (vector<int> a, int n)
{
    //using a for loop start the iterator from the end of the list
    //and iterate til it reaches n, could use vector function push_back?
    //return -1 if n exceeds the length of the array
    //return empty array if n == 0

    vector<int> ans;

    if(n == 0)
    {
        return {};
    }
    else if (n > a.size())
    {
        return {-1};
    }
    else
    {
        for(int i = a.size() - n; n > 0; i++)
        {
            ans.push_back(a[i]);
            n--;
        }
    }
    return ans;
};
int main()
{
    vector<int> list = {4, 3, 9, 9, 7, 6};
    int n = 3;

    vector<int>::iterator ptr;

    vector<int> newList = last(list,n);

    for(ptr = newList.begin(); ptr != newList.end(); ptr++)
    {
        cout << *ptr << " ";
    }

    return 0;
}

//a.size will take size of list then subtract it by the number, n, which will start
//the iterator at the beginning of the last n of the list. And as n stays greater than 0
//the iteration will continue. While iterating push that value to the end.
//Biggest take away was actually learning that: to print the contents of a vector you have
//to put it through a for loop and use an iterator/ptr to go through the contents of the
//vector. Line 41 is also interesting and I wonder if I did it right.