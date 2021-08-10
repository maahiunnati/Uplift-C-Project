#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <iomanip>
using namespace std;

int main()
{
    // Background And the fore ground colour 
    system("color 71");

    int hour, min, sec;
    cout << setw(70)
         << "*Enter Current Time*\n";

    // input From The User
    cout << "HH - ";
    cin >> hour;
    cout << "MM - ";
    cin >> min;
    cout << "SS - ";
    cin >> sec;

    if (hour > 23) {
        cout << " Wrong Time Input";
    }
    else if (min >60) {
        cout << "Wrong Time Input";
    }
    else if (sec > 60) {
        cout << "Wrong Time Input";
    }

    else {
        while (1)

        {
            system("cls");

            // Code for showing time
            for (hour; hour< 24; hour++) {
                for (min; min < 60; min ++ ) {

                    for (sec; sec < 60; sec++ ) {
                        system("cls");

                        cout << "\n\n\n\n"
                                "Current Time = "
                            << hour << ":" << min << ":" 
                            << sec 
                            << "Hrs";

                        // Output will be in the format of HH:MM:SS 

                        Sleep(1000);
                        
                        // One Second Pause
                    }
                    sec = 0;
                }
                min = 0;
            }
        }
    }
}