# include <iostream>
# include <vector>
using namespace std;

int main() {

    /* max number of elements for vector */
    const int MAX_NUM = 10;

    /* declare vector using max var to assign size of vector; the unsigned ensures no negative int will be an element of the vector  */
    vector<unsigned int> array1(MAX_NUM);

    /* declare/initialize i the iterating variable for both loops  */
    unsigned int i = 0;

    /* loop that assigns user int input for each vector element */
    for(i = 0; i < MAX_NUM; ++i) {

        cout << "Enter a pos integer: " << endl;

        cin >> array1.at(i);     
        
    }

    /* loop that prints out each element of the vector followed by a space */
    for(i = 0; i < MAX_NUM; ++i) {

        cout << array1.at(i) << " ";

    }

    cout << endl;

    return 0;

}



