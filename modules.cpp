//
// Created by Adriano on 01/05/2022.
//

#include "modules.h"

float first_deg_equation(string source) {
    string side1;
    string side2;

    int i = 0;

    /*
     * Breaks the equation into two sides
     */
    for (; source[i] != 0x3d; i++) { //0x3d is the = sign
        side1 += source[i];
    }

    i++; //Skips the equals sign

    for (; source[i]; i++) {
        side2 += source[i];
    }
    /*
     * Equation in divided into two sides from this point -> THIS FIRST PART IS WORKING PROPERLY
     */
    float timesOfX = 0;
    float numericalPart = 0;

    /*
     * Separates the multipliers of X and the numerical values for side1
     */


    /*
     * Redo all this part. It was only prepared to receive coefficients [-9;9]
     */
}