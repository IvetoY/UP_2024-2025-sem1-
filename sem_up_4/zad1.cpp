#include <iostream>

int main (){
    int n;
    std::cout<<"enter the length of your array"<<std::endl;
    std::cin>>n;
    int array [n];
    for(int i=0;i<n;i++){
        std::cin>>array[i];
    }
    for(int i=n-1;i>=0;i--){
        std::cout<<array[i]<<" ";
    }
    return 0;
}