#include "LinkedList.h"

Node* LinkedList::getHead() const
{
    return pHead;
}
Node* LinkedList::getTail() const
{
    return pTail;
}

int LinkedList::getCurN() const
{
    return curN;
}

LinkedList::LinkedList(void)
{
    pHead = pTail = NULL;
    curN = 0;
}

LinkedList::LinkedList(const LinkedList& ll)
{
    pHead = pTail = NULL;
    curN = 0;
    Node* p = ll.pHead;
    while (p)
    {
        AddTail(p->info);
        p = p->pNext;
    }
}

LinkedList& LinkedList::operator=(const LinkedList& ll)
{
    if (this == &ll)
        return *this;
    while (pHead != NULL)
    {
        Node* p = pHead;
        pHead = pHead->pNext;
        delete p;
        p = NULL;
    }
    pHead = pTail = NULL;
    curN = 0;
    Node* p = ll.pHead;
    while (p)
    {
        AddTail(p->info);
        p = p->pNext;
    }
    return *this;
}

LinkedList::~LinkedList(void)
{
    // cout << "Destructor called " << curN << endl;
    while (pHead != NULL)
    {
        Node* p = pHead;
        pHead = pHead->pNext;
        delete p;
        p = NULL;
    }
    pHead = pTail = NULL;
}

Node* LinkedList::CreateNode(const int& n)
{
    Node* p = new Node;
    p->info = n;
    p->pNext = NULL;
    return p;
}

Node* LinkedList::AddHead(const int& n)
{
    Node* p = CreateNode(n);
    if (!pHead)
        pHead = pTail = p;
    else
    {
        p->pNext = pHead;
        pHead = p;
    }
    curN++;
    return p;
}

Node* LinkedList::AddTail(const int& n)
{
    Node* p = CreateNode(n);
    if (!pHead)
        pHead = pTail = p;
    else
    {
        pTail->pNext = p;
        pTail = p;
    }
    curN++;
    return p;
}

Node* LinkedList::RemoveHead()
{
    if (!pHead)
        return NULL;
    Node* p = pHead;
    pHead = pHead->pNext;
    curN--;
    return p;
}

Node* LinkedList::RemoveTail()
{
    if (!pHead)
        return NULL;
    Node* p = pTail;
    if (pHead == pTail)
        pHead = pTail = NULL;
    else
    {
        Node* q = pHead;
        while (q->pNext != pTail)
            q = q->pNext;
        pTail = q;
        q->pNext = NULL;
    }
    curN--;
    return p;
}

ostream& operator<<(ostream& os, const LinkedList& ll)
{
    Node* p = ll.pHead;
    while (p)
    {
        os << p->info;
        p = p->pNext;
    }
    return os;
}

const int& LinkedList::operator[](const int& i) const {
    Node* p = pHead;
    int n = 0;
    if (i < 0) n = 0;
    else if (i >= curN) n = curN - 1;
    else n = i;
    for (int j = 0; j < n && p != nullptr; j++) {
        p = p->pNext;
    }
    return p->info;
}