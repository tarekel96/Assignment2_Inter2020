#include <iostream>
using namespace std;

void getInput(float *ftL, float *inchesL);

void convertFtToCent(float *ftL);

void convertInchesToCent(float *inchesL);

int main() {

    float ft = 0;

    float inc = 0.0;

    float combinedInc = 0.0;

    cout << "Please enter your height in feet (do not include): " << endl;

    cin >> ft;

    cout << "Please enter the remaining inches (do not include feet): " << endl;

    cin >> inc;

    getInput(&ft, &inc);

    cout << "You have entered " << ft << "ft. " << inc << " inches." << endl;

    convertFtToCent(&ft);

    convertInchesToCent(&inc);

    combinedInc = ft + inc;

    cout << combinedInc << "cm. " << endl;

    cout << "Program Complete. Goodbye" << endl;

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
