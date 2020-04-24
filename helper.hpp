//
// Created by Ali Hasan on 25/04/20.
//

#ifndef LAUNCH_HELPER_HPP
#define LAUNCH_HELPER_HPP

#include <iostream>
#include <cmath>

namespace helper
{
    void DMS(double value)
    {
        double degrees;
        double minutes;
        double seconds;

        degrees = std::floor(value);
        double rem = (value-degrees) * 60;
        minutes = std::floor(rem);
        seconds = (rem-minutes) * 60;
        std::cout<<degrees<<"◦ "<<minutes<<"' "<<seconds<<"''"<<std::endl;
    }

}

#endif //LAUNCH_HELPER_HPP
