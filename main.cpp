#include <iostream>
#include <ctime>

using namespace std;

int main() {
  srand(time(NULL));

  int r;

  for(int i=0; i<10; i++) {

    r = rand() % 10 - 2;
    cout << r << endl;
  }
}
