#pragma once
#include <iostream>
#include <vector>
class Artifact
{
public:
	Artifact();
	~Artifact();
private:
	float mainStat;
	std::vector<float> subStat;

};

