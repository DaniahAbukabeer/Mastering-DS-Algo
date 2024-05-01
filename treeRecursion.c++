#include <iostream>

void fun(int n){
    if(n>0)
    {
        std::cout << n;
        fun(n-1);
        fun(n-1);
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    fun(3);
    return 0;
}