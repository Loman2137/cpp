#include <iostream>
#include <thread>
#include <vector>
#include <atomic>
#include <chrono>

void increment_for_seconds(std::atomic<bool>& stop_flag, uint64_t& counter) {
    while (!stop_flag.load()) {
        ++counter;
    }
}

int main() {
    const int num_threads = std::thread::hardware_concurrency();
    std::cout << "starting " << num_threads << " threads"<<std::endl;

    std::atomic<bool> stop_flag(false);
    std::vector<std::thread> threads;
    std::vector<uint64_t> counters(num_threads, 0);

    for (int i = 0; i < num_threads; ++i) {
        threads.emplace_back(increment_for_seconds, std::ref(stop_flag), std::ref(counters[i]));
    }

    std::this_thread::sleep_for(std::chrono::seconds(10));
    stop_flag.store(true);

    for (auto& t : threads) {
        t.join();
    }

    uint64_t total = 0;
    for (int i = 0; i < num_threads; ++i) {
        std::cout << "Thread " << i+1 << " did: " << counters[i] << " incrementatons\n";
        total += counters[i];
    }

    std::cout << "Total: " << total << std::endl;

    return 0;
}