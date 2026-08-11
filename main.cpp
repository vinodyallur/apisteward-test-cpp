#include "demo_pay.h"

int main() {
    PayClient client;
    client.createolsPayment(1000, "usd", "tok_visa");
    return 0;
}
