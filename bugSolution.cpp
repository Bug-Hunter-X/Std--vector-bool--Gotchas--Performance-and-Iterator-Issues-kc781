#include <iostream>
#include <vector>
#include <chrono>

int main() {
  // Example usage of std::vector<bool>
  std::vector<bool> boolVector(1000000);
  auto start = std::chrono::high_resolution_clock::now();
  for (int i = 0; i < 1000000; ++i) {
    boolVector[i] = (i % 2 == 0);
  }
  auto end = std::chrono::high_resolution_clock::now();
  auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
  std::cout << "std::vector<bool> time: " << duration.count() << " microseconds" << std::endl;

  // Example using std::vector<char> as a more efficient replacement
  std::vector<char> charVector(1000000);
  start = std::chrono::high_resolution_clock::now();
  for (int i = 0; i < 1000000; ++i) {
    charVector[i] = (i % 2 == 0) ? 1 : 0; // Simulate bool behavior
  }
  end = std::chrono::high_resolution_clock::now();
  duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
  std::cout << "std::vector<char> time: " << duration.count() << " microseconds" << std::endl;
  return 0;
}