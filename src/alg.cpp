// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    // вставьте код функции
    int count;
    count = 0;
    for (int i = 1; i * i <= value; ++i) {
        if ((value % i == 0) && (value != 1)) {
            ++count;
        }
    }
    if (count == 1)
        return true;
    else
        return false;
}

uint64_t nPrime(uint64_t n) {
    // вставьте код функции
    int value, count;
    value = 1;
    count = 0;
    while (n > count) {
        if (checkPrime(value)) {
            ++count;
        }
        ++value;
    }
    if (n == 0) {
        return 0;
    }
    return --value;
}

uint64_t nextPrime(uint64_t value) {
    // вставьте код функции
    ++value;
    if (checkPrime(value)) {
        return value;
    }   else
        nextPrime(value);
}

uint64_t sumPrime(uint64_t hbound) {
    // вставьте код функции
    int sum = 0;
    for (int i = 1; i < hbound; ++i) {
        if (checkPrime(i))
            sum = sum + i;
    }
    return sum;
}
