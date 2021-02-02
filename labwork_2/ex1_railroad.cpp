#include <iostream>

using namespace std;

struct Car
{
    int passenger_number;
    char name;
    Car *next;
};

void print_list(Car *n){
    int length = 0;
    while (n != NULL)
    {
        cout << "Car name: " << n->name << "\n";
        cout << "Passenger number: " << n->passenger_number << "\n";
        n = n->next;
        length++;
    }
    cout << "Length of the train is " << length << "\n";
    
}

int main(int argc, char const *argv[])
{   
    Car *car_init = new Car;

    while (true)
    {   
        int option;
        print_list(car_init);
        cout << "Please choose options below: \n";
        
        if 
    }
    


    return 0;
}

