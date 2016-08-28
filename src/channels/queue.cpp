//
//  queue.cpp
//  Channel
//
//  Created by AJIRI OSAUZO on 2016-08-26.
//  Copyright © 2016 AJIRI OSAUZO. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "queue.h"


using namespace std;


Queue::Queue()

{
    id = 0;
    this->lastNode = NULL;
    
}

int Queue::getID()

{
    
    return this->id;
    
}

void Queue::setID(int id)

{
    
    this->id = id;
    
}

void Queue::enter(int packetID)

{
    Node* newNode;
    
    if (lastNode == NULL)
        
    {
        
        lastNode = new Node(packetID, NULL);
        lastNode->setNextNode(lastNode);
        
    }
    
    else
        
    {
        
        newNode = new Node(packetID, lastNode->getNextNode());
        lastNode->setNextNode(newNode);
        lastNode = lastNode->getNextNode();
        
    }
    
    
}

int Queue::leave()

{
    int front = lastNode->getNextNode()->getID();
    
    lastNode->setNextNode(lastNode->getNextNode()->getNextNode());
    
    return front;
    
}

int Queue::front()

{
    Node* front = lastNode->getNextNode();
    
    return front->getID();
    
}

bool Queue::isEmpty()

{
    
    return (lastNode == NULL); 
    
}

void Queue::check()

{
    Node* currentNode = lastNode->getNextNode();
    
    cout << currentNode->getID() << endl;
    currentNode = currentNode->getNextNode();
    
    while (currentNode != lastNode->getNextNode())
        
    {
        cout << currentNode->getID() << endl;
        currentNode = currentNode->getNextNode();
        
    }
    
    
}




