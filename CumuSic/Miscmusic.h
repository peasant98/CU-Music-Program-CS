//Matthew Strong
// Recitation 201: Arcadia Zhang
// CSCI 1300 Assignment 8
// Miscmusic.h file

#ifndef MISCMUSIC_H




#define MISCMUSIC_H
//defining this new class, as this is required as part of the C++ syntax needed to declare a class.

#include <iostream>
#include <fstream>
#include <windows.h>
#include "Readmusic.h"
using namespace std;
//this class should not be too hard compared to Happymusic and Sadmusic.
class Miscmusic
{

    public:
        Miscmusic();
        //default constructor and destructor
        int playFundamentals(string);
        // plays a simple note exercise based on the desired note for the user.
        void playmajorscale(string);
        // plays a major scale based on the desired starting note.
        void playarpeggio(string);
        // plays an arpeggio based on the desired starting note.
        void playminorscale(string);
        // plays a minor scale based on the desired starting note.
        void playeighthnote(string);
        // plays one eighth note
        void playquarternote(string);
        // plays one quarter note
        void playhalfnote(string);
        // plays one half note
        void playwholenote(string);
        // plays one whole note
        void playRemington(string);

        // plays Remington exercise with a user inputted starting note.

        void setTempo(int);
        // sets the tempo
        int getTempo();
        // gets the current tempo
        void readFile(string, string);
        // reads a file about music fundamentals.

        int tempo;
        // data member for the tempo

        string notes[70];
        // array for every note I will need
        float notesfreq[70];
        // array for all of the note frequencies I will need.
        int midi[70];
        // the midi values, each different value is associated with a different note.

};

#endif // MISCMUSIC_H


