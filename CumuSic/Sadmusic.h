//Matthew Strong
// Recitation 201: Arcadia Zhang
// CSCI 1300 Assignment 8
// Sadmusic.h file

#ifndef SADMUSIC_H


#define SADMUSIC_H
//defining this new class, as this is required as part of the C++ syntax needed to declare a class.
#include <iostream>
#include <windows.h>
#include <vector>
#include "Miscmusic.h"

using namespace std;


// One of the harder classes to create.
class Sadmusic
{
    public:
        Sadmusic();
        //default constructor and destructor
        int createMusic(string);
        // will create a random music with the user's desired basis (scale), it will not sound great, but should only
        // produce notes in the scale that is a string.

        int upOctave(string);
        // plays the music up an octave.
        int fasterSadmusic(int);
        // plays faster sad music or slower with the desired tempo.
        string getNote();
        // Gets a note and displays what note it is (example: A4)
        void setTempo(int);
        // setter for the tempo
        int getTempo();
        // getter for the tempo
        string ChangeKey(string);

        // changes the key
        void playCool();


        // plays cools music

        bool addPlatform();

        //adds object from class Miscmusic into a vector.
        int tempo;
        // the tempo
        int placement;
        string madenotes[1000];
        // the music produced is stored into two arrays, one with the name of the note, and the other with
        // the frequency of the note.
        float madenotesfreq[1000];
        string motifnotes[1000];
        float motifnotesfreq[1000];
        // all motif notes
        string minor[8];

        float minorfreq[8];
        // the scales in which everything will be based off of.

        string notes[200];
        float notesfreq[200];
        int midi[70];
        // the standard library that I created in my default constructor.
        vector<Miscmusic> Arraymisc;
        // vector of user defined objects.






        // the library, essentially, where I can get any note along with its frequency.


};



#endif // SADMUSIC_H
