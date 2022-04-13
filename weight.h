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






class Weight{
private:
    // weight is not the same as mass. In physics weight is a force that mass produces.
    // I am going to make it more difficult for myself by trying to distinguish the two.
    enum UnitsOfWeight{ POUND, NEWTON }; //Pounds and Newtons are measures of weight
    enum UnitsOfMass{ KILOGRAM, SLUG }; //Kilograms and Slugs are measures of mass
    static const float GRAVITATIONAL_ACCELERATION;

    static const float KILOGRAMS_IN_A_SLUG;
    static const float NEWTONS_IN_A_POUND;

    static float fromSlugToKilogram( float slug ) noexcept;
    static float fromKilogramToSlug( float kilogram ) noexcept;
    static float fromPoundToNewton( float pound ) noexcept;
    static float fromNewtonToPound( float newton ) noexcept;

    float currentWeight;

};