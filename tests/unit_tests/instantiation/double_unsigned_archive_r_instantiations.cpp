//
// Created by Alan Freitas on 08/09/20.
//

#include "test_instantiations.h"
#include <pareto_front/front.h>

namespace pareto {
    template class archive<double, 0, unsigned, r_tree_tag>;
    template class archive<double, 1, unsigned, r_tree_tag>;
    template class archive<double, 3, unsigned, r_tree_tag>;
    template class archive<double, 5, unsigned, r_tree_tag>;
    template class archive<double, 9, unsigned, r_tree_tag>;
    template class archive<double, 13, unsigned, r_tree_tag>;
}