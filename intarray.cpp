# include <iostream>
# include <vector>
using namespace std;

int main() {

    /* var representing the size of the array */
    const int SIZE = 10;

    /* numberArray declaration; use unsigned to ensure no negative integers are logged to the console */
    int unsigned numberArray[SIZE];

    /* declare/initialize the iterating variable used in both for loops */
    unsigned int i = 0;

    /* for loop that assigns a pos integer value from the user for each index of the array */
    for(i = 0; i < SIZE; ++i) {

            cout << "Enter a positive integer: " << endl;

            cin >> numberArray[i];
    
        }

    /* for loop that loops through the nunberArray to console out each of its elements followed by a single space */
    for(i = 0; i < SIZE; ++i) {

        cout << numberArray[i] << " ";

    }

    /* added a line break for better readability of the numberArray elements */
    cout << endl;

    return 0; 

}



