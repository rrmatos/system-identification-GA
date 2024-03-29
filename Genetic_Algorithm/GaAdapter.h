#ifndef GAADAPTER_H
#define GAADAPTER_H


#define MAX_SIMULTANEOUS_TESTS 10	//Caution. 4 tests running simultaneously demmands a lot of computational resource

#include "Chromosome.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <iostream>
#include <ctime>
#include <cmath>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <boost/filesystem.hpp>

//-------------------------------------------------------------------------
/**Class GAAdapter declaration. It will handle the specific operations
between GA and TORCS
*/
class GaAdapter {
public:
	/**Empty constructor
	*/
	GaAdapter(){}

	/**Method for allocating memory segments for the driver to save its results.
	*It returns the IDs of the spaces allocated.
	*/	


	/**Method that acctually tests each individual in TORCS environment for a set of tracks
	*/
	void callTest(Chromosome*);

	/**Method that access previous allocated memory IDs and retrieve its information
	*It has a internal call of setFitness(float)
	*/
	
};

#endif // GAAAPTER_H