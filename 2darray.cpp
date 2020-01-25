# include <iostream>
using namespace std;

int main() {

    unsigned int i = 0;

    unsigned int j = 0;

    int const ROWS = 4;

    int const COLS = 5;

    int const ELEMENTS = (ROWS * COLS);

         /* 4     5  */
    int a[ROWS][COLS] = {
                    {2,2,2,2,2},
                    {1,1,1,1,1},
                    {5,5,5,5,5},
                    {4,4,4,4,4}
                };

    for(i=0; i < ROWS; ++i){

       for(j=0; j < COLS; ++j){

            cout << a[i][j] << endl;

       }

    }

    

    

    //      cout << "Enter an COL integer: " << endl;


    

    return 0;

}
