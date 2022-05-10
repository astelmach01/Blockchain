//
// Created by Andrew Stelmach on 5/10/2022.
//

#include "Delivery.h"


DeliveryStatus Delivery::getStatus() const {
    return this->status;
}

Delivery::Delivery(time_t started, time_t completed, DeliveryStatus status) : status(status), start(started), end(completed) {

}
