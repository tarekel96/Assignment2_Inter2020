#include <iostream>
#include <string>
using namespace std;

/* declare/init var - determines termination of while loop */
string cont = "yes";
/* declare/init helper functions - use pointer to ensure the correct values are passed in main function */
void getInput(float *ftL, float *inchesL);
void convertFtToCent(float *ftL);
void convertInchesToCent(float *inchesL);
void convertCentToMet(float *cmL);

int main() {

    /* program terminates if user enters exit */
    while(cont != "exit") {

    /* declare/init vars - ft and inc represent ft and inc from user input */
    float ft = 0;
    float inc = 0.0;
    /* combinedInc - combines cm of the converted ft and converted inc */
    float combinedInc = 0.0;

    cout << endl << "Please enter your height in feet (do not include inches): " << endl;

    cin >> ft;

    cout << "Please enter the remaining inches (do not include feet): " << endl;

    cin >> inc;
   
    /* invoke getInput - use pass by reference to ensure correct value is used in calculation */
    getInput(&ft, &inc);

    cout << endl << "You have entered " << ft << "ft." << inc << "inches." << endl;

    cout << "Converted Values: " << endl;
    
    /* invoke convertFtToCent - use pass by reference to ensure correct value is used in calculation */
    convertFtToCent(&ft);

    /* invoke convertInchesToCent - use pass by reference to ensure correct value is used in calculation */
    convertInchesToCent(&inc);

    combinedInc = ft + inc;

    cout << combinedInc << "cm. " << endl;

    /* invoke convertCentToMet - use pass by reference to ensure correct value is used in calculation */
    convertCentToMet(&combinedInc);

    cout << combinedInc << "m. " << endl;

    cout << endl << "Would you like to convert another user (enter exit if no)? " << endl;

    cin >> cont;

    }

    cout << "Program Terminated. Goodbye." << endl;

    return 0;
}

void getInput(float *ftL, float *inchesL) { 

}

void convertFtToCent(float *ftL){    
    /* 30.48cm in one foot */
    *ftL = *ftL * 30.48;
    return;
}

void convertInchesToCent(float *inchesL){   
    /* 2.54cm in one inch */
    *inchesL = *inchesL * 2.54;
    return;
}

void convertCentToMet(float *cmL){   
    /* 2.54cm in one inch */
    *cmL = *cmL / 100;
    return;
}
