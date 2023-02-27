#include <iostream>
#include <string>
using namespace std;

void getCodes(string input, string output);

int main(){
    string input;
    cin >> input;

    string output[10000];
    int count = 0;
    getCodes(input, "");
    return 0;
}

void getCodes(string input, string output) {
  // Base Case
  if (input.empty()) {
    cout << output << endl;
    return;
  }

  char c1 = input[0] - '0' + 'a' - 1;
  output.push_back(c1);
  getCodes(input.substr(1), output);
  output.pop_back();

  if (input.length() >= 2) {
    int b = stoi(input.substr(0, 2));
    if (b >= 10 && b <= 26) {
      char c2 = b - 1 + 'a';
      output.push_back(c2);
      getCodes(input.substr(2), output);
      output.pop_back();
    }
  }
}
