#include "Music.h"

#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

    void Music::SetSongName(string name) {
        this->song_name = name;
    }
    string Music::GetSongName() const {
        return this->song_name;
    }

    void Music::SetSongKind(string kind) {
        this->kind_of_song = kind;
    }
    string Music::GetSongKind() const {
        return this->kind_of_song;
    }

    void Music::SetAuthor(string author) {
        this->song_author = author;
    }
    string Music::GetAuthor() const {
        return this->song_author;
    }

    void Music::SetLanguage(string language) {
        this->song_language = language;
    }
    string Music::GetLanguage() const {
        return this->song_language;
    }

    void Music::SetSongRelease(int release) {
        if (release == 2022)
        {
            this->song_release = release;
        }
        else
        {
            cout << "Song release year is incorrect" << endl;
        }
    }
    int Music::GetSongRelease() const {
        return this->song_release;
    }

    void Music::Lyrics() {
        cout << "How could I forget" << "\n" << "The day you lied to me\n";
    }

    void Music::Melody() {
        cout << "â³äòâîðþºòüñÿ ïðèºìíà ìåëîä³ÿ\n";
    }

    void Music::Mood() {
        cout << "ÿêà ÷óäîâà ï³ñíÿ\n";
    }

    void Music::Vocabulary() {
        cout << "î, íîâå ñëîâî\n";
    }

    void Music::Headphones() {
        cout << "*ïîêà÷óþ ãîëîâîþ ó ðèòì ìóçèêè*\n";
    }
