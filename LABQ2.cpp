#include<iostream>
using namespace std;

class Favourite_Songs{
    int size;
    string *songs;

public:
    // Constructor initializes size to 0 and songs to nullptr
    Favourite_Songs() : size(0), songs(nullptr) {}

    // Copy Constructor   (am using here member intializer list ))
    Favourite_Songs(const Favourite_Songs & obj) : size(obj.size) {
        songs = new string[size];
        for(int x = 0; x < size; x++){
            songs[x] = obj.songs[x];
        }
    }

    // Destructor
    ~Favourite_Songs(){
        delete [] songs;
    }

    void addSong(){
        string name;
        cout << "Enter name of song: ";
        cin.ignore();       
        getline(cin, name); // Use getline to read the  line
        
        string *temp = new string[size + 1];
        for(int x = 0; x < size; x++){
            temp[x] = songs[x];
        }
        temp[size] = name;
        
        delete [] songs;
        songs = temp;
        size += 1;
    }

    void printSongs(){
        cout << endl;
        for(int x = 0; x < size; x++){
            cout << x + 1 << "." << songs[x] << endl;
        }
        cout << endl;
    }

    void deleteSong(){
        printSongs();
        int choice;
        cout << "Choose a song number to delete: ";
        cin >> choice;
        choice -= 1; 

        if(choice < 0 || choice >= size){
            cout << "Invalid choice" << endl;
            return;
        }

        string *temp = new string[size - 1];
        for(int x = 0, j = 0; x < size; x++){
            if(x != choice){
                temp[j++] = songs[x];
            }
        }

        delete [] songs;
        songs = temp;
        size -= 1;
    }

    void updateSong(){
        printSongs();
        int choice;
        cout << "Choose a song number to update: ";
        cin >> choice;
        choice -= 1; 

        if(choice < 0 || choice >= size){
            cout << "Invalid choice" << endl;
            return;
        }

        string temp;
        cout << "Enter new song name: ";
        cin.ignore(); 
        getline(cin, temp); 

        songs[choice] = temp;
    }
};

int main(){
    Favourite_Songs s;
    Favourite_Songs *backup = nullptr; // Initialize backup pointer to nullptr
    int choice;
    do{
        cout << "1.Add a song" << endl;
        cout << "2.Delete a song" << endl;
        cout << "3.Print favourite songs" << endl;
        cout << "4.Update a song" << endl;
        cout << "5.Create backup" << endl;
        cout << "6.Exit" << endl;
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice){
            case 1:
                s.addSong();
                break;
            case 2:
                s.deleteSong();
                break;
            case 3:
                s.printSongs();
                break;
            case 4:
                s.updateSong();
                break;
            case 5:
                delete backup; // Delete previous backup before creating a new one
                backup = new Favourite_Songs(s);
                break;
            case 6:
                cout << "Exiting program." << endl;
                delete backup; // Clean up backup before exiting
                exit(0);
            default:
                cout << "Invalid choice." << endl;
                break;
        }
    } while(choice != 6);
    return 0;
}

