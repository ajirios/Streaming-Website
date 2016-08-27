//
//  node.cpp
//  Channel
//
//  Created by AJIRI OSAUZO on 2016-08-26.
//  Copyright © 2016 AJIRI OSAUZO. All rights reserved.
//

#include <stdio.h>
#include "node.h"




Node::Node(int id, Node* nextNode)

{
    
    this->id = id;
    
    this->nextNode = nextNode;
    
}

Node* Node::getNextNode()

{
    
    return this->nextNode;
    
}

void Node::setNextNode(Node* newNode)

{
    
    this->nextNode = newNode;
    
}

int Node::getID()

{
    
    return this->id;
    
}

void Node::setID(int id)

{
    
    this->id = id;
    
}


