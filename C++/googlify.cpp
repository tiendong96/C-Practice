#include <iostream>

std::string googlify(int n)
{
    std::string ans;
    if(n <= 1)
    {
        return "invalid";
    }
    for(int i = 0; i < n; i++)
    {
        ans.push_back('o');
    }
    return "G" + ans + "gle";
}

std::string googlifyv2(int n)
{
    if(n <= 1)
    {
        return "invalid";
    }
    return "G" + std::string(n, 'o') + "gle";
}

int main()
{
    std::cout << googlify(5);
    std::cout << std::endl;
    std::cout << googlifyv2(5);
    std::cout << std::endl;
    std::cout << std::string(10, '#') << std::endl;

    return 0;
}

//biggest takeaway: although my solution wasn't wrong, I think it was done better in v2
//std::string::string - constructs a string object, initializing its value dpepending on the constructor version used (https://www.cplusplus.com/reference/string/string/string/)