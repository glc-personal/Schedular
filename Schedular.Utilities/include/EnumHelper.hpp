#ifndef ENUMHELPER_H
#define ENUMHELPER_H

#include "UserStatus.hpp"
#include <string>

/*
 * ---------------------------------------------------------------------------------------------------- 
 * Enum Helper 
 * ---------------------------------------------------------------------------------------------------- 
 */
namespace Schedular {
    namespace Utilities {

        class EnumHelper {
        public:
            static std::string toString(Schedular::Core::UserStatus status);
        private:
        };
    }
}

#endif // ENUMHELPER_H
