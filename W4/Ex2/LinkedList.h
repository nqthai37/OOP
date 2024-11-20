#pragma once

#include <iostream>

using namespace std;

struct Node
{
    int info;
    Node* pNext;
};

class LinkedList
{
private:
    Node* pHead, * pTail;
    int curN; 
 
public: 
 LinkedList(void);
 LinkedList(const LinkedList& ll);
 LinkedList& operator=(const LinkedList& ll);
 ~LinkedList(void); 
 
 static Node* CreateNode(const int& n); 
 Node* getHead() const;
 Node* getTail() const;
 int getCurN() const;
 Node* AddHead(const int& n); 
 Node* AddTail(const int& n); 
 Node* RemoveHead(); 
 Node* RemoveTail(); 
 friend ostream& operator<<(ostream& os, const LinkedList& ll); 
 const int& operator[](const int& idx) const;
}; 