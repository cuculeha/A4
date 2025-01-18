// Author      : Saliha Babar
// Assignment  : A4
// Due Date    : 01/22/2025
// Purpose     : Standard Vector

#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

const int numBooks = 20;

float CalcTotal (const int quantity[], const float price[]);

int main(){
  int onHand [20] = {17,3,6,0,19,7,18,15,5,4,7,14,18,12,12,3,5,19,16,15};
  float wholesale [20] = {72.01 , 40.15, 56.52, 31.61, 72.11, 71.84, 91.06,
                          40.12, 22.27, 71.64, 24.26, 34.18, 44.92, 19.70,
                          41.70, 66.42, 83.43, 53.72, 31.22, 98.19};
  float total;
  string StringofTotal;
  
  // Pass these data to the function
  total = CalcTotal (onHand, wholesale);
  
  cout << fixed << setprecision(2) << "The total is $" << total << endl;
  cout << "in string " << StringofTotal << endl;
return 0;
}

float CalcTotal (const int quantity[], const float price[])
{
  float sum = 0;
  for (int i= 0; i < 20 ; i++)
    {
      sum += quantity[i] * price[i];
    }
  return sum;
}
