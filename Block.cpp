//
// Created by Andrew Stelmach on 5/10/2022.
//

#include "Block.h"

#include <utility>
#include <sstream>
#include "sha256.h"

Block::Block(size_t indexIn, string dataIn) : index(indexIn), data(std::move(dataIn)) {
    noonce = -1;
    our_time = time(nullptr);
}

string Block::getHash() {
    return hash;
}

inline string Block::calculateHash() const {
    stringstream ss;
    ss << index << our_time << data << noonce << prevHash;

    return sha256(ss.str());
}

void Block::mineBlock(size_t difficulty) {
    char cstr[difficulty + 1];

    for (size_t i = 0; i < difficulty; ++i) {
            cstr[i] = '0';
    }

    cstr[difficulty] = '\0';

    string str(cstr);

    do {
        noonce++;
        hash = calculateHash();
    } while (hash.substr(0, difficulty) != str);

    cout << "Block mine: " << hash << endl;
}

