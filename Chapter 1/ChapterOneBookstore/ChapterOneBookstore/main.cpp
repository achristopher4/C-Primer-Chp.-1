//
//  main.cpp
//  ChapterOneBookstore
//
//  Created by Alex Christopher on 5/11/20.
//  Copyright © 2020 Alex Christopher. All rights reserved.
//

/*
 * Input:
  0-201-78345-X 3 20.00
  0-201-78345-X 2 25.00
 */


#include <iostream>
#include "Sales_item.h"

int main() {

//     Sales_item book;
//     // read ISBN, number of copies sold, and sales price
//     std::cin >> book;
//     // write ISBN, number of copies sold, total revenue, and average price
//     std::cout << book << std::endl;
    
//    Sales_item item1, item2;
//    std:: cin >> item1 >> item2; // read a pair of transactions
//    std::cout << item1 + item2 << std::endl; // print their sum
    
//    Sales_item item1, item2;
//    std::cin >> item1 >> item2;
//    // First check that item1 and item2 represent the same book
//    if (item1.isbn() == item2.isbn()){
//        std::cout << item1 + item2 << std::endl;
//        return 0; //indicate succes
//    } else{
//        std::cerr << "Data must refer to the same ISBN" << std::endl;
//        return -1; //indicate failure
//    }
    
    //Solve bookstore program
    Sales_item total; //variable to hold data for the next transaction
    //read the first transaction and ensure that there is data to process
    if (std::cin >> total) {
        Sales_item trans; //variable to hold the running sum
        //Read and process teh remaining transactions
        while (std::cin >> trans){
            //if still processing same book
            if (total.isbn() == trans.isbn())
                total += trans; //update the running total
            else{
                //print results for the previous book
                std::cout << total << std::endl;
                total = trans; // total now referes to the next book
            }
        }
        std::cout << total << std::endl; // print last transaction
    } else{
        //no input
        std::cout << "no data" << std::endl;
        return -1;
    }
    return 0;
}
