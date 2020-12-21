#include <bits/stdc++.h>

bool detectLoop(Node *head)
{
    Node *first = head;
    Node *second = head;
    
    while (first->next && first->next->next){
    first = first->next->next;
    second = second->next;
    if(second == first){
        return 1;
    }
    
    
    }
    return 0;
}