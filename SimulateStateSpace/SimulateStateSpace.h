#ifndef SIMULATESYSTEM_H
#define SIMULATESYSTEM_H

#include<iostream>
#include<Eigen/Dense>

using namespace std;
using namespace Eigen;

class SimulateSystem{
public:

    //Default constructor
    SimulateSystem(); 

    void runSimulation();

private:

	// MatrixXd is an Eigen typdef for Matrix<double, Dynamic, Dynamic>
	MatrixXd  A,B,C; // A,B,C matrices
	MatrixXd x0;     // initial state
	MatrixXd inputSequence;  // input sequnce, dimensions: m\times  timeSamples
	MatrixXd simulatedStateSequence; //simulated state sequence, dimensions: n\times  timeSamples
	MatrixXd simulatedOutputSequence; //simulated output sequence, dimensions: r\times  timeSamples
	MatrixXd timeRowVector;           // time row vector [0,1,2,3,\ldots, timeSamples-1]
	
	int m, n, r, timeSamples; //m - input dimension, n- state dimension, r-output dimension, timeSamples- number of time samples 

};

#endif