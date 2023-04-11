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
    std::vector<std::bitset<2>> bhr;
    BHRBranchPredictor(int value) : bhr(1 << 2, value) {}

    bool predict(uint32_t pc) {
        // your code here
        return false;
    }

    void update(uint32_t pc, bool taken) {
        // your code here
    }
};

struct SaturatingBHRBranchPredictor : public BranchPredictor {
    std::vector<std::bitset<2>> bhr;
    std::vector<std::bitset<2>> table;
    std::vector<std::bitset<2>> combination;
    SaturatingBHRBranchPredictor(int value, int size) : bhr(1 << 2, value), table(1 << 14, value), combination(size, value) {
        assert(size <= (1 << 16));
    }

    bool predict(uint32_t pc) {
        // your code here
        return false;
    }

    void update(uint32_t pc, bool taken) {
        // your code here
    }
};

#endif
