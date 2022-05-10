//
// Created by Andrew Stelmach on 5/10/2022.
//

#ifndef BLOCKCHAIN_BLOCK_H
#define BLOCKCHAIN_BLOCK_H

#include <cstdint>
#include <iostream>
#include "Delivery.h"

using namespace std;


class Block {

public:
    string prevHash;

    Block(size_t indexIn, Delivery dataIn);

    string getHash();

    void mineBlock(size_t difficulty);

    Delivery getData() const {
        return data;
    }



private:
    size_t index;
    int64_t noonce;
    Delivery data;
    string hash;
    time_t our_time;

    string calculateHash() const;
};


#endif //BLOCKCHAIN_BLOCK_H
