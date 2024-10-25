#include <iostream>
#include <map>
#include <string>

int main() {
    // Create a map to store locations with their names and coordinates (latitude, longitude)
    std::map<std::string, std::pair<double, double>> locations;

    int choice;
    std::string name;
    double latitude, longitude;

    do {
        // Display menu
        std::cout << "\n--- Map Program ---\n";
        std::cout << "1. Add Location\n";
        std::cout << "2. View All Locations\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                // Add location
                std::cout << "Enter location name: ";
                std::cin.ignore(); // To ignore the leftover newline from previous input
                std::getline(std::cin, name);
                std::cout << "Enter latitude: ";
                std::cin >> latitude;
                std::cout << "Enter longitude: ";
                std::cin >> longitude;
                locations[name] = {latitude, longitude};
                std::cout << "Location added successfully!\n";
                break;
            }
            case 2: {
                // View all locations
                if (locations.empty()) {
                    std::cout << "No locations available.\n";
                } else {
                    std::cout << "\nList of Locations:\n";
                    for (const auto &loc : locations) {
                        std::cout << "Name: " << loc.first
                                  << " | Latitude: " << loc.second.first
                                  << " | Longitude: " << loc.second.second << "\n";
                    }
                }
                break;
            }
            case 3:
                std::cout << "Exiting program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 3);

    return 0;
}
