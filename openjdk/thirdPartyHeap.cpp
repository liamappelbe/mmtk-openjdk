
#include "gc/shared/thirdPartyHeap.hpp"
#include "mmtk.h"
#include "mmtkArguments.hpp"

namespace third_party_heap {

class MutatorContext;

MutatorContext* bind_mutator(::Thread* current) {
    return (MutatorContext*) ::bind_mutator((void*) current);
}

GCArguments* new_gc_arguments() {
    return new MMTkArguments();
}

};

// #endif