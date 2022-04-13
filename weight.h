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
    enum UnitOfWeight{ POUND, SLUG, KILOGRAM }; //Pounds and Newtons are measures of force, Kilogram is a measure of Mass

    static const float KILOGRAMS_IN_A_SLUG;
    static const float POUNDS_IN_A_KILOGRAM;
    static const float POUNDS_IN_A_SLUG;

    static float fromSlugToKilogram( float slug ) noexcept;
    static float fromSlugToPound( float slug ) noexcept;

    static float fromKilogramToSlug( float kilogram ) noexcept;
    static float fromKilogramToPound( float kilogram ) noexcept;

    static float fromPoundToKilogram( float pound ) noexcept;
    static float fromPoundToSlug( float pound ) noexcept;



    float currentWeight;
    UnitOfWeight currentUnit;
public:

    static float convertWeight( float fromWeight, UnitOfWeight fromUnit, UnitOfWeight toUnit ) noexcept;

};