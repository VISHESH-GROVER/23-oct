#include <iostream>
using namespace std;


void start_to_end() {
    int product = 1;
    int start, end;
    cout << "Enter your start point :";
    cin >> start;
    cout << "Enter your end point :";
    cin >> end;
    int i = 1;
    while (i <= 10) {
        i++; 
        product = product * start;
        cout << product << endl;
    }
    cout << "Total product : " << product << endl;
}
int main()
{
    start_to_end();
    system("pause>0");
}

//int start, end;
 //int sum = 0;
 //int product = 1;

 //// Ask the user for the starting and ending values
 //cout << "Enter the starting number: ";
 //cin >> start;
 //cout << "Enter the ending number: ";
 //cin >> end;

 //// Ensure start is less than or equal to end
 //if (start > end) {
 //    cout << "Starting number should be less than or equal to ending number." << endl;

 //}

 //// Loop from start to end    
 //for ( 
 //    product *= i; // Calculate product
 //}

 //// Output the results
 //cout << "Sum from " << start << " to " << end << " is: " << sum << endl;
 //cout << "Product from " << start << " to " << end << " is: " << product << endl;



//void start_to_end() {
//    int start, end;
//    cout << "Enter the starting number: ";
//    cin >> start;
//    cout << "Enter the ending number: ";
//    cin >> end;
//
//    for (int i = start; i <= end; i++) {
//        cout << i << endl; 
//    }
//} 