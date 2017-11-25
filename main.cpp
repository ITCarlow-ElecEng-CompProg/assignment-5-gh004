/** Gearoid Hanrahan
 *
 * Lab 5
 * Least squares of linear regression
 *
 *
 */


#include <iostream>

using namespace std;

int main()
{
    /** Variable for calculations being carried out */
    double Xvalue[100]={0};
    double Yvalue[100]={0};
    double Sum_m=0;
    double SumX=0;
    double SumY=0;
    double SumXY=0;
    double SumXSq=0;
    double Sumx2=0;
    double AvgX=0;
    double AvgY=0;
    double Sumc=0;
    double mbot=0;
    double mtop=0;
    double c;
    int n, i;

    do /** do while loop*/
    {
        cout << "Enter a value for n: ";
        cin>> n ;
    }
    while ((n <= 0 ) || (n > 100));

    cout<< "Enter coordinate for x,y :\n";

    for (i = 0 ; i < n ; i++ ) /** For Loop*/
    {
        cout<< "Enter coOrdinates for X and Y values:";
        cin >> Xvalue[i] >> Yvalue [i] ;
    }

    for (i = 0 ; i < n ; i++)
    {
        /** Caluclations for the variables */
        SumX= SumX + Xvalue[i];
        SumY= SumY + Yvalue[i];
        SumXY= SumXY + (Xvalue[i] * Yvalue[i]);
        SumXSq= SumXSq + (Xvalue[i] * Xvalue[i]);
    }
        Sumx2= SumX * SumX;
        AvgX= SumX / n;
        AvgY= SumY / n;
        mtop= n * SumXY - (SumX * SumY);
        mbot= n* (Sumx2 - SumXSq);
        Sum_m= mtop / mbot;

    cout << "The slope of the number entered is"<< Sum_m << endl;

    c = AvgY - (Sum_m * AvgX);

    cout<< "The intercept is:" << c << endl;

    return 0;
}
