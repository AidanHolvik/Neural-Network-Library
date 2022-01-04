#include "Layer.h"

Layer::Layer(unsigned int width, void* activationFunction)
{
	this->width = width;
	bias = new double[width];
	weight = new double* [width];
	this->activationFunction = activationFunction; // X1, X2

	/*
		Issues
		------------------------------
			X1: Does not check whether the pointer is valid.
			X2: Does not check whether the pointer points to a valid function.
	*/
}

unsigned int Layer::getWidth()
{
	return width;
}

double* Layer::getBias()
{
	return bias; // X1

	/*
		Issues
		------------------------------
			X1: violates encapsulation by returning a reference to private member data. 
	*/
}

double** Layer::getLayerWeights()
{
	return weight; // X1

	/*
		Issues
		------------------------------
			X1: violates encapsulation by returning a reference to private member data.  
	*/
}

void* Layer::getActivationFunction()
{
	return activationFunction; // X1

	/*
		Issues
		------------------------------
			X1: violates encapsulation by returning a reference to private member data.
	*/
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
