#include <iostream>
#include <sofa.h>

typedef long double ld;

double deg_to_rad(int deg,int min, int sec)
{
    /**
     * Convert degrees, arcminutes, arcseconds to radians.
     */
    double rad = 0;
    iauAf2a('+', deg, min, sec, &rad);
    return rad;
}

double radDeg(double radian){
    double pi = 3.14159;
    return(radian * (180/pi));
}

int main()
{
    /**
     * CIRS →ICRS
     *
     * Let CIRS be
     *
     * <SkyCoord (CIRS: obstime=J2000.000): (ra, dec) in deg
        (10.62627128, 41.20167831)>
     */
    double ra = 0.185441233;
    double dec = 0.7190757;

    //23 April 2020
    double date1 = 2400000.5;
    double date2 = 58962;

    double rc = -1;
    double dc = -1;
    double eo = -1;

    double pi = 3.14159;

    iauAtic13(ra,dec,date1,date2,&rc,&dc,&eo);

    std::cout << "rc: " << rc*(180/pi) <<" dc: " << dc*(180/pi) << " eo: " << eo << std::endl;

    /**
     * Astropy Output
     * <SkyCoord (ICRS): (ra, dec) in deg
    (10.625, 41.20000276)>
     *
     * BoostC++ Output
     * rc: 10.6134 dc: 41.0938
     */


//    int iy = 2020;
//    int im = 4;
//    int id = 23;
//    double djm0 = 0;
//    double djm = 0;
//
//    iauCal2jd(iy, im, id, &djm0, &djm);
//
//    std::cout << djm0 << " " << djm;

}