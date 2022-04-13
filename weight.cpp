///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  untitled1 - EE 205 - Spr 2022
///
/// @file Weight.cpp
/// @version 1.0
///
/// @author Joshua Brewer <brewerj3@hawaii.edu>
/// @date   12_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

#include "weight.h"

const float Weight::KILOGRAMS_IN_A_SLUG = 14.59390 ;
const float Weight::POUNDS_IN_A_KILOGRAM = 2.20462 ;
const float Weight::UNKNOWN_WEIGHT = -1;

float Weight::fromSlugToKilogram(float slug) noexcept {
    return slug * KILOGRAMS_IN_A_SLUG;
}

float Weight::fromKilogramToSlug(float kilogram) noexcept {
    return kilogram / KILOGRAMS_IN_A_SLUG;
}

float Weight::fromKilogramToPound(float kilogram) noexcept {
    return kilogram / POUNDS_IN_A_KILOGRAM;
}

float Weight::fromPoundToKilogram(float pound) noexcept {
    return pound * POUNDS_IN_A_KILOGRAM;
}

float Weight::convertWeight(float fromWeight, Weight::UnitOfWeight fromUnit, Weight::UnitOfWeight toUnit) noexcept {
    float commonWeight;
    switch ( fromUnit ) {
        case KILOGRAM   : commonWeight = fromWeight;
        break;
        case SLUG       : commonWeight = fromSlugToKilogram( fromWeight );
        break;
        case POUND      : commonWeight = fromPoundToKilogram( fromWeight );
        break;
    }
    float toWeight;
    switch ( toUnit ) {
        case KILOGRAM   : toWeight = commonWeight;
        break;
        case SLUG       : toWeight = fromKilogramToSlug( commonWeight );
        break;
        case POUND      : toWeight = fromKilogramToPound( commonWeight );
        break;
    }
    return toWeight;
}

float Weight::getWeight() const noexcept {
    return weight;
}

float Weight::getWeight(Weight::UnitOfWeight weightUnit) {
    return convertWeight(getWeight(), getWeightUnit(), weightUnit );
}

float Weight::getMaxWeight() const noexcept {
    return maximumWeight;
}

Weight::UnitOfWeight Weight::getWeightUnit() const noexcept {
    return unitOfWeight;
}

void Weight::setWeight(float newWeight) {
    //@TODO add validation later
    weight = newWeight;

}

void Weight::setWeight(float newWeight, Weight::UnitOfWeight newUnit) {
    if( !isWeightValid( newWeight ) ){
        std::cout << "Invalid Weight when trying to set weight" << std::endl;
        return;
    }
    weight = newWeight;
    unitOfWeight = newUnit;
}

bool Weight::isWeightKnown() const noexcept {
    return bWeightIsKnown;
}

bool Weight::hasMaxWeight() const noexcept {
    return bWeightHasMax;
}

bool Weight::isWeightValid(float weightToValidate) {
    if( hasMaxWeight() && (weightToValidate >= maximumWeight ) ) {
        return false;
    }
    if( weightToValidate <= 0 ) {
        return false;
    }
    return true;
}

bool Weight::validate() const noexcept {
    return true; //@TODO Make this acutally useful
}

