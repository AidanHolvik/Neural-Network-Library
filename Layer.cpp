#include "Layer.h"

Layer::Layer(unsigned int width, void* activationFunction)
{
	this->width = width;
	bias = new double[width];
	weight = new double* [width];
	this->activationFunction = activationFunction;
}

void Layer::setActivationFunction(void* newActivationFunction)
{
	if (newActivationFunction != nullptr) // X1
	{
		activationFunction = newActivationFunction;	// doesn't replace function if new function pointer is null
	}

	/*
		Issues
		------------------------------
			X1: Does not check if the new function pointer points to a valid function. Only checks whether the pointer is null.
	*/
}
