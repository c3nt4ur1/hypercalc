//Copyright [2021] [c3nt4ur1]

#include <iostream>
using namespace std;

int main() {
    //Main function will only be used for testing the functions

    return 0;
}

double first_deg_equation(string source){
    string side1;
    string side2;

    int i = 0;
    int* pI = &i;
    /*
     * Breaks the equation into two sides
     */
    for(; source[i] != '='; *pI++){
        side1 += source[i];
    }

    i++;

    for(; source[i]; *pI++){
        side2 += source[i];
    }
}