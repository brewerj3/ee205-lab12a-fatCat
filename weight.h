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

#define FORMAT( className, member ) std::cout << std::setw(8) << (className) << std::setw(20) << (member) << std::setw(52)


class Weight{
public:
    enum UnitOfWeight{ POUND, SLUG, KILOGRAM }; //Pounds and Newtons are measures of force, Kilogram is a measure of Mass

    static const float KILOGRAMS_IN_A_SLUG;
    static const float POUNDS_IN_A_KILOGRAM;
    static const float UNKNOWN_WEIGHT;

    static const std::string POUND_LABEL;
    static const std::string SLUG_LABEL;
    static const std::string KILOGRAM_LABEL;

    //Conversion methods
    static float fromSlugToKilogram( float slug ) noexcept;
    static float fromKilogramToSlug( float kilogram ) noexcept;
    static float fromKilogramToPound( float kilogram ) noexcept;
    static float fromPoundToKilogram( float pound ) noexcept;

    //Convert between unit types
    static float convertWeight( float fromWeight, UnitOfWeight fromUnit, UnitOfWeight toUnit ) noexcept;

    //getters
    float getWeight() const noexcept;
    float getWeight( UnitOfWeight weightUnit );
    float getMaxWeight() const noexcept;
    UnitOfWeight getWeightUnit() const noexcept;

    //setters
    void setWeight( float newWeight );
    void setWeight( float newWeight, UnitOfWeight newUnit );

    //bools
    bool isWeightKnown() const noexcept;
    bool hasMaxWeight() const noexcept;
    bool isWeightValid( float weightToValidate );
    bool validate() const noexcept;

    //Print out from Class
    void dump() const noexcept;

    //Constructors
    Weight() noexcept;
    Weight( float newWeight );
    Weight( UnitOfWeight newUnitOfWeight ) noexcept;
    Weight( float newWeight, UnitOfWeight newUnitOfWeight );
    Weight( float newWeight, float newMaxWeight );
    Weight( UnitOfWeight newUnitOfWeight, float newMaxWeight );
    Weight( float newWeight, UnitOfWeight newUnitOfWeight, float newMaxWeight );

    //Operators
    bool operator==(const Weight& rhs_Weight ) const ;

private:
    UnitOfWeight unitOfWeight = POUND;
    float weight = UNKNOWN_WEIGHT;
    float maximumWeight;
    bool bWeightHasMax = false;
    bool bWeightIsKnown = false;
};

std::ostream& operator<<( std::ostream& lhs_stream, Weight::UnitOfWeight rhs_UnitOfWeight );