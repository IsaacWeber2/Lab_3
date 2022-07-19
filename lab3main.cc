/**
 *   @file: lab3main.cc
 * @author: Enter your name
 *   @date: Enter the date
 *  @brief:
 *      This is the main for the Lab 3 Assignment of CS2401. You will need
 *      to implement the rearView function which should display the list
 *      backwards. Also, there are problems in the code which you will need to
 *      diagnose. Hint: draw a diagram of the linked list.
 *      Finally you will also need to write and test the copy constructor for
 *      this class.
 */

#include <cstdlib>
#include <iostream>

#include "list.h"
using namespace std;

int main() {

    List someNums;
    //let's add some numbers to the list
    
    someNums.addItem(34);
    someNums.addItem(53);
    someNums.addItem(29);
    someNums.addItem(22);

    someNums.addItem(15);
    
    
    //check the list after adding a number divisible by 5
    someNums.frontView();
    
    cout << endl;

    //add more numbers
    someNums.addItem(23);
    someNums.addItem(44);
    someNums.addItem(99);
    someNums.addItem(21);
    someNums.addItem(50);
    someNums.addItem(60);


    // Once you have written the rear-view this should let you
    // see the list frontwards and backwards.
    someNums.frontView();
    cout << endl;
    someNums.rearView();
    cout << endl;

    // This part will be uncommented once you have written the copy constructor
    
    someNums.rearView();
    cout << endl;

    List numCopy(someNums);  // call to the copy constructor

    //check to see the copy constructor is different from someNums
    if(&someNums != &numCopy){
        cout << "The lists are different\n";
        cout << "Copied list Front view\n";
        numCopy.frontView();
        cout << endl << "Copied list rear View\n";
        numCopy.rearView();
    }
    else {
        cout << "The copy constructor is not working\n";
    }

    
    return 0;
}
