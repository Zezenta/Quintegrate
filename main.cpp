#include <iostream>
#include <cmath> // Include the cmath header for pow and sqrt functions

double function_for_x(double x)
{
    return sqrt(pow(x, 2) + pow(x, 3));
}

int main() {
    // Your C++ code goes here
    double a;
    double b;
    double n; //numero de trapecio
    double sum;

    std::cout << "Write your a value" << std::endl;
    std::cin >> a;
    std::cout << "Write your b value " << std::endl;
    std::cin >> b;
    std::cout << "Write your n value " << std::endl;
    std::cin >> n;
    double delta_x = (b-a)/n;
    std::cout << "Your delta X is " << delta_x;
    // End of your code
    
    for (double i = 0; i <= n; i += delta_x)
    {
        if (i == 0 || i == n)
        {
            sum += function_for_x(i) / 2;
        }
        else
        {
            sum += function_for_x(i);
        }   
    }
    std::cout << sum << std::endl;
    std::cout << function_for_x(20) << std::endl;

}