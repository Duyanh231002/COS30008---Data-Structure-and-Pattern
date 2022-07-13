#pragma once
class Combine
{
private:
	unsigned int fN;
	unsigned int fK;

public:
	// constructor for combination n over k
	Combine(unsigned int aN, unsigned int aK) {
		fN = aN;
		fK = aK;
		operator()();
	}

	// getters
	unsigned int getN() {
		return fN;
	}
	unsigned int getK() {
		return fK;
	}

	// call operator to calculate n over k 
	unsigned long long operator()() const {
		long long result = 1.0;
		for (int x = 0; x < fK; x++) {
			result *= ((fN - x) / (x + 1.0));
		}
		return result;
	}
};