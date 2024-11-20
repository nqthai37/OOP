#include "LinkedList.h"

LinkedList::LinkedList(void)
{
    pHead = pTail = nullptr;
    curN = 0;
}

LinkedList::~LinkedList(void)
{
    while (pHead)
    {
        Node* p = pHead;
        pHead = pHead->pNext;
        delete p;
    }
}

Node* LinkedList::CreateNode(const int& n)
{
    Node* p = new Node;
    p->info = n;
    p->pNext = nullptr;
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
        return nullptr;
    Node* p = pHead;
    pHead = pHead->pNext;
    curN--;
    return p;
}

Node* LinkedList::RemoveTail()
{
    if (!pHead)
        return nullptr;
    Node* p = pTail;
    if (pHead == pTail)
        pHead = pTail = nullptr;
    else
    {
        Node* q = pHead;
        while (q->pNext != pTail)
            q = q->pNext;
        pTail = q;
        q->pNext = nullptr;
    }
    curN--;
    return p;
}

ostream& operator<<(ostream& os, const LinkedList& ll)
{
    Node* p = ll.pHead;
    while (p)
    {
        os << p->info << " ";
        p = p->pNext;
    }
    return os;
}

int& LinkedList::operator[](const int& i)
{
    if (i < 0) return pHead->info;
    if (i >= curN) return pTail->info;
    Node* p = pHead;
    for (int j = 0; j < i; j++)
        p = p->pNext;
    return p->info;
}