# include <iostream> 
# include "SecondClass.h"

      
int SecondClass::doStuffSecond(){
    if (!SCWorker){
        std::cout<<"No worker provided \n";
        return -1;
    }

    myData tmp {10, 20};
    
    return SCWorker((void*) & tmp).a;

}

void SecondClass::printData(){
    std::cout<<"I have "<<data.a<<" and "<<data.b<<std::endl;
}
