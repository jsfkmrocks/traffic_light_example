// Jordan Brown
//Traffic Light Example

//Establish Variables
#include <iostream>
#include "TrafficLight.h"
using namespace std;


       //Traffic Light Routine
       TrafficLight::TrafficLight()
        {
            color=0; //Start at Red
        }
        void TrafficLight::change()
        {
            if (color==2) //Reset Color
                color=0;

            else
                color++; //Cycle Color
        }

        //Print Color Routine
        void TrafficLight::printColor()
        {
            if (color==0)
                cout << "Red" << endl;

            else if (color==1)
                cout << "Green" << endl;

            else if (color==2)
                cout << "Yellow" << endl;

            else
                cout << "ERROR" << endl; //Troubleshooting Tool
        }

        //Make Red Routine
        void TrafficLight:: makeRed()
        {
            color=0;
        }


        int color;    // 0=Red, 1=Green, 2=Yellow