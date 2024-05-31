#pragma once
#include <cstring>

extern "C" __declspec(dllexport) const char* Search(const char* str, const char* target) {
    const char* found = strstr(str, target);
    if (found != nullptr) {
        return found;
    }
    else {
        return nullptr;
    }
}
