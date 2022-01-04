#ifndef Layer_H
#define Layer_H

#include "ActivationFunction.h"

class Layer
{
	public:
		// Constructor(s)
		Layer(unsigned int width);

		// Accessors
		// Mutators


	private:
		double* bias;				// array containing the bias of each node in the layer
		double** weight;			// 2D array containing the outbound weights for each node
		void* activationFunction;	// pointer to the activation function for this layer's nodes


};

#endif
