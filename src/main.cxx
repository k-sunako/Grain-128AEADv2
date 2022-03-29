#include <iostream>
#include <bitset>

int main(int argc, char* argv[]) {
  std::bitset<128> lfsr(1uL);

  for(auto i = 0; i < 10000; i++){
    auto x = lfsr[0] ^ lfsr[7] ^ lfsr[38] ^ lfsr[70] ^ lfsr[81] ^ lfsr[96];
    lfsr = lfsr >> 1;
    lfsr[127] = x;

    std::cout << lfsr << std::endl;
  }
  
  return 0;
}
