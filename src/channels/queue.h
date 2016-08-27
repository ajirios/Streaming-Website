//
//  queue.h
//  Channel
//
//  Created by AJIRI OSAUZO on 2016-08-26.
//  Copyright © 2016 AJIRI OSAUZO. All rights reserved.
//

#ifndef queue_h
#define queue_h
#include "node.h"


class Node;


class Queue

{
private:
    int id;
    Node* lastNode;
    
public:
    Queue();
    
    int getID();
    
    void setID(int id);
    
    void enter(int packetID);
    
    int leave();
    
    int front();
    
    bool isEmpty();
    
    void check();
    
    
};




#endif /* queue_h */
