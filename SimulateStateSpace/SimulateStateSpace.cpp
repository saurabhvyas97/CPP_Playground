#include"SimulateStateSpace.h"

SimulateSystem::SimulateSystem()
{
	m = 0; n = 0; r = 0;
	A.resize(1, 1); A.setZero();
	B.resize(1, 1); B.setZero();
	C.resize(1, 1); C.setZero();
	x0.resize(1, 1); x0.setZero();
	inputSequence.resize(1, 1); inputSequence.setZero();
	simulatedStateSequence.resize(1, 1); simulatedStateSequence.setZero();
	simulatedOutputSequence.resize(1, 1); simulatedOutputSequence.setZero();
	timeRowVector.resize(1, 1); timeRowVector.setZero();
}

void SimulateSystem::runSimulation()
{
    std::cout << "Hello world" << std::endl;
}

