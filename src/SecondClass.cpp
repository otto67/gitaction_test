# include <iostream> 
# include "SecondClass.h"

      
int SecondClass::doStuffSecond(){
    if (!SCWorker){
        return -1;
    }

    myData tmp {10, 20};
    
    this->myFloat = 8;
    
    return SCWorker((void*) & tmp).a;
}

void SecondClass::printData(){
    std::cout<<"I have "<<data.a<<" and "<<data.b<<std::endl;
}
