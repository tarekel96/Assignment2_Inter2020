#include <iostream>
using namespace std;

/* declare the addTax func - use void b/c do not want to return values */
void addTax(float taxRate, float cost);

int main(){

    /* init rate and preTaxCost vars that are later passed as arguments to addTax */
    float rate = 0.0;
    float preTaxCost = 0.0;

    /* set vars rate and preTaxCost to user inputs */
    cout << "Enter the sales tax percentage (exclude the %): " << endl;

    cin >> rate;

    cout << "Enter the total pre-tax cost: " << endl;

    cin >> preTaxCost;

    cout << endl;

    /* invoke the addTax function with rate and preTaxCost as arguments */
    addTax(rate, preTaxCost);

    cout << endl;

    return 0;
}

/* define addTax function */
void addTax(float taxRate, float cost){ 

    /* init/declare finalCost var */
    float finalCost = 0.0;
    /* divide taxRate parameter by 100 b/c argument is entered as percent */
    taxRate = taxRate / 100;
    /* finalCost is the sum of the tax cost and the original argument value cost */
    finalCost = (taxRate * cost) + cost;

    /* output final cost to user */
    cout <<  "Final Cost After Tax: $" << finalCost << endl;

}