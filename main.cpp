#include <iostream>
#include <vector>
//void printvalue(int value){
//    std::cout<<"values :"<<value<<std::endl;
//}
//
//void foreach(const std::vector<int>& values, void (*func)(int) ){
//    for(int value : values)
//      func(value); 
//}
//
//
//int main(){
//    std::vector<int> values ={1,2,3,6,9};
//    foreach(values, printvalue);
//    
//    std::cin.get();
//}

void printname(){
    std::cout<<"name:"<<std::endl;
}

int main(){
    auto func = printname;
    func();
//    
//    void(*func)()=printname;
//    func();
    return 0;
    std::cin.get();
}