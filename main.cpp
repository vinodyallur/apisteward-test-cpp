#include "demo_pay.h"

int main() {
    PayClient p1;
    p1.createCharge(1000, "usd", "tok_visa");
    return 0;
}
