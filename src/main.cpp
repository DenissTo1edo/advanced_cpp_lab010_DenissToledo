#include "project/hash_table.h"

#include <iostream>
#include <string>

int main() {
    HashTable table(11);
    table.insert("apple", 10);
    table.insert("banana", 20);
    table.insert("carrot", 30);

    std::cout << "Size: " << table.size() << '\n';
    std::cout << "Contains apple? " << (table.contains("apple") ? "yes" : "no") << '\n';
    std::cout << "apple value: " << table.get("apple") << '\n';

    return 0;
}
