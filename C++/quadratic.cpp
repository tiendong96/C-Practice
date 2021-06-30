#include <iostream>
#include <cmath>

int quadraticEquation (int a, int b, int c)
{
    // x = -b + sqrt(b^2 - 4ac)/2a
    // x = -b - sqrt(b^2 - 4ac)/2a

    int discriminant = pow(b,2) - 4 * a * c;
    //when positive we get 2 real solutions. 
    //NOTE: problem says, "Calculate only the root that sums the square root of the discriminant, not the one that subtracts it."
    if(discriminant > 0)
    {   
        return (-b + sqrt(discriminant))/(2 * a);
    }
    //when zero we get just one real solution
    else if (discriminant == 0)
    {
        return -b/(2*a);
    }
    //when negative we get a pair of complex solutions
    else
    {
        //doesn't look like they are about imaginary roots?
    }

}

//answered could be shortened to:
int quadraticEquationv2(int a, int b, int c)
{
    //this holds true because the problem isn't concerned with imaginary roots.
    //if the discriminant equal 0, then this version will just return -b/2a just 
    //like in my code above.
    return (-b + sqrt(pow(b,2) - 4 * a * c))/(2 * a);
}


int main()
{
    std::cout << quadraticEquation(1, -12, -28);
    std::cout << std::endl;
    std::cout << quadraticEquationv2(1, -12, -28);
    return 0;
}