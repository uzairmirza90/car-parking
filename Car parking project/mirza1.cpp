/* Conditions:
 There is a parking lot in which three types of vehicles can be 
 parked.
 Rickshaw, car, bus
 Parking ticket for rickshaw is 100
 Parking ticket for car is 200
 Parking ticket for bus is 300
 Maximum 50 vehicles can be parked in the parking lot.
 Print total number of vehicles
 print total amount
 print total rickshaws
 print total cars
 print total buses followed by the user input
 And also user can delete all record
 */

#include <iostream>
using namespace std;
int main()
{
		 int userInput;
         int amount = 0;
         int count = 0;
         int r = 0;
         int c = 0;
         int b = 0;

         while (true)
         {
         	
        // Menu
        
         cout<<"Press 1 for rickshaw "<<endl;
         cout<<"Press 2 for car "<<endl;
         cout<<"Press 3 for bus "<<endl;
         cout<<"Press 4 to show record "<<endl;
         cout<<"Press 5 to delete record "<<endl;
         cin>>userInput;
         
         if(userInput == 1)
         {
         	if(count<=49)
			 {
			 
             amount = amount + 100;
             count = count + 1;
             
         	 }
         	 else
         	 {
			  
         	 cout<<"Parking is full "<<endl;
         	 }
         	 r++;
         }
         else if(userInput == 2)
         {
         	if(count<=49)
			 {
			 amount = amount + 200;
             count = count + 1;
             
          	 }
          	 else
          	 {
          	 	cout<<"Parking is full "<<endl;
			 }
			 c++;
         }
         else if(userInput == 3)
         {
         	if(count<=49)
         	{
			 amount = amount + 300;
             count = count + 1;
             
         	}
         	else
			 {
			 	cout<<"Parking is full "<<endl;
			 } 
			 b++;
			 
         }
         else if(userInput == 4)
         {
         	 cout<<"*************************"<<endl;
             cout<<"Total number of vehicles = "<<count<<endl;
             cout<<"Total amount = "<<amount<<endl;
             cout<<"Total number of rickshaws = "<<r<<endl;
             cout<<"Total number of cars = "<<c<<endl;
             cout<<"Total number of buses = "<<b<<endl<<endl;
             cout<<"*************************"<<endl;
         }
         else if(userInput == 5)
         {
             amount = 0;
             count = 0;
             r = 0;
             c = 0;
             b = 0;
             cout<<"*************"<<endl;
             cout<<"Record Deleted"<<endl;
             cout<<"*************"<<endl;
         }
         else
        {
             cout<<"Invalid Input "<<endl;
        }
         
     }
     return 0;
     }


