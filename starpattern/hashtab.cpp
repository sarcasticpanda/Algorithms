#include <iostream>
#include <string>
using namespace std;

class HashTable {
private:
    static const int tableSize = 10; // Size of the hash table
    string table[tableSize];         // Hash table array

public:
    // Simple hash function that uses the division method
    int hashFunction(string key) {
        int hash = 0;
        for (int i = 0; i < key.length(); i++) {
            hash += key[i]; // Summing ASCII values of each character
        }
        return hash % tableSize; // Modulus with table size
    }

    // Insert a key into the hash table
    void insert(string key) {
        int index = hashFunction(key);
        if (table[index] == "") {
            table[index] = key;
            cout << "Inserted '" << key << "' at index " << index << endl;
        } else {
            cout << "Collision occurred at index " << index << " for key '" << key << "'!" << endl;
        }
    }

    // Display the hash table
    void displayTable() {
        for (int i = 0; i < tableSize; i++) {
            if (table[i] != "") {
                cout << "Index " << i << ": " << table[i] << endl;
            } else {
                cout << "Index " << i << ": Empty" << endl;
            }
        }
    }
};

int main() {
    HashTable hashTable;

    hashTable.insert("apple");
    hashTable.insert("banana");
    hashTable.insert("cherry");
    hashTable.insert("date");
    hashTable.insert("elderberry");

    cout << "\nHash Table:" << endl;
    hashTable.displayTable();

    return 0;
}
