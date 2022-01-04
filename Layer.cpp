#include "Layer.h"

Layer::Layer(unsigned int newLayerWidth, unsigned int existingLayerWidth)
{
	this->width = newLayerWidth;
	weight = new double* [width];

	// generate 2D array to hold weighted input
	input = new double* [existingLayerWidth];	// add a row for each neuron in the previous layer
	for (int i = 0; i < existingLayerWidth; i++)
	{
		input[i] = new double[width];	// add a column for each neuron in this layer
	}

	bias = new double [width];
	output = new double [width];

	activationFunction = nullptr; // X1

	/*
		Issues
		------------------------------
			X1: Is not a valid pointer to a function. This will cause issues unless a valid reference is given to the object before trying to pass any input to the network.
	*/
}
