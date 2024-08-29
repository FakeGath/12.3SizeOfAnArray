//library that allows all basic commands in c++
#include <iostream>

int main(){

    int scores [] {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

    std::cout<<"The size of the array is: "<<std::size(scores)<<std::endl;


    for(size_t i{0}; i<std::size(scores);++i){
        std::cout<<"Score "<<i<<": "<<scores[i]<<std::endl;
    }
    

    return 0;
}