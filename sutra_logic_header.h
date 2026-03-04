#include <iostream>
#include <map>
#include <string>

// Global counters for the Sutra-Logic Controller
static std::map<int, long long> sutra_usage_stats = {
    {0, 0}, // URDHVA (General)
    {1, 0}, // NIKHILAM (High Precision)
    {2, 0}, // SUNYAM (Sparse/Energy Save)
    {3, 0}  // ANURUPYENA (Proportional)
};
