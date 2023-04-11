#ifndef __BRANCH_PREDICTOR_HPP__
#define __BRANCH_PREDICTOR_HPP__

#include <vector>
#include <bitset>

struct BranchPredictor {
	virtual bool predict(uint32_t pc) = 0;
	virtual void update(uint32_t pc, bool taken) = 0;
};

struct SaturatingBranchPredictor : public BranchPredictor {
	std::vector<std::bitset<2>> table;
	SaturatingBranchPredictor(int value) : table(1 << 14, value) {}

	bool predict(uint32_t pc) {
		// your code here
		return false;
	}

	void update(uint32_t pc, bool taken) {
		// your code here
	}
};

struct BHRBranchPredictor : public BranchPredictor {
	std::bitset<2> bhr;
	BHRBranchPredictor(int value) : bhr(value) {}

	bool predict(uint32_t pc) {
		// your code here
		return false;
	}

	void update(uint32_t pc, bool taken) {
		// your code here
	}
};

struct SaturatingBHRBranchPredictor : public BranchPredictor {
	std::bitset<2> bhr;
	std::vector<std::bitset<2>> table;
	SaturatingBHRBranchPredictor(int value) : bhr(value), table(1 << 14, value) {}

	bool predict(uint32_t pc) {
		// your code here
		return false;
	}

	void update(uint32_t pc, bool taken) {
		// your code here
	}
};

#endif