
#include <iostream>
#include <string>

/*
Prompt:
An avid hiker keeps meticulous records of their hikes. During the last hike that took exactly Step steps, for every step it was noted if it was an uphill, U, or a downhill, D, step. 
Hikes always start and end at sea level, and each step up or down represents a  unit change in altitude. We define the following terms:
A mountain is a sequence of consecutive steps above sea level, starting with a step up from sea level and ending with a step down to sea level.
A valley is a sequence of consecutive steps below sea level, starting with a step down from sea level and ending with a step up to sea level.
Given the sequence of up and down steps during a hike, find and print the number of valleys walked through.
*/

//We want to count how many valleys are in the string. ie.. UDDDUDUU or DDUUUUDD
//What constitutes as a valley? If it is below sea level and is followed by a 'U'
int countingValleys(int steps, std::string path)
{
    int seaLevel = 0;
    int depth = 0;
    int valley = 0;
    for(int i = 0; i < steps; i++)
    {

        if(toupper(path.at(i)) == 'U')
        {
            seaLevel++;
            if(seaLevel == 0)
            {
                depth = 0;
            }
        }
        else if (toupper(path.at(i)) == 'D')
        {
            seaLevel--;
            if(seaLevel == 0)
            {
                depth = 0;
            }
            if(seaLevel < 0 && toupper(path.at(i+1) == 'U') && depth != seaLevel) 
            {
                depth = seaLevel;
                valley++;
            }
        }
    }
    return valley;
}

int main()
{
    std::cout << countingValleys(10, "DUDDDUUDUU");
    return 0;
}