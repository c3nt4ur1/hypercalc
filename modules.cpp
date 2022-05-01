//
// Created by Adriano on 01/05/2022.
//

#include "modules.h"

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