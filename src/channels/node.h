//
//  node.h
//  Channel
//
//  Created by AJIRI OSAUZO on 2016-08-26.
//  Copyright © 2016 AJIRI OSAUZO. All rights reserved.
//

#ifndef node_h
#define node_h



class Node

{
private:
    int id;
    Node* nextNode;
    
public:
    Node(int id, Node* nextNode);
    
    Node* getNextNode();
    
    void setNextNode(Node* newNode);
    
    int getID();
    
    void setID(int id);
    
};





#endif /* node_h */
