# include <iostream>
# include <cmath>
# include "FirstClass.h"

void FirstClass::setFCWorker(int (*a)(int, int*)){
    FCWorker = a;
}
       
int FirstClass::doStuffFirst(){
    if (!FCWorker){
        std::cout<<"No worker provided \n";
        return -1;
    }

    if (myIntPointer != nullptr){
        std::cout<<"Memory allocated \n";
        return FCWorker(myInt, myIntPointer);
    }
    else{
        std::cout<<"No memory allocated; \n";
        return FCWorker(myInt, &myInt);
    }
}

int FirstClass::getInt() {
    if (myIntPointer == nullptr)
        return myInt;
    else
        return std::pow(myIntPointer[0]*myIntPointer[1]*myIntPointer[2],myInt);
    }

int FirstDerivedClass::getInt(){return myInt + mySecondInt;}