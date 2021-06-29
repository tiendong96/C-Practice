#include <iostream>

using namespace std;

string getCase (string str)
{
    int upper_case = 0, lower_case = 0;
    for(int i = 0; i < str.size(); i++)
    {
        if(isupper(str.at(i)))
        {
            upper_case++;
        }
        else if (islower(str.at(i)))
        {
            lower_case++;
        }
        //if none i.e. '!' then don't do anything
    }
    if (upper_case == 0)
    {
        return "lower";
    }
    else if (lower_case == 0)
    {
        return "upper";
    }
    else
    {
        return "mixed";
    }
};

int main()
{
    cout << getCase("SHOUTING!");
    return 0;
}

//wasn't hard, problem doesn't state if we can use other libraries or not
//ending up being able to use isupper/islower