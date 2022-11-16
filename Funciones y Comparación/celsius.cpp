#include <iostream>
#include <cassert>
#include <iomanip>

// AreNear: R3 -> Bool / AreNear (x,y,z) = {V si |X - Y| =< Z }
                                        // {F Sino		   }

bool AreNear(double, double, double = 0.001);

// Celsius: R->R / Celsius(f)=5/9(f-32)

double celsius (double);



int main(){

    std::cout << std::setprecision(123);

    //AreNear
      assert ( AreNear (32, 32, 0));
      assert ( AreNear (5.1, 5.2, 0.11 ));
      assert (AreNear (-4, -4.1, 0.11 ) );
      assert ( not AreNear (5.1, 5.2, 0.09 ));
      assert ( not AreNear (-7.1, -7.2, 0.09 ));
     



    //celsius
      assert ( celsius (32)  == 0);
      assert ( -15.001 < celsius (5) and celsius(5) < -14.999);
      assert ( 4.999 < celsius (41) and celsius(41) < 5.001 );
      assert ( -0.6 < celsius (31)  and  celsius (31) < -0.5);
      assert (0.5 < celsius (33) and celsius (33) < 0.6);
   

      assert ( AreNear (celsius (5), -15, 0.000001));
      assert ( AreNear (celsius (5), -15, 0));
      assert ( celsius (5) == -15);
      assert ( AreNear (celsius (32), 0));
 }

 //double celsius ( double f) {return (f-32)*5.0/9.0;}
  double celsius ( double f) {return ((f*5)-160)/9;}

  bool AreNear (double a, double b, double c ) {return (a + c >= b) and (a - c) <= b;}
