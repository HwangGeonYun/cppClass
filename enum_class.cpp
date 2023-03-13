//
// Created by ghkdw on 2023-03-10.
//
/*
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

enum class Genre{Action = 0, Comedy, Drama, Romance, SciFi};
enum class Rating{ OneStar = 1, TwoStars, ThreeStars, FourStars, FiveStars};




struct movie{
    Genre genre;
    Rating averageRating;
    std::vector<int> ratings;
    int currentSumOfRatings;
    string to_string;
};

int genreToInt(Genre genre){

}

void toString(movie& selectMovie){
    stringstream ss;
    ss << selectMovie.ratings.size() << "ratings, average rating "
       << static_cast<int>(selectMovie.averageRating) << " starts, genre: "
       << static_cast<int>(selectMovie.genre);
    selectMovie.to_string = ss.str();
}

int main(){

    std::map<std::string, movie> nameAndInfomationOfMovie;
    while(true){


        std::string title;
        std::getline(std::cin, title);

        if(title == "q")
            break;
        int genre, rating;

        cin >> genre >> rating;
        cin.ignore();


        if( auto search = nameAndInfomationOfMovie.find(title); search ==nameAndInfomationOfMovie.end()) {
            movie newMovie;
            newMovie.genre = static_cast<Genre>(genre);
            newMovie.ratings.push_back(rating);
            newMovie.currentSumOfRatings = rating;
            newMovie.averageRating = static_cast<Rating>(rating);
            toString(newMovie);
            nameAndInfomationOfMovie.insert({title, newMovie});
        }
        else {
            movie* changeOfMovieInfo;
            changeOfMovieInfo = &(search->second);
            changeOfMovieInfo->ratings.push_back(rating);
            changeOfMovieInfo->currentSumOfRatings += rating;
            changeOfMovieInfo->averageRating
                = static_cast<Rating>(changeOfMovieInfo->currentSumOfRatings / changeOfMovieInfo->ratings.size());
            toString(*changeOfMovieInfo);
        }

    }

    for(auto movie : nameAndInfomationOfMovie){
        cout << movie.first + ": "+ movie.second.to_string << endl;
    }
    return 0;
}*/