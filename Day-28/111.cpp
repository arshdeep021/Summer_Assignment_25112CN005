#include <iostream>
using namespace std;

struct Seat
{
    int booked;
    char name[50];
    int age;
};

int main()
{
    Seat seats[50];
    int choice, seatNo;
    const int price = 500;

    for (int i = 0; i < 50; i++)
    {
        seats[i].booked = 0;
    }

    do
    {
        cout << "\n--- TICKET BOOKING SYSTEM ---\n";
        cout << "1. View Seats\n";
        cout << "2. Book Seat\n";
        cout << "3. Cancel Booking\n";
        cout << "4. View Booking Details\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            for (int i = 0; i < 50; i++)
            {
                cout << "Seat " << i + 1 << ": ";
                cout << (seats[i].booked ? "Booked\n" : "Available\n");
            }
            break;

        case 2:
        {
            cout << "Enter seat number (1-50): ";
            cin >> seatNo;
            cin.ignore();

            if (seatNo < 1 || seatNo > 50)
            {
                cout << "Invalid seat number.\n";
                break;
            }

            if (seats[seatNo - 1].booked == 1)
            {
                cout << "Seat already booked.\n";
                break;
            }

            char name[50];
            int age;

            cout << "Enter Name: ";
            cin.getline(name, 50);

            cout << "Enter Age: ";
            cin >> age;

            cout << "\nTicket Price: Rs. " << price << endl;
            cout << "Select Payment Method:\n";
            cout << "1. Cash\n2. UPI\n3. Card\n";
            int payChoice;
            cin >> payChoice;

            if (payChoice < 1 || payChoice > 3)
            {
                cout << "Invalid payment method.\n";
                break;
            }

            cout << "Processing payment...\n";
            cout << "Payment Successful!\n";

            seats[seatNo - 1].booked = 1;
            for (int i = 0; name[i] != '\0'; i++)
            {
                seats[seatNo - 1].name[i] = name[i];
            }
            seats[seatNo - 1].name[50 - 1] = '\0';
            seats[seatNo - 1].age = age;

            cout << "Seat booked successfully.\n";
            break;
        }

        case 3:
            cout << "Enter seat number to cancel: ";
            cin >> seatNo;

            if (seatNo < 1 || seatNo > 50)
            {
                cout << "Invalid seat number.\n";
            }
            else if (seats[seatNo - 1].booked == 0)
            {
                cout << "Seat already available.\n";
            }
            else
            {
                seats[seatNo - 1].booked = 0;
                cout << "Booking cancelled.\n";
            }
            break;

        case 4:
            cout << "Enter seat number: ";
            cin >> seatNo;

            if (seatNo < 1 || seatNo > 50)
            {
                cout << "Invalid seat number.\n";
            }
            else if (seats[seatNo - 1].booked == 0)
            {
                cout << "Seat is not booked.\n";
            }
            else
            {
                cout << "\nSeat " << seatNo << " Details:";
                cout << "\nName: " << seats[seatNo - 1].name;
                cout << "\nAge: " << seats[seatNo - 1].age << endl;
            }
            break;

        case 5:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 5);

    return 0;
}