#include <iostream>

using namespace std;


void showMenu(double currentTotal) {
// Recursive function to display the menu and handle user choices
void showMenu() {
    int choice;

    // Display the restaurant menu and current total bill
    cout << "\n--- Restaurant Menu ---";
    cout << "\nCurrent Bill: Rs. " << currentTotal << "\n";
    // Display the restaurant menu
    cout << "\n--- Restaurant Menu ---\n";
    cout << "1. Burger - Rs. 120\n";
    cout << "2. Pizza  - Rs. 250\n";
    cout << "3. Pasta  - Rs. 180\n";
    cout << "4. Exit & Checkout\n";
    cout << "Enter your choice : ";
    cout << "4. Exit\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    
    // Process the user's choice using a switch statement
    switch (choice) {
        case 1:
            cout << "Added Burger to your order.\n";
            currentTotal += 120;
            cout << "You ordered a Burger.\n";
            break;
        case 2:
            cout << "Added Pizza to your order.\n";
            currentTotal += 250;
            cout << "You ordered a Pizza.\n";
            break;
        case 3:
            cout << "Added Pasta to your order.\n";
            currentTotal += 180;
            cout << "You ordered Pasta.\n";
            break;
        case 4:
cout << "\nThank you for dining with us!\n";
            cout << "Your Final Total Bill is: Rs. " << currentTotal << "\n";
            return; 
            cout << "Thank you! Exiting the program.\n";
            return; // Base case: exits the recursive function when option 4 is chosen
        default:
            cout << "Invalid choice! Please select a valid option from the menu.\n";
    }

    
    showMenu(currentTotal);
    // Recursive call to repeat the menu
    showMenu();
}

int main() {
    
    showMenu(0.0);
    // Start the recursive menu loop
    showMenu();

    return 0;
}
