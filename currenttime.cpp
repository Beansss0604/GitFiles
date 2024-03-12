#include <iostream>
#include <ctime> 
using namespace std;

int main() {
   
   time_t current_dt = time(0); 

   char* result = ctime(&current_dt); 
   
   cout << "The current date and time is:\n" << result << endl;
}
