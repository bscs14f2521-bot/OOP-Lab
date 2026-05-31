#include <iostream>
#include <string>

using namespace std;

// Define the MovieData structure
struct MovieData {
    string title;
    string director;
    int yearReleased;
    int runningTime; // in minutes
};

// Function prototype to display movie information
void displayMovie(MovieData m);

int main() {
    // Create and initialize the first MovieData variable
    MovieData movie1;
    movie1.title = "Inception";
    movie1.director = "Christopher Nolan";
    movie1.yearReleased = 2010;
    movie1.runningTime = 148;

    // Create and initialize the second MovieData variable
    MovieData movie2;
    movie2.title = "The Godfather";
    movie2.director = "Francis Ford Coppola";
    movie2.yearReleased = 1972;
    movie2.runningTime = 175;

    // Pass each variable to the display function
    cout << "--- Movie Records ---" << endl;
    displayMovie(movie1);
    displayMovie(movie2);

    return 0;
}

// Function to display the information in a clearly formatted manner
void displayMovie(MovieData m) {
    cout << "\nTitle:         " << m.title << endl;
    cout << "Director:      " << m.director << endl;
    cout << "Year Released: " << m.yearReleased << endl;
    cout << "Running Time:  " << m.runningTime << " minutes" << endl;
    cout << "---------------------------" << endl;
}
