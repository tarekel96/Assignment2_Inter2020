# include <iostream>
using namespace std;

int main() {

    /* declare/initialize the iterating variables in the loops */
    unsigned int i = 0;
    unsigned int j = 0;
    unsigned int k = 0;

    /* made the rows and cols variables to make the app dynamic/customizable with the 2d array */
    int const ROWS = 4;
    int const COLS = 5;

    /* declare/initialize the element var that is used to switch array elements with user desired elements */
    int element = 0;

    /* declare/initialize the 2d array */
         /* 4     5  */
    int a[ROWS][COLS] = {
                
                    {2,2,2,2,2},
                    {1,1,1,1,1},
                    {5,5,5,5,5},
                    {4,4,4,4,4}
                };


    /* code block that is a sequence of nested for loops - responsible for replacing inti element val with user input val */

    /* 1st for loop - iterates up to the length of rows b/c compiler reads source code left to right */
    for(i=0; i < ROWS; ++i){

    /* 2nd for loop - iterates once to cout a return space and indicate to the user the next row is to be filled out */
     for(k=0; k < 1; ++k){

       /* 3rd for loop - iterates up to the length of cols b/c compiler will read the next row but the row is col size long */
       for(j=0; j < COLS; ++j){

            /* re-initialize element var at the beg of each loop */
            element = 0;

            cout << "Enter an Integer: " << endl;

            cin >> element;

            /* line of code responsible for replacing init element val with the user inputted val */
            a[i][j] = element;
          
            }

       cout << endl;
       cout << "Next: " << endl;

        }
        
    } 




    /* code block handles outputting the rows and columns nicely into a table */
    /* same nested for loop sequence here as above but the only purpose this time is output the 2d array */
    for(i=0; i < ROWS; ++i){

     for(k=0; k < 1; ++k){

       for(j=0; j < COLS; ++j){

            cout << a[i][j];
          
            }

       cout << endl;
        }
        
    }

    cout << endl;   

    return 0;

}
