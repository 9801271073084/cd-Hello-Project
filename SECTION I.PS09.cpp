#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

// Person structure
struct Person
{
    int id;
    string name;
    int age;
};

// Global database
vector<Person> people;

// PA0901 - Add People
void addPerson()
{
    Person p;

    cout << "\nEnter ID: ";
    cin >> p.id;

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, p.name);

    cout << "Enter Age: ";
    cin >> p.age;

    people.push_back(p);

    cout << "Person added successfully!\n";
}

// PA0902 - Show Added People
void showPeople()
{
    if (people.empty())
    {
        cout << "\nNo people in database.\n";
        return;
    }

    cout << "\n----- PEOPLE DATABASE -----\n";

    for (const auto& p : people)
    {
        cout << "ID: " << p.id
             << " | Name: " << p.name
             << " | Age: " << p.age << endl;
    }
}

// PA0903 - Save People to File
void saveToFile()
{
    ofstream file("people.txt");

    if (!file)
    {
        cout << "Error creating file.\n";
        return;
    }

    for (const auto& p : people)
    {
        file << p.id << ","
             << p.name << ","
             << p.age << endl;
    }

    file.close();

    cout << "Database saved to people.txt\n";
}

// PA0904 - Load People from File
void loadFromFile()
{
    ifstream file("people.txt");

    if (!file)
    {
        cout << "No saved file found.\n";
        return;
    }

    people.clear();

    string line;

    while (getline(file, line))
    {
        Person p;

        size_t pos1 = line.find(',');
        size_t pos2 = line.rfind(',');

        p.id = stoi(line.substr(0, pos1));
        p.name = line.substr(pos1 + 1, pos2 - pos1 - 1);
        p.age = stoi(line.substr(pos2 + 1));

        people.push_back(p);
    }

    file.close();

    cout << "Database loaded successfully.\n";
}

// PA0905 - Search by Name
void searchPerson()
{
    cin.ignore();

    string searchName;

    cout << "\nEnter name to search: ";
    getline(cin, searchName);

    bool found = false;

    for (const auto& p : people)
    {
        if (p.name == searchName)
        {
            cout << "\nPerson Found:\n";
            cout << "ID: " << p.id
                 << " | Name: " << p.name
                 << " | Age: " << p.age << endl;

            found = true;
        }
    }

    if (!found)
    {
        cout << "Person not found.\n";
    }
}

// PA0906 - Remove Person by ID
void removePerson()
{
    int id;

    cout << "\nEnter ID to remove: ";
    cin >> id;

    for (auto it = people.begin(); it != people.end(); ++it)
    {
        if (it->id == id)
        {
            people.erase(it);
            cout << "Person removed successfully.\n";
            return;
        }
    }

    cout << "ID not found.\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n=========================\n";
        cout << " PEOPLE DATABASE SYSTEM\n";
        cout << "=========================\n";
        cout << "1. Add Person\n";
        cout << "2. Show People\n";
        cout << "3. Save To File\n";
        cout << "4. Load From File\n";
        cout << "5. Search By Name\n";
        cout << "6. Remove By ID\n";
        cout << "0. Exit\n";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                addPerson();
                break;

            case 2:
                showPeople();
                break;

            case 3:
                saveToFile();
                break;

            case 4:
                loadFromFile();
                break;

            case 5:
                searchPerson();
                break;

            case 6:
                removePerson();
                break;

            case 0:
                cout << "Goodbye!\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 0);

    return 0;
}