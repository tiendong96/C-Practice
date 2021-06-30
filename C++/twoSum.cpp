#include <iostream>
#include <vector>

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

//because we are given the target we just have to go through the 
std::vector<int> twoSum(std::vector<int>& nums, int target)
{
    for(int i = 0; i < nums.size(); i++)
    {
        for(int j = i+1; j < nums.size(); j++)
        {
            int result = nums[i] + nums[j];
            if(result == target)
            {
                return {i,j};
            }
        }
    }
    return {};
};

int main()
{
    std::vector<int> list = {1,2,3,4};
    std::vector<int> ans = twoSum(list, 7);
    for(int i = 0; i < ans.size(); i++)
    {
        std::cout << ans[i] << std::endl;
    }
    return 0;
}