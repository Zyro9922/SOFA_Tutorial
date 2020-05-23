#include <iostream>
#include <sofa.h>
#include "helper.hpp"

using namespace helper;

int main()
{
    /**
     * Equatorial to Horizon Coordinate System
     *
     * Instead of using the terms longitude and latitude,
     * the equatorial coordinate system uses declination (δ)
     * and right ascension (α).
     */

    double pi = 3.141592;

    double ha = 16.49583 * 15 * (pi/180);
    double dec = -0.5083333 * (pi/180);
    double phi = 25 * (pi/180);

    double az = -1;
    double el = -1;

    iauHd2ae( ha, dec, phi, &az, &el );

    az = az * (180/pi);
    el = el * (180/pi);

    std::cout << az << " " << el << std::endl;

    DMS(az);
    DMS(el);

    /**
     * Examples
     *
     * Example 1
     *
     * Input
     * Hour Angle H (in HMS): 5 51 44 = (5.862222 hour)
     * We multiply Hour angle by 15 to convert to degree.
     * Declination δ (in DMS): 23 13 10 = (23.21944 degree)
     * Observer’s Geographical Latitude φ (in degrees): 52
     *
     * Output
     * 283◦ 16' 15.8431''
     * 19◦ 20' 3.66969''
     *
     * Verified from (Practical_Astronomy_with_your_Calculator_or_Spreadsheet_4th_edition_by_Peter_Duffett-Smith_Jonathan_Zwart Page 47)
     *
     * Example 2
     *
     * Input
     * Hour Angle H (in HMS): 16 29 45 = (16.49583 degrees)
     * Declination δ (in DMS): -0 30 30 = (-0.5083333 degrees)
     * Observer’s Geographical Latitude φ (in degrees): 25
     *
     * Output
     * 80◦ 31' 31.3057'' = 80.5254
     * -21◦ 25' 19.7998'' = -20.5778
     *
     * Expected Output
     * A = 80.525393, H = −20.577738
     *
     * Error = 8.6929100870683E-6% (Which is negligible. This is because we are using SOFA certified algorithm)
     *
     * Verified from (lawrence_j_l_celestial_calculations_a_gentle_introduction_to Page 90)
     */

    //Hello
    //Hi
    //Hey

}