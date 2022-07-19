/**
 *   @file: list.cc
 * @author: Enter your name
 *   @date: Enter the date
 *  @brief:
 *      This is the implementation file for the List class which is a
 *      container based on a doubly linked list. The student is required to
 *      write the rearView function as well as the copy constructor. Note that
 *      the copy constructor will not be able to use the add function to produce
 *      a true copy because of the strange behavior of the add function, which
 *      treats all numbers divisible by five differently than other numbers.
 */

#include "list.h"

#include <iostream>
using namespace std;

void List::frontView() const {
    Node* cursor = head;
    while (cursor != nullptr) {
        cout << cursor->getData() << "  ";
        cursor = cursor->getNext();
    }
}

// The student is required to write the implementation of this function
void List::rearView() const {
    Node* cursor = head;
    int i, g;
    i =0;
    g = 0;
    while (cursor != nullptr)
    {
        cursor = cursor -> getNext();
        i++;
    }
    cursor = head;
    for(g = 1; g < i; g++)
    {
        cursor = cursor -> getNext();
    }
    
    while (cursor != head)
    {
        cout << cursor->getData() << "  ";
        cursor = cursor -> getPrevious();
    }
    cout << cursor->getData() << "  ";
    
}

void List::addItem(int item) {
    if (head == nullptr) {
        head = tail = new Node(item);
        nodeCount++;
    } else if (item % 5 == 0 && nodeCount > 3) {
        int i = 1;
        Node* cursor = head;
        while (i < nodeCount / 2) {
            cursor = cursor->getNext();
            i++;
        }

		Node *temp = new Node(item);
		temp->setNext(cursor->getNext());
		temp->setPrevious(cursor);
		cursor->setNext(temp);

        cursor = cursor -> getNext();
        cursor = cursor -> getNext();
        
        cursor ->setPrevious(temp);
        
        
        nodeCount++;
    } else {
        tail->setNext(new Node(item, tail));
        tail = tail->getNext();
        nodeCount++;
    }
}

List::~List() {
    Node* rmPtr;
    while (head != nullptr) {
        rmPtr = head;
        head = head->getNext();
        delete rmPtr;
    }
}
