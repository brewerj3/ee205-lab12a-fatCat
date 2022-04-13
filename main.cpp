///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  untitled1 - EE 205 - Spr 2022
///
/// @file main.cpp
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   12_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

#include "weight.h"

int main() {
    Weight weightObjectOne;
    Weight weightObjectTwo( 10 );
    Weight weightObjectThree( Weight::KILOGRAM );
    Weight weightObjectFour( 4, Weight::KILOGRAM );
    Weight weightObjectFive( 1.1, 100 );
    Weight weightObjectSix( Weight::SLUG, 10 );
    Weight weightObjectSeven(3.2, Weight::KILOGRAM, 50 );

    weightObjectOne.dump();
    weightObjectTwo.dump();
    weightObjectThree.dump();
    weightObjectFour.dump();
    weightObjectFive.dump();
    weightObjectSix.dump();
    weightObjectSeven.dump();
    return 0;
}
