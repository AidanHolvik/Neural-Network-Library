#ifndef Network_H
#define Network_H

#include "Layer.h"

class Network
{
	public:
		// Constructor(s)
		Network();

		// Accessors
		// Mutators

		void addLayer(unsigned int width);

		// Activation Functions
		static double* sigmoid();



	private:
		Layer* layers;				// array containing the layers of the network

};

#endif
