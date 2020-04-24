#include <iostream>
#include <sofa.h>

int main()
{
    //23 April 2020
    double date1 = 2400000.5;
    double date2 = 58962;

    int iy = 2020;
    int im = 4;
    int id = 23;
    double djm0 = 0;
    double djm = 0;

    iauCal2jd(iy, im, id, &djm0, &djm);

    std::cout << djm0 << " " << djm;

    /**
     * Output
     * 2.4e+06 58962
     */

}