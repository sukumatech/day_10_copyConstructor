//
//  main.cpp
//  day_10_copyConstructor
//
//  Created by susan on 11/07/14.
//  Copyright (c) 2014 umojaTech. All rights reserved.
//

#include "cat.h"
#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{

    Cat ted;
    cout << "teds age:" << ted.getAge() << endl;
    cout << "set age to 6: " ;
    ted.setAge(6);
    
    cout<< "creat boots from ted" <<endl;
    Cat boots(ted);
    cout << "teds age:" << ted.getAge() << endl;
    cout << "boots age:" << boots.getAge() << endl;
    boots.setAge(7);
    cout << "new boots age:" << boots.getAge() << endl;
    cout << "new teds age:" << ted.getAge() << endl;
    
}

