// Matthew Strong
// Recitation 201: Arcadia Zhang
// CSCI 1300 Assignment 8
// Readmusic.h file

#ifndef READMUSIC_H
#define READMUSIC_H
//defining this new class, as this is required as part of the C++ syntax needed to declare a class.

#include <iostream>
#include <windows.h>
#include <fstream>
using namespace std;


class Readmusic
{
    public:
        Readmusic();

        //default constructor and destructor
        // This constructor will read in a file, store the names of the pieces into an array, write into a separate file, and produce sounds.
        Readmusic(string, string);
        // constructor that will read in the files.
        void readmore(string, string);

        int upOctave(string, string);
        // Will play the music up an octave
        int downOctave(string, string);
        // Will play the music down an octave.
        int fasterMusic(string, string, int);
        // Based on the tempo desired by the user, the music will be played at a faster tempo, or slower tempo.
        void readthepieces(int);
        // Will return a list of the all the pieces that have been read.
        void setTempo(int);
        // sets the current tempo
        int getTempo();
        // gets the current tempo.

        string readpieces[1000];
        // member with all of the read pieces
        int tempo;
        // the tempo of the music.
        int oct;
        // the octaves level in which the music will be played.
        string notes[70];
        // a large array for the all of the notes that are needed to play decent music.
        float notesfreq[70];
        // the frequency of each note

        int midi[70];

        // all of the midi values that are created within the first constructor.







};




#endif // READMUSIC_H
