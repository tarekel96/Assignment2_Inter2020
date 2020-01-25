# include <iostream>
using namespace std;

int main() {

  int a[4][5];

  int const ROWS = 4;

  int const COLS = 5;

  int const ELEMENTS = (ROWS * COLS);

  unsigned int i = 0;

  unsigned int j = 0;

  for(j = 0; j < COLS; ++j){

  int valR = 0;

    for(i = 0; i < ROWS; ++i){

     int valC = 0;

     cout << "Enter an COL integer: " << endl;

     cin >> valC;

     a[valR][valC];

    }


  cout << "Enter an ROW integer: " << endl;

  cin >> valR;


  cout << endl;

  }

  for(j = 0; j < ROWS; ++j){

    for(i = 0; i < COLS; ++i){

     cout << a[j][i];

    }

  cout << endl;

  }

  


 /*

  for(j = 0; j < COLS; ++j) {

   int val = 0;

   cout << "Please enter an integer" << endl;

   cin >> val;

   a[0][j]; 

  }

  for(j = 0; j < COLS; ++j){

   cout << a[0][j];

  } */

  // input five inputs for ROW 1

  // input five inputs for ROW 2

  // input five inputs for ROW 3

  return 0;

}
