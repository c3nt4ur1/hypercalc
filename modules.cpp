//
// Created by Adriano on 01/05/2022.
//

#include "modules.h"

template<typename T>
T first_deg_equation(string source){
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

    i++; //Skips the equals sign

    for(; source[i]; *pI++){
        side2 += source[i];
    }
    /*
     * Equation in divided into two sides from this point
     */
    T timesOfX = 0;
    T numericalPart = 0;

    /*
     * Separates the multipliers of X and the numerical values for side1
     */

    for(int j = 0; side1[j]; j++){
        if(side1[j] == 'x' || side1[j] == 'X'){
            if(side1[j-1] == '-' ){
                timesOfX --;
            }else if(side1[j-2] == '-'){
                timesOfX -= side1[j-1];
            }else if(side1[j-1] == '+'){
                timesOfX++;
            }else if(side1[j-2] == '+'){
                timesOfX += side1[j-1];
            }
        }else if(isdigit(side1[j])){
            int h = 0;
            for(; isdigit(side1[j-h]); h++);
            string szNum;
            int g = h;
            for(; h; h--){
                szNum += side1[j-h];
            }
            if(side1[j-g-1] == '+') {
                numericalPart -= stoi(szNum);
            }else if(side1[j-g-1] == '-'){
                numericalPart += stoi(szNum);
            }
        }else{
            continue;
        }
    }

    /*
    * Separates the multipliers of X and the numerical values for side2
    */
    for(int j = 0; side2[j]; j++){
        if(side2[j] == 'x' || side2[j] == 'X'){
            if(side2[j-1] == '-'){
                timesOfX ++;
            }else if(side2[j-1] == '+'){
                timesOfX --;
            }else if(side2[j-2] == '-'){
                timesOfX += side2[j-1];
            }else if(side2[j-2] == '+'){
                timesOfX -= side2[j-1];
            }
        }else if(isdigit(side2[j])){
            if(side2[j-1] == '+'){
                numericalPart--;
            }else if(side2[j-2] == '+'){
                numericalPart -= side2[j-1];
            }else if(side2[j-1] == '-'){
                numericalPart++;
            }else if(side2[j-2] == '-'){
                numericalPart += side2[j-1];
            }
        }else{
            continue;
        }
    }
    return numericalPart/timesOfX;
}