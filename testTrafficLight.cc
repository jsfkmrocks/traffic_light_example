#include <iostream>
#include "TrafficLight.h"

using namespace std;


void showLight(TrafficLight nS, TrafficLight eW);


int main()
{
    TrafficLight  northSouth,
	   eastWest;

// assume start both red
    northSouth.change();		// should make north/south green
    cout << "\n North/South should be GREEN\n";
    showLight(northSouth, eastWest);
    cout << endl;

    northSouth.change();		// NS should be yellow
    showLight(northSouth, eastWest);
    cout << endl;

    northSouth.change();		// both red
    showLight(northSouth, eastWest);
    cout << endl;

    eastWest.change();			// EW should be green
    showLight(northSouth, eastWest);
    cout << endl;

    eastWest.change();			// EW should be yellow
    showLight(northSouth, eastWest);
    cout << endl;

    northSouth.makeRed();
    eastWest.makeRed(); 		// both red again
    showLight(northSouth, eastWest);
    cout << endl;

return 0;
}


void showLight (TrafficLight upDown, TrafficLight leftRight)
{
    cout << "After change ";
     cout << "The North/South light is ";
    upDown.printColor();
    cout << " and the East/West light is ";
    leftRight.printColor();
}
