//
// Created by Andrew Stelmach on 5/10/2022.
//

#ifndef BLOCKCHAIN_DELIVERY_H
#define BLOCKCHAIN_DELIVERY_H

using namespace std;
#include <ctime>
#include <utility>
#include <ostream>
#include <iostream>
#include <sstream>

enum DeliveryStatus {
    Failed, Success, InProgress
};

class Delivery {

public:
    Delivery(time_t started, time_t completed, DeliveryStatus status);

    DeliveryStatus getStatus() const;

    time_t getStart() const {
        return start;
    }

    time_t getEndDate() const {
        return end;
    }

    string toString() const {
        stringstream ss;
        ss << "Started: " << start << " Completed: " << end << " Status: " << status;
        return ss.str();
    }

private:
    DeliveryStatus status;
    time_t start;
    time_t end;
};


#endif //BLOCKCHAIN_DELIVERY_H
