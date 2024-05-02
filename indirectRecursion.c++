//when multiple functions are calling
//one another in a circular fashion

//first fun calls the second and the second calls 
//the third and the tird calls the first
//then it becomes recursion

#include <iostream>

void funB(int n);

void funA(int n)
{
    if(n>0)
    {
        std::cout << n << " " ;
        funB(n-1);
    }
}

void funB(int n){
    if(n>1)
    {
        std::cout << n << " ";
        funA(n/2);
    }
}

int main()
{
    funA(20);
    return 0;
}