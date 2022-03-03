
#include <iostream>

using namespace std;

int main()
{

    char userChoice;

    cout << "Which unit of measurement would you like to convert?" << endl;
    cout << "A. Temperature" << endl;
    cout << "B. Distance" << endl;
    cout << "C. Time" << endl;
    cin >> userChoice;
    cout << endl;

    if (userChoice == 'A') {

        char firstUnit;
        char secondUnit;
        double userTemp = 0.0;

        cout << "Enter your beginning temperature" << endl;
        cin >> userTemp; 
        cout << endl;

        cout << "What are you converting from? (F, C, or K)" << endl;
        cin >> firstUnit;
        cout << endl;

        switch (firstUnit) {
        case 'F':
            cout << "What are you converting to? (C or K)" << endl;
            cin >> secondUnit;
            cout << endl;

            if (secondUnit == 'C') {
                userTemp = ((userTemp - 32) / 1.8);
            }
            else if (secondUnit == 'K') {
                userTemp = 273.15 + ((userTemp - 32) * 5) / 9;
            }
            break;

        case 'C':
            cout << "What are you converting to? (F or K)" << endl;
            cin >> secondUnit;
            cout << endl;

            if (secondUnit == 'F') {
                userTemp = (userTemp * 9 / 5) + 32;
            }
            else if (secondUnit == 'K') {
                userTemp = 273.15 + userTemp;
            }
            break;

        case 'K':
            cout << "What are you converting to? (F or C)" << endl;
            cin >> secondUnit;
            cout << endl;

            if (secondUnit == 'F') {
                userTemp = 1.8 * (userTemp - 273.15) + 32;
            }
            else if (secondUnit == 'C') {
                userTemp = userTemp - 273.15;
            }
            break;

        }
        cout << userTemp << endl;
    }

    else if (userChoice == 'B') {

        char unitSystem;
        char firstUnit;
        char secondUnit;
        double userDistance;

        cout << "Which systems of units are you converting with? " << endl;
        cout << "A. Imperial" << endl;
        cout << "B. Metric" << endl;
        cin >> unitSystem;
        cout << endl;

        cout << "Enter your beginning distance withouts units (only the number)" << endl;
        cin >> userDistance;
        cout << endl;

        if(unitSystem == 'A'){
            cout << "What are you converting from?" << endl;
            cout << "A. Inch" << endl;
            cout << "B. Foot" << endl;
            cout << "C. Yard" << endl;
            cout << "D. Mile" << endl;
            cin >> firstUnit;
            cout << endl;

            switch (firstUnit) {
            case 'A':
                cout << "What are you converting to?" << endl;
                cout << "A. Foot" << endl;
                cout << "B. Yard" << endl;
                cout << "C. Mile" << endl;
                cin >> secondUnit;
                cout << endl;

                if (secondUnit == 'A') {
                    userDistance = userDistance / 12;
                }
                else if (secondUnit == 'B') {
                    userDistance = userDistance / 36;
                }
                else if (secondUnit == 'C') {
                    userDistance = userDistance / 63360;
                }
                break;

            case 'B':
                cout << "What are you converting to?" << endl;
                cout << "A. Inch" << endl;
                cout << "B. Yard" << endl;
                cout << "C. Mile" << endl;
                cin >> secondUnit;
                cout << endl;

                if (secondUnit == 'A') {
                    userDistance = userDistance * 12;
                }
                else if (secondUnit == 'B') {
                    userDistance = userDistance / 3;
                }
                else if (secondUnit == 'C') {
                    userDistance = userDistance / 5280;
                }
                break;

            case 'C':
                cout << "What are you converting to?" << endl;
                cout << "A. Inch" << endl;
                cout << "B. Foot" << endl;
                cout << "C. Mile" << endl;
                cin >> secondUnit;
                cout << endl;

                if (secondUnit == 'A') {
                    userDistance = userDistance * 36;
                }
                else if (secondUnit == 'B') {
                    userDistance = userDistance * 3;
                }
                else if (secondUnit == 'C') {
                    userDistance = userDistance / 1760;
                }
                break;

            case 'D':
                cout << "What are you converting to?" << endl;
                cout << "A. Inch" << endl;
                cout << "B. Foot" << endl;
                cout << "C. Yard" << endl;
                cin >> secondUnit;
                cout << endl;

                if (secondUnit == 'A') {
                    userDistance = userDistance * 63360;
                }
                else if (secondUnit == 'B') {
                    userDistance = userDistance * 5280;
                }
                else if (secondUnit == 'C') {
                    userDistance = userDistance * 1760;
                }
                break;
            }
            cout << userDistance << endl;
        }
        else if (unitSystem == 'B') {
        cout << "What are you converting from?" << endl;
        cout << "A. Millimeter" << endl;
        cout << "B. Centimeter" << endl;
        cout << "C. Meter" << endl;
        cout << "D. Kilometer" << endl;
        cin >> firstUnit;
        cout << endl;

        switch (firstUnit) {
        case 'A':
            cout << "What are you converting to?" << endl;
            cout << "A. Centimeter" << endl;
            cout << "B. Meter" << endl;
            cout << "C. Kilometer" << endl;
            cin >> secondUnit;
            cout << endl;

            if (secondUnit == 'A') {
                userDistance = userDistance / 10;
            }
            else if (secondUnit == 'B') {
                userDistance = userDistance / 1000;
            }
            else if (secondUnit == 'C') {
                userDistance = userDistance / 1000000;
            }
            break;

        case 'B':
            cout << "What are you converting to?" << endl;
            cout << "A. Millimeter" << endl;
            cout << "B. Meter" << endl;
            cout << "C. Kilometer" << endl;
            cin >> secondUnit;
            cout << endl;

            if (secondUnit == 'A') {
                userDistance = userDistance * 10;
            }
            else if (secondUnit == 'B') {
                userDistance = userDistance / 100;
            }
            else if (secondUnit == 'C') {
                userDistance = userDistance / 100000;
            }
            break;

        case 'C':
            cout << "What are you converting to?" << endl;
            cout << "A. Millimeter" << endl;
            cout << "B. Centimeter" << endl;
            cout << "C. Kilometer" << endl;
            cin >> secondUnit;
            cout << endl;

            if (secondUnit == 'A') {
                userDistance = userDistance * 1000;
            }
            else if (secondUnit == 'B') {
                userDistance = userDistance * 100;
            }
            else if (secondUnit == 'C') {
                userDistance = userDistance / 1000;
            }

            break;

        case 'D':
            cout << "What are you converting to?" << endl;
            cout << "A. Millimeter" << endl;
            cout << "B. Centimeter" << endl;
            cout << "C. Meter" << endl;
            cin >> secondUnit;
            cout << endl;

            if (secondUnit == 'A') {
                userDistance = userDistance * 1000000;           
            }
            else if (secondUnit == 'B') {
                userDistance = userDistance * 100000;    
            }
            else if (secondUnit == 'C') {
                userDistance = userDistance * 1000;
            }
            break;  
        }
        cout << userDistance << endl;

      }


    }
    else if (userChoice == 'C') {


        char firstUnit;
        char secondUnit;
        double timeAmount;

        cout << "Enter your beginning amount of time without units (only the number)" << endl;
        cin >> timeAmount;
        cout << endl << "What are you converting from?" << endl;
        cout << "A. Seconds" << endl;
        cout << "B. Minutes" << endl;
        cout << "C. Hours" << endl;
        cout << "D. Days" << endl;
        cout << "E. Weeks" << endl;
        cout << "F. Months" << endl;
        cout << "G. Years" << endl;
        cin >> firstUnit;
        cout << endl;

        switch (firstUnit) {
        case 'A':
            cout << "What are you converting to?" << endl;
            cout << "A. Minutes" << endl;
            cout << "B. Hours" << endl;
            cout << "C. Days" << endl;
            cout << "D. Weeks" << endl;
            cout << "E. Months" << endl;
            cout << "F. Years" << endl;
            cin >> secondUnit;

            if (secondUnit == 'A') {
                timeAmount = timeAmount / 60;
                }
            else if (secondUnit == 'B') {
                timeAmount = timeAmount / 3600;
            }
            else if (secondUnit == 'C') {
                timeAmount = timeAmount / 86400;
            }
            else if (secondUnit == 'D') {
                timeAmount = timeAmount / 604800;
            }
            else if (secondUnit == 'E') {
                timeAmount = timeAmount / 2628000;
            }
            else if (secondUnit == 'F') {
                timeAmount = timeAmount / 31536000;
            }
            break;

        case 'B':
            cout << "What are you converting to?" << endl;
            cout << "A. Seconds" << endl;
            cout << "B. Hours" << endl;
            cout << "C. Days" << endl;
            cout << "D. Weeks" << endl;
            cout << "E. Months" << endl;
            cout << "F. Years" << endl;
            cin >> secondUnit;

            if (secondUnit == 'A') {
                timeAmount = timeAmount * 60;
            }
            else if (secondUnit == 'B') {
                timeAmount = timeAmount /60;
            }
            else if (secondUnit == 'C') {
                timeAmount = timeAmount / 1440;
            }
            else if (secondUnit == 'D') {
                timeAmount = timeAmount / 10080;
            }
            else if (secondUnit == 'E') {
                timeAmount = timeAmount / 43800;
            }
            else if (secondUnit == 'F') {
                timeAmount = timeAmount / 525600;
            }
            break;

        case 'C':
            cout << "What are you converting to?" << endl;
            cout << "A. Seconds" << endl;
            cout << "B. Minutes" << endl;
            cout << "C. Days" << endl;
            cout << "D. Weeks" << endl;
            cout << "E. Months" << endl;
            cout << "F. Years" << endl;
            cin >> secondUnit;

            if (secondUnit == 'A') {
                timeAmount = timeAmount * 3600;
            }
            else if (secondUnit == 'B') {
                timeAmount = timeAmount * 60;
            }
            else if (secondUnit == 'C') {
                timeAmount = timeAmount / 24;
            }
            else if (secondUnit == 'D') {
                timeAmount = timeAmount / 168;
            }
            else if (secondUnit == 'E') {
                timeAmount = timeAmount / 730;
            }
            else if (secondUnit == 'F') {
                timeAmount = timeAmount / 8760;
            }
            break;

        case 'D':
            cout << "What are you converting to?" << endl;
            cout << "A. Seconds" << endl;
            cout << "B. Minutes" << endl;
            cout << "C. Hours" << endl;
            cout << "D. Weeks" << endl;
            cout << "E. Months" << endl;
            cout << "F. Years" << endl;
            cin >> secondUnit;

            if (secondUnit == 'A') {
                timeAmount = timeAmount * 86400;
            }
            else if (secondUnit == 'B') {
                timeAmount = timeAmount * 1440;
            }
            else if (secondUnit == 'C') {
                timeAmount = timeAmount * 24;
            }
            else if (secondUnit == 'D') {
                timeAmount = timeAmount / 7;
            }
            else if (secondUnit == 'E') {
                cout << "Will approximate due to inconsistant timing of months." << endl;
                timeAmount = timeAmount / 30.4166667;
            }
            else if (secondUnit == 'F') {
                timeAmount = timeAmount / 365;
            }
            break;

        case 'E':
            cout << "What are you converting to?" << endl;
            cout << "A. Seconds" << endl;
            cout << "B. Minutes" << endl;
            cout << "C. Hours" << endl;
            cout << "D. Days" << endl;
            cout << "E. Months" << endl;
            cout << "F. Years" << endl;
            cin >> secondUnit;

            if (secondUnit == 'A') {
                timeAmount = timeAmount * 604800;
            }
            else if (secondUnit == 'B') {
                timeAmount = timeAmount * 10080;
            }
            else if (secondUnit == 'C') {
                timeAmount = timeAmount * 168;
            }
            else if (secondUnit == 'D') {
                timeAmount = timeAmount * 7;
            }
            else if (secondUnit == 'E') {
                cout << "Your answer is approximated due to inconsistant timing of months." << endl;
                timeAmount = timeAmount / 4.3452381;
            }
            else if (secondUnit == 'F') {
                cout << "Your answer is approximated due to inconsistant timing of years." << endl;
                timeAmount = timeAmount / 52.143;
            }
            break;

        case 'F':
            cout << "What are you converting to?" << endl;
            cout << "A. Seconds" << endl;
            cout << "B. Minutes" << endl;
            cout << "C. Hours" << endl;
            cout << "D. Days" << endl;
            cout << "E. Weeks" << endl;
            cout << "F. Years" << endl;
            cin >> secondUnit;

            if (secondUnit == 'A') {
                timeAmount = timeAmount * 2628000;
            }
            else if (secondUnit == 'B') {
                timeAmount = timeAmount * 43800;
            }
            else if (secondUnit == 'C') {
                timeAmount = timeAmount * 730;
            }
            else if (secondUnit == 'D') {
                timeAmount = timeAmount * 30.417;
            }
            else if (secondUnit == 'E') {
                timeAmount = timeAmount * 4.3452381;
            }
            else if (secondUnit == 'F') {
                timeAmount = timeAmount / 12;
            }
            cout << endl << "Your answer is approximated due to the inconsistent timing of months." << endl;
            break;

        case 'G':
            cout << "What are you converting to?" << endl;
            cout << "A. Seconds" << endl;
            cout << "B. Minutes" << endl;
            cout << "C. Hours" << endl;
            cout << "D. Days" << endl;
            cout << "E. Weeks" << endl;
            cout << "F. Months" << endl;
            cin >> secondUnit;

            if (secondUnit == 'A') {
                timeAmount = timeAmount * 31540000;
            }
            else if (secondUnit == 'B') {
                timeAmount = timeAmount * 525600;
            }
            else if (secondUnit == 'C') {
                timeAmount = timeAmount * 8760;
            }
            else if (secondUnit == 'D') {
                timeAmount = timeAmount * 365;
            }
            else if (secondUnit == 'E') {
                timeAmount = timeAmount * 52.143;
            }
            else if (secondUnit == 'F') {
                timeAmount = timeAmount * 12;
            }
            cout << "Your answer is approximated due to inconsistent timing of years." << endl;
            break;

        }

        cout << timeAmount << endl;

}

    return 0;

}
