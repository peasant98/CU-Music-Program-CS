//Matthew Strong
// Recitation 201: Arcadia Zhang
// CSCI 1300 Assignment 8
// Happymusic.h file

#ifndef HAPPYMUSIC_H



#define HAPPYMUSIC_H
//defining this new class, as this is required as part of the C++ syntax needed to declare a class.

#include <iostream>
#include <windows.h>
#include "Miscmusic.h"
#include <vector>
using namespace std;



// Very similar to Sadmusic, just slightly different musical theory.
class Happymusic
{
    public:
        Happymusic();
        //default constructor and destructor
        void createMusic(string);
        // creates random music with the user's desired scale.

        int upOctave(string);
        // plays the music up an octave.
        int fasterHappymusic(int);
        // plays the music faster based on the tempo desired.
        string getNote();
        // gets a note from the array of created music.
        void setTempo(int);
        // setter for the tempo.
        int getTempo();
        // gets the current tempo.
        int tempo;
        // the member, tempo.
        string changeKey(string);
        // changes key to the desired basis note.
        void playcool();
        // plays a small excerpt of music based on randomly generated motifs.
        bool addPlatform();
        // adds to a vector with objects of class Miscmusic.
        int placement;

        string madenotes[1000];
        float madenotesfreq[1000];
        // two arrays that store information about the randomly created notes.
        string motifnotes[1000];
        float motifnotesfreq[1000];

        // the notes with that contain the motif where everything will be based off of.
        string major[8];
        float majorfreq[8];

        // the basis, or the scale in which everything is based on.
        string notes[70];
        float notesfreq[70];

        // all the notes that will be available. There are not a lot, but I will explain why.

        int midi[70];

        // midi values for notes
        vector<Miscmusic> Arraymisc;

        // vector of objects of type Miscmusic.





        // all the notes I will need.




};


#endif // HAPPYMUSIC_H
