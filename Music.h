#include <iostream>
#include <string>
using namespace std;

class Music
{
private:
    string song_name;
    string kind_of_song;
    string song_author;
    string song_language;
    int song_release;

public:
    void SetSongName(string name);
    string GetSongName() const;
    void SetSongKind(string kind);
    string GetSongKind() const;
    void SetAuthor(string author);
    string GetAuthor() const;
    void SetLanguage(string language);
    string GetLanguage() const;
    void SetSongRelease(int release);
    int GetSongRelease() const;
    void Lyrics();
    void Melody();
    void Mood();
    void Vocabulary();
    void Headphones();
};
