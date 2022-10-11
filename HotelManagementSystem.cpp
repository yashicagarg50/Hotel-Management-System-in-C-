#include<iostream>
using namespace std;

int main()
{
    int quant;
    int choice;
    //Quantity
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles, Qshake = 0, Qchicken = 0;
    //food items sold
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;
    //Total price of items
    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;

    cout << " \n\t Quantity of items we have ";
    cout << "\n Rooms available: ";
    cin >> Qrooms;
    cout << "\n Quantity of  pasta : ";
    cin >> Qpasta;
    cout << "\n Quantity of burger : ";
    cin >> Qburger;
    cout << "\n Quantity of noodles : ";
    cin >> Qnoodles;
    cout << "\n Quantity of shake : ";
    cin >> Qshake;
    cout << "\n Quantity of chicken-roll : ";
    cin >> Qchicken;
    
    m:

    cout << "\n\t\t\t Please select from the menu options ";
    cout << "\n\n 1) Rooms ";
    cout << "\n\n 2) Pasta ";
    cout << "\n\n 3) Burger ";
    cout << "\n\n 4) Noodles ";
    cout << "\n\n 5) Shake ";
    cout << "\n\n 6) Chicken-Roll ";
    cout << "\n\n 7) Information regarding sales and collection ";
    cout << "\n\n 8) Exit ";

    cout << "\n\n Please Enter your choice ! ";
    cin >> choice;

    switch(choice)
    {
        case 1:
        {
            cout << "\n\n Enter the number of rooms required:  ";
            cin >> quant;
            if(Qrooms-Srooms >= quant)
            {
                Srooms = Srooms + quant;
                Total_rooms = Total_rooms + quant * 1200;
                cout << "\n\n\t\t" << quant << "room/rooms have been alloted to you and your family ";
            }
            else
            {
                cout << "\n\tOnly " << Qrooms - Srooms << "rooms are available in Hotel as of now. ";
                
            
            }
            break;
        }
        case 2:
        {
            cout << "\n\n Enter the Quantity of pasta you want to order :  ";

           
            cin >> quant;
            if(Qpasta-Spasta >= quant)
            {
                Spasta = Spasta + quant;
                Total_pasta = Total_pasta + quant * 250;
                cout << "\n\n\t\t" << quant << "pastas/pasta's order has been placed ";
            }
            else
            {
                cout << "\n\tOnly " << Qpasta - Spasta << "pastas can be prepared in Hotel as of now. ";
                
            }
            break;
        }
        case 3:
        {
            cout << "\n\n Enter the Quantity of burgers you want to order :  ";

           
            cin >> quant;
            if(Qburger-Sburger >= quant)
            {
                Sburger = Sburger + quant;
                Total_burger =Total_burger  + quant * 236;
                cout << "\n\n\t\t" << quant << "burger /burgers 's order has been placed ";
            }
            else
            {
                cout << "\n\tOnly " << Qburger - Sburger << "burgers  can be prepared in Hotel as of now. ";
                
            }
            break;
        }
        case 4:
        {
             cout << "\n\n Enter the Quantity of noodles you want to order :  ";

           
            cin >> quant;
            if(Qnoodles-Snoodles >= quant)
            {
                Snoodles = Snoodles + quant;
                Total_noodles =Total_noodles  + quant * 236;
                cout << "\n\n\t\t" << quant << "noodles /noodles 's order has been placed ";
            }
            else
            {
                cout << "\n\tOnly " << Qnoodles - Snoodles << "noodles  can be prepared in Hotel as of now. ";
                
            }
            break;
        }
        case 5:
        {
            cout << "\n\n Enter the Quantity of shake you want to order :  ";

           
            cin >> quant;
            if(Qshake-Sshake >= quant)
            {
                Sshake = Sshake + quant;
                Total_shake = Total_shake + quant * 250;
                cout << "\n\n\t\t" << quant << "shakes/shake's order has been placed ";
            }
            else
            {
                cout << "\n\tOnly " << Qshake - Sshake << "shakes can be prepared in Hotel as of now. ";
                
            }
            break;
        }
        case 6:
        {
            cout << "\n\n Enter the Quantity of chicken-rolls you want to order :  ";

           
            cin >> quant;
            if(Qchicken-Schicken >= quant)
            {
                Schicken = Schicken + quant;
                Total_chicken = Total_chicken + quant * 250;
                cout << "\n\n\t\t" << quant << "chicken-rolls/chicken-rolls's order has been placed ";
            }
            else
            {
                cout << "\n\tOnly " << Qchicken - Schicken << "chicken-rolls can be prepared in Hotel as of now. ";
                
            }
            break;
        }
        case 7:
        {
            cout << "\n\t\tDetails of sales and collections ";
            cout << "\n\n Number of rooms we had : " << Qrooms;
            cout << "\n\n Number of rooms we gave for rent : " << Srooms;
            cout << "\n\n Remaining rooms : " << Qrooms - Srooms;
            cout << "\n\n Total rooms collection for the day : " << Total_rooms;

            cout << "\n\n Number of Pastas we had : " << Qrooms;
            cout << "\n\n Number of Pastas we gave for order : " << Spasta;
            cout << "\n\n Remaining Pastas : " << Qpasta - Spasta;
            cout << "\n\n Total Pastas collection for the day : " << Total_pasta;

            cout << "\n\n Number of burgers we had : " << Qburger;
            cout << "\n\n Number of burgers we gave for order : " << Sburger;
            cout << "\n\n Remaining burgers : " << Qburger - Sburger;
            cout << "\n\n Total burgers collection for the day : " << Total_burger; 

            cout << "\n\n Number of noodles we had : " << Qnoodles;
            cout << "\n\n Number of noodles we gave for order : " << Snoodles;
            cout << "\n\n Remaining noodles : " << Qnoodles - Snoodles;
            cout << "\n\n Total noodles collection for the day : " << Total_noodles;

            cout << "\n\n Number of shakes we had : " << Qshake;
            cout << "\n\n Number of shakes we gave for order : " << Sshake;
            cout << "\n\n Remaining shakes : " << Qshake - Sshake;
            cout << "\n\n Total shakes collection for the day : " << Total_shake;

            cout << "\n\n Number of chicken-rolls we had : " << Qchicken;
            cout << "\n\n Number of chicken-rolls we gave for order : " << Schicken;
            cout << "\n\n Remaining chicken-rolls : " << Qchicken - Schicken;
            cout << "\n\n Total chicken-rolls collection for the day : " << Total_chicken;
            break;
        }
        case 8:
        {
            exit(0);
        }
        default:
        {
            cout << "\n Please select the numbers mentioned above! ";
            break;
        }
    }
    goto m;
}