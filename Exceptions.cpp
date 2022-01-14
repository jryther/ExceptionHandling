// Exceptions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdexcept>

// Custom exception class
class mycustomexception : public std::exception
{
public:
    virtual const char* what() const throw()
    {
        return "My custom exception";
    }
} mycustomex;

bool do_even_more_custom_application_logic()
{
    // TODO: Throw any standard exception
    throw std::exception("Throwing standard exception"); // Throws standard exception

    std::cout << "Running Even More Custom Application Logic." << std::endl;

    return true;
}
void do_custom_application_logic()
{
    // TODO: Wrap the call to do_even_more_custom_application_logic()
    //  with an exception handler that catches std::exception, displays
    //  a message and the exception.what(), then continues processing
    std::cout << "Running Custom Application Logic." << std::endl;
    try {
        if (do_even_more_custom_application_logic())
        {
            std::cout << "Even More Custom Application Logic Succeeded." << std::endl;
        }
    }
    catch (const std::exception& e) { // Catch the standard exception thrown
        std::cout << e.what() << std::endl; // Print the exception to the terminal
    }

    // TODO: Throw a custom exception derived from std::exception
    //  and catch it explictly in main
    throw mycustomex;  // Throwing custom exception


    std::cout << "Leaving Custom Application Logic." << std::endl;

}

float divide(float num, float den)
{
    // TODO: Throw an exception to deal with divide by zero errors using
    //  a standard C++ defined exception
    if (den == 0) { // Trigger if denominator is 0
        throw std::invalid_argument("Denominator is 0"); // Throw invalid argument exception
    }
    return (num / den);
}

void do_division() noexcept
{
    //  TODO: create an exception handler to capture ONLY the exception thrown
    //  by divide.

    float numerator = 10.0f;
    float denominator = 0;

    try {
        auto result = divide(numerator, denominator);
        std::cout << "divide(" << numerator << ", " << denominator << ") = " << result << std::endl;
    }
    catch (const std::exception& e) { // Catches exception when denominator is 0
        std::cout << e.what() << std::endl;
    }
}

int main()
{
    try {
        std::cout << "Exceptions Tests!" << std::endl;

        // TODO: Create exception handlers that catch (in this order):
        //  your custom exception
        //  std::exception
        //  uncaught exception 
        //  that wraps the whole main function, and displays a message to the console.
        do_division();
        do_custom_application_logic();
    }
    catch (const mycustomexception& mycustom) { // Catch custom exception
        std::cout << mycustom.what() << std::endl;
    }
    catch (const std::exception& e) { // Catch standard exceptions
        std::cout << e.what() << std::endl;
    }
    catch (...) { // Catch default exceptions
        std::cout << "Default exception" << std::endl;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu