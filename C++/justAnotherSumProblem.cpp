#include <iostream>
#include <numeric>
#include <vector>

int justAnotherSumProblem (int a, int b)
{
    int ans = 0;
    //by using the min-max functions, it keeps the solution flexible for values passed to the parameters
    //then by using a for loop that starts at the min and goes to the max we get our answer.
    for (int i = std::min(a,b); i <= std::max(a,b); i++)
    {
        ans += i;
    }

    return ans;
}

int justAnotherSumProblemV2 (int a, int b)
{
    return a < b? (b - a + 1) * (a + b)/2 : (a - b + 1) * (a + b)/2;
    // a = 1, b = -10
    // 1 < -10?
    // true: (b - a + 1) * (a + b)/2
    // false: (a - b + 1) * (a + b)/2
    // This works because the common difference between the range of 1 - -10 is 1
}


int main()
{
    std::cout <<"V1: "<< justAnotherSumProblem(1, -10);
    std::cout << std::endl;
    std::cout <<"V2: "<< justAnotherSumProblemV2 (1, -10);
    return 0;
}

//biggest takeaway: using a for-loop is the simplest way to accomplish solution. 
//alternatively solution could be done arithmetically (https://www.geeksforgeeks.org/arithmetic-progression/)
//explanation for arithmetic: