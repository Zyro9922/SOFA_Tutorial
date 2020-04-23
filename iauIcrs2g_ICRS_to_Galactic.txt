#include <iostream>
#include <sofa.h>

int main()
{
    /**
     * iauIcrs2g
     * Transformation from ICRS to Galactic Coordinates.
     */

    /**
     * Example from AstroPy docs
     * Page 279
     * >>> c_icrs = SkyCoord(ra=10.68458*u.degree, dec=41.26917*u.degree, frame='icrs')
       >>> c_icrs.galactic
       <SkyCoord (Galactic): (l, b) in deg
       (121.174241811, -21.5728855724)>
     */
    double pi = 3.141592;
    double icrs_ra = 10.68458 * (pi/180); //ICRS right ascension (radians)
    double icrs_dec = 41.26917 * (pi/180); //ICRS declination (radians)

    double dl = -1; //galactic longitude (radians)
    double db = -1; //galactic latitude (radians)

    iauIcrs2g(icrs_ra,icrs_dec,&dl,&db);

    std::cout << dl * (180/pi)  << " " << db * (180/pi);

    /**
     * BoostC++ Output
     * 121.174 -21.5729
     */
}