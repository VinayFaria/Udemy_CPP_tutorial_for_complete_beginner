#include <stdlib.h>
#include "particle.h"

namespace screen_processing {
Particle ::Particle(){  // constructor
    m_x = ((double)(2*rand())/RAND_MAX) - 1;
    m_y = ((double)(2*rand())/RAND_MAX) - 1;
}

Particle ::~Particle(){  // destructor
}

}
