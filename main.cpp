#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int Calcul_dart_in_circle(const int Total_dart);

int main()
{
  int Total_dart = 9000000;
  cout << "pi = "<< (4 * Calcul_dart_in_circle(Total_dart)) / (double)Total_dart << endl;
  return 0;
}

int Calcul_dart_in_circle(const int Total_dart)
{
  int Total_dart_in_circle = 0;
  for (int i = 0; i <= Total_dart; i++)
  {
    float x = rand() /(double)RAND_MAX;
    float y = rand() /(double)RAND_MAX;
    float xy = (x * x) + (y * y);
    if (xy <= 1)
    {
      Total_dart_in_circle++;
    }
  }
  return Total_dart_in_circle;
}
