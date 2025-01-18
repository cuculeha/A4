// Author      : Saliha Babar
// Assignment  : A4
// Due Date    : 01/22/2025
// Purpose     : Standard Vector Assignmnent

#include <iostream>
#include <iomanip>

using namespace std;

const int numBooks = 20;

double CalcTotal (const int quantity[], const float price[]);
void FormatOutput ( const double total );

int main(){
  int onHand [20] = {17,3,6,0,19,7,18,15,5,4,7,14,18,12,12,3,5,19,16,15};
  float wholesale [20] = {72.01 , 40.15, 56.52, 31.61, 72.11, 71.84, 91.06,
                          40.12, 22.27, 71.64, 24.26, 34.18, 44.92, 19.70,
                          41.70, 66.42, 83.43, 53.72, 31.22, 98.19};
  double total;
    
  // Pass these data to the function
  total = CalcTotal (onHand, wholesale);

  // Format the output
  FormatOutput (total);

return 0;
}

double CalcTotal (const int quantity[], const float price[])
{
  double sum = 0;
  for (int i= 0; i < 20 ; i++)
    {
      sum += quantity[i] * price[i];
    }
  return sum;
}

void FormatOutput ( const double total )
{
  int sumTruncated = static_cast<int>(total);
	int decimal;
	int first;
	int second;
	int third;
	
	decimal = (total - sumTruncated) * 100 ;
	first = sumTruncated % 1000;
	second = (sumTruncated % 1000000)/1000;
	third = (sumTruncated % 1000000000) /1000000;
	
	if (third != 0) {
		cout << "$" << third << "," << second << "," << first << "." << decimal << endl;
		}
		
	else if (second != 0) {
		cout << "$" << second << "," << first << "." << decimal << endl;
		}
		
	else {
		cout << "$" << first << "." << decimal << endl;
		}
}
