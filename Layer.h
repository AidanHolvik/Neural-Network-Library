#ifndef Layer_H
#define Layer_H

class Layer
{
	public:
		// Constructor(s)
		Layer();
		Layer(unsigned int width, void* activationFunction);

		// Accessors
		unsigned int getWidth();
		double* getBias();
		//double getBias(unsigned int neuronIndex);
		double** getLayerWeights();
		//double* getNeuronWeights(unsigned int neuronIndex);
		//double getWeight(unsigned int neuronIndex, unsigned int dendriteIndex);
		void* getActivationFunction();

		// Mutators
		void setWidth(unsigned int newWidth);
		void setBiases(double* newBiases);
		//void setBias(double newBias, unsigned int neuronIndex);
		void setLayerWeights(double** newWeights);
		//void setNeuronWeights(double* newWeights, unsigned int neuronIndex);
		//void setWeight(double newWeight, unsigned int neuronIndex, unsigned int dendriteIndex);
		void setActivationFunction(void* newActivationFunction);


	private:
		unsigned int width;			// The number of neurons in the layer
		double* bias;				// array containing the bias of each neuron in the layer
		double** weight;			// 2D array containing the outbound weights for each neuron
		void* activationFunction;	// pointer to the activation function for this layer's neurons

};

#endif
