#include <stdio.h>
#include<stdlib.h>
#include "kalk.h"

int main() {
    struct Dzialanie *mojeDzialanie = getParams();
    calculateResult(mojeDzialanie);
    showResults(mojeDzialanie);
}
