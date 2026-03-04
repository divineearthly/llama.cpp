#include <iostream>
#include <map>
#include <string>

static std::map<int, long long> sutra_usage_stats = {
    {0, 0}, // URDHVA
    {1, 0}, // NIKHILAM
    {2, 0}, // SUNYAM
    {3, 0}  // ANURUPYENA
};

void log_sutra_selection(int sutra_type) {
    sutra_usage_stats[sutra_type]++;
}

void print_resonance_report() {
    std::cout << "\n--- Divine Earthly: Resonance Report ---" << std::endl;
    std::cout << "Urdhva (Efficiency):  " << sutra_usage_stats[0] << " cycles" << std::endl;
    std::cout << "Nikhilam (Precision): " << sutra_usage_stats[1] << " cycles" << std::endl;
    std::cout << "Sunyam (Silence):     " << sutra_usage_stats[2] << " cycles" << std::endl;
    std::cout << "Ahimsa/Anurupyena:    " << sutra_usage_stats[3] << " cycles" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
}

int main() {
    log_sutra_selection(0);
    log_sutra_selection(1);
    print_resonance_report();
    return 0;
}
