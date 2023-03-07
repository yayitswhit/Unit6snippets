#include <iostream>
#include <cstdlib>
using namespace std;

// function prototype for function defined below main
// the parameters declared in the prototype are the formal parameters
int add(int x, int y);
int subtract(int x, int y);

int main()
{
    int var1 = 0;
    int var2 = 1;
    
    //call the `add` function and provide the arguments (actual parameters)
    int sum = add(var1, var2);
    cout << sum << endl;

    return 0;
}

// `x` and `y` are the formal parameters for the `add` function
int add(int x, int y)
{
    return (x + y);
}

int subtract(int x, int y) {
    return (x - y);
}
