#include<iostream>
#include<string>

using namespace std;

struct MovieData {
    string title;
    string director;
    int YearReleased;
};
// here is the function for taking data for a data set 
MovieData createMovieData() {
    MovieData movie;
    cout << "Enter the title of the movie: " << endl;
    getline(cin, movie.title);

    cout << "Enter the name of the director: " << endl;
    getline(cin, movie.director);

    cout << "Enter the year of release: " << endl;
    cin >> movie.YearReleased;
   

    return movie;
}
// using const to dont  modify the code take a same a given
void displaymoviedata(const MovieData& movie) {
    cout << "Title         : " << movie.title << endl;
    cout << "Director      : " << movie.director << endl;
    cout << "Released Year : " << movie.YearReleased << endl;
}
// here is the main 
int main() {
    MovieData movie1, movie2;

    cout << "Enter the data for movie 1: " << endl;
    movie1 = createMovieData();

    cout << "Enter the data for movie 2: " << endl;
    movie2 = createMovieData();

    displaymoviedata(movie1);       // calling fun and displaying data for movie 1 
    displaymoviedata(movie2);       // calling the and displaying the fun for movie 2

    return 0;
}

