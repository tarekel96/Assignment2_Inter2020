#include <iostream>
using namespace std;

void getInput(int *ftL, float *inchesL);

int main() {

    int ft = 0;

    float inc = 0.0;

    cout << "Please enter your height in feet (do not include): " << endl;

    cin >> ft;

    cout << "Please enter the remaining inches (do not include feet): " << endl;

    cin >> inc;

    getInput(&ft, &inc);

    cout << "You have entered " << ft << "ft. " << inc << " inches." << endl;

    cout << "Program Complete. Goodbye" << endl;

    return 0;
}

void getInput(int *ftL, float *inchesL) { 

   /* cout <<  ftL << " ft " << inchesL << " inches " << endl; */

}


/*
void getInput(int ftL, float inchesL, int *ftLR, float *inchesLR) {

    cout <<  ftL << " ft " << inchesL << " inches " << endl;

        *ftLR = ftL;

        *inchesLR = inchesL;


}
*/