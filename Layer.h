#ifndef Layer_H
#define Layer_H

class Layer
{
	public:
		Layer(unsigned int newLayerWidth, unsigned int existingLayerWidth);


	private:
		double** input;		// A matrix for storing the weighted inputs from the previous layer. Each row represents a neuron from the previous layer, and each column represents a neuron in this layer.
		unsigned int width;			// The number of neurons in the layer
		double** weight;			// 2D array containing the outbound weights for each neuron
		double* bias;				// array containing the bias of each neuron in the layer
		double* output;				// An array which stores the results of the activation function for each neuron in the layer.
		void* activationFunction;	// pointer to the activation function for this layer's neurons

};

#endif
