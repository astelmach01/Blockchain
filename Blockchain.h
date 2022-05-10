//
// Created by Andrew Stelmach on 5/10/2022.
//

#ifndef BLOCKCHAIN_BLOCKCHAIN_H
#define BLOCKCHAIN_BLOCKCHAIN_H

#include <cstdint>
#include <vector>
#include "Block.h"

using namespace std;

class Blockchain {

public:
    Blockchain();

    void addBlock(Block block);

private:
    size_t difficulty;
    vector<Block> chain;

    Block getLastBlock() const;
};


#endif //BLOCKCHAIN_BLOCKCHAIN_H
