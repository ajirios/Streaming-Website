//
//  main.cpp
//  Channel
//
//  Created by AJIRI OSAUZO on 2016-08-26.
//  Copyright © 2016 AJIRI OSAUZO. All rights reserved.
//

#include <iostream>
#include "queue.h"


using namespace std;


int main(int argc, const char * argv[]) {
    
    
    Queue* channeltest = new Queue();
    
    
    channeltest->enter(11);
    channeltest->enter(2);
    channeltest->enter(3);
    channeltest->enter(4);
    channeltest->enter(5);
    channeltest->enter(6);
    channeltest->enter(7);
    channeltest->enter(8);
    channeltest->enter(9);
    channeltest->enter(10);
    channeltest->enter(11);
    channeltest->enter(12);
    channeltest->enter(13);
    channeltest->enter(14);
    channeltest->enter(15);
    channeltest->enter(16);
    channeltest->enter(17);
    channeltest->enter(18);
    
    /*
    cout << channeltest->leave() << endl;
    cout << channeltest->leave() << endl;
    cout << channeltest->leave() << endl;
    cout << channeltest->leave() << endl;
    cout << channeltest->leave() << endl;
    cout << channeltest->leave() << endl;
    cout << channeltest->leave() << endl;
    cout << channeltest->leave() << endl;
    cout << channeltest->leave() << endl;
    cout << channeltest->leave() << endl;
    cout << channeltest->leave() << endl;
    cout << channeltest->leave() << endl;
    */
    
    channeltest->check();
    
    return 0;
}
