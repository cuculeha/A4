// Author      : Saliha Babar
// Assignment  : A4
// Due Date    : 01/22/2025
// Purpose     : Standard Vector Assignmnent

#include <iostream>
#include <iomanip>
#include <vector>        // Including vector library

using namespace std; 

const int numBooks = 20;

double CalcTotal (const vector<int> &quantity, const vector <float> &price); // Function to calculate total

int main(){
  vector <int> onHand {17,3,6,0,19,7,18,15,5,4,7,14,18,12,12,3,5,19,16,15};
  vector <float> wholesale = {72.01 , 40.15, 56.52, 31.61, 72.11, 71.84, 91.06,
                          40.12, 22.27, 71.64, 24.26, 34.18, 44.92, 19.70,
                          41.70, 66.42, 83.43, 53.72, 31.22, 98.19};
  double total;
    
 	// Pass these data to the function
	total = CalcTotal (onHand, wholesale);

	// Format the output
 	std::cout.imbue(std::locale("en_US.UTF-8"));
	cout << std:: showbase << std:: put_money(total * 100) << endl;

return 0;
}

double CalcTotal (const vector<int> &quantity,  const vector <float> &price)
{
  double sum = 0;
  for (int i= 0; i < numBooks ; i++)
    {
      sum += quantity[i] * price[i];
    }
  return sum;
}
