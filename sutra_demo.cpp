#include <iostream>
#include <vector>
#include <stdint.h>
#include "sutra_functions.h"

int main() {
    // Sample data: 8-bit integers representing quantized weights
    int8_t x[] = {8, 9, 7, 10};
    int8_t y[] = {7, 8, 9, 6};
    int n = 4;

    // 1. Test Urdhva (Standard Cross-Multiplication)
    float urdhva_res = apply_urdhva_quant(x, y, n);
    std::cout << "Urdhva Result: " << urdhva_res << std::endl;

    // 2. Test Nikhilam (Error-Correction Logic)
    float nikhilam_res = apply_nikhilam_quant(x, y, n);
    std::cout << "Nikhilam Result: " << nikhilam_res << std::endl;

    // 3. Test Ahimsa Protocol (Non-violent Scaling)
    // We'll pass a value higher than the 108.0f threshold to trigger scaling
    float high_resonance = 200.0f;
    float governed_res = apply_ahimsa_governance(high_resonance);
    std::cout << "Ahimsa Governance (Input 200.0): " << governed_res << " (Scaled by Phi)" << std::endl;

    return 0;
}
