//
//  a3_2.cpp
//  a3_2
//
//  Created by Josie Lipkin on 1/23/16.
//  Copyright © 2016 Josie Lipkin. All rights reserved.
//

#include <iostream>
#include <time.h> 

using namespace std;

const int MAT_SIZE = 100;
typedef float* DynMat[MAT_SIZE];
void matShowDyn( const DynMat & matA, int start, int size);
void matMultDyn( const DynMat & matA, const DynMat & matB, DynMat & matC, int size);
int main() {
    
    int r, c;
    clock_t startTime, stopTime;
    float randFrac;
    int randRow, randCol, smallPercent;
    
    //non-sparse dynamic matrix
    DynMat matDyn, matDynAns;
    
    //allocate rows and initialize to 0
    for(r = 0; r < MAT_SIZE; r++)
    {
        //?
        for(c = 0; c < MAT_SIZE; c++)
        {
            //?
        }
    }
    
    //generate small non-default values between .1 and 10
    smallPercent = MAT_SIZE/20. * MAT_SIZE; //div by 20. means 5%
    for( r = 0; r < smallPercent; r++)
    {
        //??
    }
    
    //10 x 10 submatrix in lower right
    matShowDyn(matDyn, MAT_SIZE - 10, 10);
    
    startTime = clock(); //start
    matMultDyn(matDyn, matDyn, matDynAns, MAT_SIZE);
    stopTime = clock(); //stop
    
    matShowDyn(matDynAns, MAT_SIZE - 10, 10);
    cout << "\nSize = " << MAT_SIZE << " Dyn Array Mult Elapsed Time: "
        << (double)(stopTime - startTime)/(double)CLOCKS_PER_SEC
        << " seconds." << endl << endl;
    
    //clean up
    for ( r = 0; r < MAT_SIZE; r++)
        // ??
        
    cout << endl;
    return 0;
}














































