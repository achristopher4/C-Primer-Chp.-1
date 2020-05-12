//
//  main.cpp
//  ChapterOneOne
//
//  Created by Alex Christopher on 5/11/20.
//  Copyright © 2020 Alex Christopher. All rights reserved.
//

#include <iostream>

/*
 * Simple main function:
 * Read two numbers and write the sum or product
 */

int main()
{
//    std::cout << "Hello World" << std::endl;
//    // prompt useers to enter two numbers
//    std::cout << "Enter Number:" << std::endl;
//    int v1 = 0, v2 = 0; // variables to hold the input we read
//    std::cin >> v1 >> v2; // read input
//    std::cout << "The product of " << v1 << " and " << v2
//    << " is " << v1 * v2 << std::endl;
//    return 0;
    
    
//    int sum = 0, val = 0, end = 0, count = 0;
//    std::cout << "Enter Starting then Ending Numbers:" << std::endl;
//    std::cin >> val >> end;
//    // keeping executing the while as long as val is less than or equal to 10
//    while (val <= end) {
//        sum += val; // assigns sum + val to sum
//        ++ val;     // add 1 to val
//        ++ count;
//    }
//    std::cout << "Sum of " << val - count << " to " << end << " inclusive is " << sum << std::endl;
//    return 0;
    
//    int sum = 0;
//    // sum values from 1 through 10
//    for (int i = -100; i <= 100; ++i)
//        sum += i; //equivalent to sum = sum + val
//    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
    
//    int sum = 0, v1 = 0, v2 = 0;
//    std::cin >> v1 >> v2;
//    // read until end-of-file, calculating a running total of all values read
//    for(v1; v1 <= v2; ++v1)
//        sum += v1; // equivalent to sum = sum + value
//    std::cout << "Sum is: " << sum << std::endl;
//    return 0;
    
    // currVal is the number we're counting; we'll read new values into val
    int currVal = 0, val = 0;
    // read first number and ensure that we have data to process
    if (std::cin >> currVal) {
        int cnt = 1;  // store the count for the current value we're processing
        while (std::cin >> val) { // read the remaining numbers
            if (val == currVal)   // if the values are the same
                ++cnt;            // add 1 to cnt
            else { // otherwise, print the count for the previous value
                std::cout << currVal << " occurs " << cnt << " times" << std::endl;
                currVal = val;    // remember the new value
                cnt = 1;          // reset the counter
            }
        }  // while loop ends here
        // remember to print the count for the last value in the file
        std::cout << currVal <<  " occurs " << cnt << " times" << std::endl;
    } // outermost if statement ends here
    return 0;
}
