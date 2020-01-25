#include <iostream>
using namespace std;

/* declare zeroBoth function - set it to void to not return a value */
void zeroBoth(int &par1, int &par2);

/* main func required by C++; the zeroBoth() is invoked in this block */
int main() {

    /* declare/init the variables that are passed to zeroBoth - values are init to 5 b/c not 0 */
    int x = 5;
    int y = 5;

    /* invoke zeroBoth with x and y are the arguments */
    zeroBoth(x,y);

    cout << endl;

    return 0;

}

/* zeroBoth is defined below */
/* the & is used to indicate that the arguments passed will be pass by reference */
void zeroBoth(int &par1, int &par2){
    /* sets the value of par1 and par2 to 0 for each */
    par1 = 0;
    par2 = 0;
    /* console logs out the new argument values */
    cout << endl << "First parameter: " << par1 << endl;
    cout << endl << "Second parameter: " << par2 << endl;

}
