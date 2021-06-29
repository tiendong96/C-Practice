#include <iostream>
#include <vector>

std::vector<int> pairs(std::pair <int, int> p)
{
    // std::vector<int> ans;
    // ans.push_back(p.first);
    // ans.push_back(p.second);

    // return ans;
    //**will give you the same answer, however, this is not clean 

    return {p.first, p.second};
}

int main()
{
    std::vector<int> list = pairs(std::make_pair(1,2));
    for(int i : list)
    {
        std::cout << i;
    }
    return 0;
}