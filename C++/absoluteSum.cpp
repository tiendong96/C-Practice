#include <iostream>
#include <vector>

int absoluteSum(std::vector<int> arr)
{
    int total = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        total += abs(arr[i]);
    }
    return total;
}


int main()
{
    std::cout << absoluteSum({2, -1, -3, 4, 8});
    return 0;
}

//takeaway is use of for-loop and abs()