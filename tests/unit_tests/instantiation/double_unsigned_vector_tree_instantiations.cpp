//
// Created by Alan Freitas on 08/09/20.
//

#include "test_instantiations.h"
#include <pareto_front/tree/vector_tree.h>

namespace pareto {
    template class vector_tree<double, 0, unsigned>;
    template class vector_tree<double, 1, unsigned>;
    template class vector_tree<double, 3, unsigned>;
    template class vector_tree<double, 5, unsigned>;
    template class vector_tree<double, 9, unsigned>;
    template class vector_tree<double, 13, unsigned>;
}