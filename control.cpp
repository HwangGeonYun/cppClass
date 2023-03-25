//
// Created by ghkdw on 2023-03-20.
//

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <regex>

using namespace std;

string changeToSmallLetter(string& filtered){

    string toSmallLetter = "";
    stringstream stream;

    stream.str(filtered);
    char alpabet;

    int filteredLength = 0;
    while(filteredLength<filtered.length()){
        filteredLength++;

        stream>>alpabet;
        if(alpabet<=90 && alpabet>=65)
            alpabet += 32;
        toSmallLetter += alpabet;
    }

    return toSmallLetter;
}



int main(){

    string str;
    map<string, size_t> words;
    //words.insert({});

    while(cin>>str && str != "^"){

        string filtered {std::regex_replace(str, std::regex("[.|,|:|;"
                                                            "|]"),"")};

        //stringstream stream;

        string toSmallLetter = changeToSmallLetter(filtered);

        auto search = words.find(toSmallLetter);
        if(search != words.end())
            words[toSmallLetter]++;
        else
            words.insert({toSmallLetter, 1});
    }

    cout << "#Words " << words.size();

    vector<size_t> numsOfWords;
    map<string, size_t>::iterator iter;


    for(iter = words.begin(); iter != words.end(); iter++){
        numsOfWords.push_back(iter->second);
    }

    sort(begin(numsOfWords), end(numsOfWords), std::greater<int>());


    //cout << "\n";

    std::map<string, size_t> top5Words;

    std::vector<string> wishFindWordsList;


    //단어 입력
    while(cin >> str  && str != "QUIT"){
        string toSmallLetter = changeToSmallLetter(str);
        wishFindWordsList.push_back(toSmallLetter);
    }


    cout << "Top 5 Word Frequencies\n";

    int i = 0;
    while(i<5){
        for(auto word: words) {
            if(word.second >= numsOfWords[i] && top5Words.find(word.first)==top5Words.end()) {
                top5Words.insert(word);
                cout << (i++)+1 << " " << word.first << ": " << word.second << "\n";
                break;
            }
        }
    }


    //numsOfWords[4]

    cout << "Find Word Frequencies\n";

    vector<string>::iterator word;
    for(word = wishFindWordsList.begin() ; word != wishFindWordsList.end(); word++){
        if(auto search = words.find(*word); search!= words.end())
            cout << *word << ": " << words.find(*word)->second <<"\n";
        else
            cout << *word << ": 0" <<"\n";
    }

    cout << "\nBye!" << endl;

    return 0;
}