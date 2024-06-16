#ifndef HOUR_H
#define HOUR_H

#include "HalfHour.hpp"

namespace Scheduler {
    namespace Core {

        struct Hour {
            HalfHour first_half_hour;
            HalfHour second_half_hour;
        };
    }
}

#endif // HOUR_H
