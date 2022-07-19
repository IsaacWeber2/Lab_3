/**
 *   @file: list.h
 * @author: Enter your name
 *   @date: Enter the date
 *  @brief:
 *      This is the header file for a class that holds a doubly linked list
 *      of integers. Above the declaration of that class you will find a
 *      declaration of a node class that is used in the construction of that list.
 *      The student will be asked to complete some incomplete parts of this
 *      list class.
 */

#include <iostream>

class Node {
   public:
    Node(int d = 0, Node *p = nullptr, Node *n = nullptr) {
        data = d;
        previous = p;
        next = n;
    }
    int getData() { return data; }
    Node *getPrevious() { return previous; }
    Node *getNext() { return next; }
    void setdata(int d) { data = d; }
    void setPrevious(Node *p) { previous = p; }
    void setNext(Node *n) { next = n; }

   private:
    int data;
    Node *next;
    Node *previous;
};

class List {
   public:
    List() {
        head = tail = nullptr;
        nodeCount = 0;
    }
    void addItem(int item);
    void frontView() const;
    void rearView() const;
    ~List();
    int size() const { return nodeCount; }
    // List(const List& other);
   private:
    Node *head;
    Node *tail;
    int nodeCount;
};
