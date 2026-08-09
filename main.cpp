#include "demo_pay.h"

int main() {
    PayClient c1;
    c1.createCharge(1000, "usd", "tok_visa");
    return 0;
}
