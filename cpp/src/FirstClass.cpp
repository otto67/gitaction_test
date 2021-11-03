# include <iostream>
# include <cmath>
# include "FirstClass.h"

void FirstClass::setFCWorker(int (*a)(int, int*)){
    FCWorker = a;
}
       
int FirstClass::doStuffFirst(){
    if (!FCWorker){
        return -1;
    }

    if (myIntPointer != nullptr){
        return FCWorker(myInt, myIntPointer);
    }
    else{
        return FCWorker(myInt, &myInt);
    }
}

int FirstClass::getInt() {
    if (myIntPointer == nullptr)
        return myInt;
    else
        return std::pow(myIntPointer[0] + myIntPointer[1] + myIntPointer[2],myInt);
    }

int FirstDerivedClass::getInt(){
    return myInt + mySecondInt;
    }