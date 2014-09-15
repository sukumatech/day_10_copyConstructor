//
//  cat.cpp
//  day_10_copyConstructor
//
//  Created by susan on 11/07/14.
//  Copyright (c) 2014 umojaTech. All rights reserved.
//

#include "cat.h"
using namespace std;

Cat::Cat()
{
    itsAge = new int;
    itsWeight = new int;
    *itsAge = 5;
    *itsWeight = 10;
    
}

Cat::Cat(const Cat & rhs)
{
    itsAge = new int;
    itsWeight = new int;
    *itsAge = rhs.getAge();
    *itsWeight = *(rhs.itsWeight);

}
Cat::~Cat()
{
    delete itsAge;
    itsAge = NULL;
    delete itsWeight;
    itsWeight = NULL;
}