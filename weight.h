///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  untitled1 - EE 205 - Spr 2022
///
/// @file Weight.h
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   12_Apr_2022
///////////////////////////////////////////////////////////////////////////////

// weight is not the same as mass. In physics weight is a force that mass produces.
// I am going to make it more difficult for myself by trying to distinguish the two.
enum UnitsOfWeight{ POUND, NEWTON }; //Pounds and Newtons are measures of weight
enum UnitsOfMass{ KILOGRAM, SLUG }; //Kilograms and Slugs are measures of mass
extern const float gravitationalAcceleration;

class Weight{
private:




    float currentWeight;

};