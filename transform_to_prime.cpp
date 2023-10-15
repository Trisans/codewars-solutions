#include <vector>

using namespace std; 

int minimumNumber (vector <int> numbers )
{
  int sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
    }
    for (int add = 0; true; add++) {
        for (int fac = 2; fac < sum; fac++) {
            if ((sum + add) % fac == 0) {
                break;
            } else if (fac == sum - 1) {
                return add;
            }
        }
    }
}