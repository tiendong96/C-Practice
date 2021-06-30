#include <iostream>


//Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
int strStr(std::string haystack, std::string needle){
   if(haystack.find(needle,0) == 0)
   {
       return 0;
   }
   else if (haystack.find(needle),0 == -1)
   {
       return -1;
   }
   else
   {    
       return haystack.find(needle,0);
   }

}


int main()
{
    std::cout << strStr("aaaaa", "bba");
    return 0;
}