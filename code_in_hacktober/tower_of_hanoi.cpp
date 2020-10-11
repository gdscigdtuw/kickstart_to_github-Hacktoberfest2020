#include <iostream>

using namespace std;

void towerOfHanoi(int nOfDisks, char fromRod, char toRod, char auxRod) {
  if (nOfDisks == 1) {
    cout << "Move Disk 1 from " << fromRod << " to " << toRod << endl;
    return;
  }
  towerOfHanoi(nOfDisks - 1, fromRod, auxRod, toRod);
  cout << "Move disk " << nOfDisks << " from rod " << fromRod << " to " << toRod << endl;
  towerOfHanoi(nOfDisks - 1, auxRod, toRod, fromRod);
}

int main(void) {
  // cout << "I am working" << endl;
  int nRods = 4;
  towerOfHanoi(nRods, 'A', 'C', 'B');
  return 0;
}
