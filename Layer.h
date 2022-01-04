#ifndef Layer_H
#define Layer_H

class Layer
{
	public:


	private:
		unsigned int width;			// The number of neurons in the layer
		double* bias;				// array containing the bias of each neuron in the layer
		double** weight;			// 2D array containing the outbound weights for each neuron
		void* activationFunction;	// pointer to the activation function for this layer's neurons

};

#endif
