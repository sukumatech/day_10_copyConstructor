//
//  cat.h
//  day_10_copyConstructor
//
//  Created by susan on 11/07/14.
//  Copyright (c) 2014 umojaTech. All rights reserved.
//

#ifndef __day_10_copyConstructor__cat__
#define __day_10_copyConstructor__cat__

#include <iostream>

class Cat {
private:
    int *itsAge;
    int *itsWeight;
    
public:
    Cat();               //default constructor
    Cat(const Cat &);   //copy constructor
    ~Cat();
    
    int getAge()const { return *itsAge;}
    int getWeight () const {return *itsWeight;}
    void setAge(int age)    {*itsAge = age;}
};

#endif /* defined(__day_10_copyConstructor__cat__) */
