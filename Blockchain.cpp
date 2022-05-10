//
// Created by Andrew Stelmach on 5/10/2022.
//

#include "Blockchain.h"
#include "Block.h"

Blockchain::Blockchain() {
    chain.emplace_back(Block(0, Delivery(time(nullptr), time(nullptr), Success)));
    difficulty = 6;
}

void Blockchain::addBlock(Block block) {
    block.prevHash = getLastBlock().getHash();
    block.mineBlock(difficulty);
    chain.push_back(block);
}

Block Blockchain::getLastBlock() const {
    return chain.back();
}