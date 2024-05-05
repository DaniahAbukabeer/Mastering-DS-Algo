//nested recursion is when a functions parameter
//is a call for the same function,
//so the fucntion call wouldnt be complete
//unless the parameter call is done

#include <iostream>

int fun(int n){

    if(n>100)
    return n-10;
    return fun(fun(n+11));
}


int main(){
    int r;
    r = fun(99);
    printf("%d\n",r);

    return 0;
}