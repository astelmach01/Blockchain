#include <iostream>
#include "Blockchain.h"

using namespace std;

int main() {
    Blockchain bChain = Blockchain();

    time_t start1 = 1514764800;
    time_t end1 = 1515673600;

    time_t start2 = 1515673600;
    time_t end2 = 1516561600;

    time_t start3 = 1516561600;
    time_t end3 = 1517459600;

    auto *delivery = new Delivery(start1, end1, Success);
    auto *delivery2 = new Delivery(start2, end2, InProgress);
    auto *delivery3 = new Delivery(start3, end3, Failed);


    cout << "Mining block 1..." << endl;
    bChain.addBlock(Block(1, *delivery));

    cout << "Mining block 2..." << endl;
    bChain.addBlock(Block(2, *delivery2));

    cout << "Mining block 3..." << endl;
    bChain.addBlock(Block(3, *delivery3));

    return 0;
}
