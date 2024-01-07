#include <iostream>

using namespace std;

int main() {
  int n;

  // Get the value of n from the user
  cout << "Enter the value of n: ";
  cin >> n;

  // Calculate the sum
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    // Add the current term based on its parity
    if (i % 2 == 1) {
      sum += i;
    } else {
      sum -= i;
    }
  }

  // Print the sum
  cout << "The sum of the series 1-2+3-4+5-6+...+n is: " << sum << endl;

  return 0;
}
