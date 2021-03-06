#pragma once

#include "dsl.hh"
#include <unordered_map>

#include "reagent.hh"
#include "attribute.hh"

class agent {
        private:
                std::unordered_map <ns_int_t, std::shared_ptr<reagent> > reagents;
                std::unordered_map <ns_int_t, std::shared_ptr<action> > actions;

                attribute_layer attributes;
        public:
                int64_t guid;
};
