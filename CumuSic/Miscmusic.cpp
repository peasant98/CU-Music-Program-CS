#include <iostream>
#include <windows.h>
#include <math.h>
#include <string>
#include <sstream>
#include "Miscmusic.h"
using namespace std;


// this is the easiest class to do.
Miscmusic::Miscmusic()
{
    cout << "Welcome to the CumuSic Program, Version 1.0. This program is a simple C++ music program. " << endl;
    cout << "This is the Miscellaneous section of the music program." << endl;
    cout << "The tempo has now been set to 120 beats per minute." << endl;
    // setting  a tempo.
    tempo = 120;


    for (int i = 0; i<70; i++)
    {
        notes[i] = "";
        notesfreq[i] = 0.0;
        midi[i] = 0;

    }
    // initializing everything in the arrays

    for (int i =30; i<90; i++)
    {
        int octave = (i-12)/12;
        string note;
        stringstream ss;
        ss << "" << octave;
        // looping through i from 30 to 90
        // I used 90 to not create a small value to ensure that the arrays will be filled.
        // calculating the octave of each midi
        // making the octave into a string with stringstream.

        float freq = (440*pow(2, (0.083333*(i-69))));
        // this is the frequency and it is calculated from an equation with the midi value. Each note has a different midi value,
        // and the frequency of each note can be calculated with this formula.
        for (int b=0; b<70; b++)
        {
            // going through the size of the midi, notes, and notesfreq array in order to place each note into an array.
            if (notes[b] == "" && notesfreq[b] == 0.0 && midi[b] == 0)
            {

                // this states that if there are open spaces for the note, frequency, and midi value, I can insert
                // these values.

                if (i%12 == 0)
                {

                    // If the midi value is divisible by 12 so that the modulus is 0, the note is C, I can then
                    // place all of the qualities of C into arrays. I break out of the for loop after this.
                    // also, note that I add C to ss.str() in order to create C4 or C5 or whatever it is that the octave is.
                    notes[b] = "C" + ss.str();
                    notesfreq[b] = freq;
                    midi[b] = i;
                    break;


                }
                if (i%12 == 1)
                {
                    // If the midi value is divisible by 12 so that the modulus is 1, the note is C# or Db, I can then
                    // place all of the qualities of this note into arrays. I break out of the for loop after this.
                    // Because C# and Db are the same pitch but have different context, I have one spot in my arrays for C# and another separate spot
                    // for Db. Then I break out of the loop after this.
                    notes[b] = "C#" + ss.str();
                    notesfreq[b] = freq;
                    midi[b] = i;
                    b = b +1;
                    notes[b] = "Db" + ss.str();
                    notesfreq[b] = freq;
                    midi[b] = i;
                    break;

                }
                if (i%12 == 2)
                {
                    // If the midi value is divisible by 12 so that the modulus is 2, the note is D, I can then
                    // place all of the qualities of D into arrays. I break out of the for loop after this.
                    // also, note that I add D to ss.str() in order to create C4 or C5 or whatever it is that the octave is.
                    notes[b] = "D" + ss.str();
                    notesfreq[b] = freq;
                    midi[b] = i;
                    break;

                }
                if (i%12 == 3)
                {
                    // It would be tedious to repeat these same statements from the previous if statements, this if statement puts these notes into array if
                    // the modulus value is 3.
                    notes[b] = "D#" + ss.str();
                    notesfreq[b] = freq;
                    midi[b] = i;
                    b = b +1;
                    notes[b] = "Eb" + ss.str();
                    notesfreq[b] = freq;
                    midi[b] = i;
                    break;

                }
                if (i%12 == 4)
                {
                    // It would be tedious to repeat these same statements from the previous if statements, this if statement puts these notes into array if
                    // the modulus value is 3.
                    notes[b] = "E" + ss.str();
                    notesfreq[b] = freq;
                    midi[b] = i;


                    break;


                }
                if (i%12 == 5)
                {
                    // It would be tedious to repeat these same statements from the previous if statements, this if statement puts these notes into array if
                    // the modulus value is 5.
                    notes[b] = "F" + ss.str();
                    notesfreq[b] = freq;
                    midi[b] = i;


                    break;


                }
                if (i%12 == 6)
                {
                    // It would be tedious to repeat these same statements from the previous if statements, this if statement puts these notes into array if
                    // the modulus value is 6.
                    notes[b] = "F#" + ss.str();
                    notesfreq[b] = freq;
                    midi[b] = i;
                    b = b +1;
                    notes[b] = "Gb" + ss.str();
                    notesfreq[b] = freq;
                    midi[b] = i;
                    break;

                }
                if (i%12 == 7)
                {
                    // It would be tedious to repeat these same statements from the previous if statements, this if statement puts these notes into array if
                    // the modulus value is 7.
                    notes[b] = "G" + ss.str();
                    notesfreq[b] = freq;
                    midi[b] = i;
                    break;

                }
                if (i%12 == 8)
                {
                    // It would be tedious to repeat these same statements from the previous if statements, this if statement puts these notes into array if
                    // the modulus value is 8.
                    notes[b] = "G#" + ss.str();
                    notesfreq[b] = freq;
                    midi[b] = i;
                    b = b +1;
                    notes[b] = "Ab" + ss.str();
                    notesfreq[b] = freq;
                    midi[b] = i;
                    break;

                }
                if (i%12 == 9)
                {
                    // It would be tedious to repeat these same statements from the previous if statements, this if statement puts these notes into array if
                    // the modulus value is 9.
                    notes[b] = "A" + ss.str();
                    notesfreq[b] = freq;
                    midi[b] = i;
                    break;

                }
                if (i%12 == 10)
                {
                    // It would be tedious to repeat these same statements from the previous if statements, this if statement puts these notes into array if
                    // the modulus value is 10.

                    notes[b] = "A#" + ss.str();
                    notesfreq[b] = freq;
                    midi[b] = i;
                    b = b +1;
                    notes[b] = "Bb" + ss.str();
                    notesfreq[b] = freq;
                    midi[b] = i;
                    break;

                }
                if (i%12 == 11)
                {
                    // It would be tedious to repeat these same statements from the previous if statements, this if statement puts these notes into array if
                    // the modulus value is 11.
                    notes[b] = "B" + ss.str();
                    notesfreq[b] = freq;
                    midi[b] = i;
                    break;

                }
            }
        }



    }

    //create every note AFTER initializing the array
    // have the frequencies as well
    // have default tempo.

    // showing that the notes were successfully put into the arrays.
    for (int i = 0; i<70; i++)
    {

        cout << notes[i] << ", " << notesfreq[i] << ", " << midi[i] << endl;
    }
}
// plays basis notes
int Miscmusic::playFundamentals(string beginote)
{
    cout << "Now, fundamentals will be played with the beginning note of " << beginote << endl;
    int beginmidi;
    int startindex;
    int secondindex;
    int thirdindex;
    int fourthindex;
    int fifthindex;
    int secondmidi = 1;
    int thirdmidi = 1;
    int fourthmidi = 1;
    int fifthmidi = 1;
    // showing that the notes were successfully put into the arrays.
    for (int i =0; i<70; i++)
    {
        // searching through the notes and midi array
        if (beginote == notes[i])
        {
            // if the string basis, from the parameters of the method, is equal to
            // the note found in the array, it couts "found"
            // and then it sets the beginning midi value to midi[i], then
            // makes the start index i, and all of the other midi values are based on the start midi and the theory of the major scale.
            // each midi is a set value from the beginning midi because that will change the note. The values of 2,4, 5, 7, etc. will create the
            // sounds that can be heard as a major scale.
            beginmidi = midi[i];
            startindex = i;
            secondmidi = beginmidi +2;
            thirdmidi = beginmidi +4;
            fourthmidi = beginmidi +5;
            fifthmidi = beginmidi +7;

        }
        // all of the midis have been set already, so all of these if statements check to see if the midi equals midi[i]. If so, the corresponding index is set to i, and this
        // will factor in later with the construction of a major scale.
        else if (secondmidi == midi[i])
        {
            secondindex = i;


        }
        else if (thirdmidi == midi[i])
        {
            thirdindex = i;

        }
        else if (fourthmidi == midi[i])
        {
            fourthindex = i;

        }
        else if (fifthmidi == midi[i])
        {
            fifthindex = i;

        }


    }

    // beeping all of this in a pattern that many musicians play for fundamentals.

    Beep(notesfreq[startindex], (120000.0/tempo));
    Beep(notesfreq[secondindex], (120000.0/tempo));
    Beep(notesfreq[thirdindex], (240000.0/tempo));

    Beep(notesfreq[startindex], (120000.0/tempo));
    Beep(notesfreq[secondindex], (120000.0/tempo));
    Beep(notesfreq[thirdindex], (120000.0/tempo));
    Beep(notesfreq[fourthindex], (240000.0/tempo));

    Beep(notesfreq[startindex], (120000.0/tempo));
    Beep(notesfreq[secondindex], (120000.0/tempo));
    Beep(notesfreq[thirdindex], (120000.0/tempo));

    Beep(notesfreq[fourthindex], (120000.0/tempo));

    Beep(notesfreq[fifthindex], (240000.0/tempo));





}

// major scale, very similar to the last method, except with one aspect.
void Miscmusic::playmajorscale(string beginote)
{
    cout << "Now a major scale will be played with the beginning note of " << beginote << endl;
    int beginmidi;
    int startindex;
    int secondindex;
    int thirdindex;
    int fourthindex;
    int fifthindex;
    int sixthindex;
    int seventhindex;
    int finalindex;
    int secondmidi = 1;
    int thirdmidi = 1;
    int fourthmidi = 1;
    int fifthmidi = 1;
    int sixthmidi = 1;
    int seventhmidi = 1;
    int finalmidi = 1;
    // I have to declare more variables here to account for all of the notes and midis in a major scale.
    for (int i =0; i<70; i++)
    {
        if (beginote == notes[i])
        {
            beginmidi = midi[i];
            startindex = i;
            secondmidi = beginmidi +2;
            thirdmidi = beginmidi +4;
            fourthmidi = beginmidi +5;
            fifthmidi = beginmidi +7;
            sixthmidi = beginmidi + 9;
            seventhmidi = beginmidi + 11;
            finalmidi = beginmidi + 12;

        }
        else if (secondmidi == midi[i])
        {
            secondindex = i;


        }
        else if (thirdmidi == midi[i])
        {
            thirdindex = i;

        }
        else if (fourthmidi == midi[i])
        {
            fourthindex = i;

        }
        else if (fifthmidi == midi[i])
        {
            fifthindex = i;

        }
        else if (sixthmidi == midi[i])
        {
            sixthindex = i;

        }
        else if (seventhmidi == midi[i])
        {
            seventhindex = i;

        }
        else if (finalmidi == midi[i])
        {
            finalindex = i;

        }


    }
    Beep(notesfreq[startindex], (120000.0/tempo));
    Beep(notesfreq[secondindex], (60000.0/tempo));
    Beep(notesfreq[thirdindex], (60000.0/tempo));
    Beep(notesfreq[fourthindex], (60000.0/tempo));
    Beep(notesfreq[fifthindex], (60000.0/tempo));
    Beep(notesfreq[sixthindex], (60000.0/tempo));
    Beep(notesfreq[seventhindex], (60000.0/tempo));
    Beep(notesfreq[finalindex], (120000.0/tempo));

    // plays the scale.
    cout << "You heard a " << beginote << " major scale at " <<  tempo <<  "bpm." << endl;



}
// similar to major scale
void Miscmusic::playminorscale(string beginote)
{

    cout << "Now a minor scale will be played with the beginning note of " << beginote << endl;
    int beginmidi;
    int startindex;
    int secondindex;
    int thirdindex;
    int fourthindex;
    int fifthindex;
    int sixthindex;
    int seventhindex;
    int finalindex;
    int secondmidi = 1;
    int thirdmidi = 1;
    int fourthmidi = 1;
    int fifthmidi = 1;
    int sixthmidi = 1;
    int seventhmidi = 1;
    int finalmidi = 1;
    for (int i =0; i<70; i++)
    {
        if (beginote == notes[i])
        {
            // the only difference here is the difference between midis.
            beginmidi = midi[i];
            startindex = i;
            secondmidi = beginmidi +2;
            thirdmidi = beginmidi +3;
            fourthmidi = beginmidi +5;
            fifthmidi = beginmidi +7;
            sixthmidi = beginmidi + 8;
            seventhmidi = beginmidi + 10;
            finalmidi = beginmidi + 12;

        }
        else if (secondmidi == midi[i])
        {
            secondindex = i;


        }
        else if (thirdmidi == midi[i])
        {
            thirdindex = i;

        }
        else if (fourthmidi == midi[i])
        {
            fourthindex = i;

        }
        else if (fifthmidi == midi[i])
        {
            fifthindex = i;

        }
        else if (sixthmidi == midi[i])
        {
            sixthindex = i;

        }
        else if (seventhmidi == midi[i])
        {
            seventhindex = i;

        }
        else if (finalmidi == midi[i])
        {
            finalindex = i;

        }


    }
    Beep(notesfreq[startindex], (120000.0/tempo));
    Beep(notesfreq[secondindex], (60000.0/tempo));
    Beep(notesfreq[thirdindex], (60000.0/tempo));
    Beep(notesfreq[fourthindex], (60000.0/tempo));
    Beep(notesfreq[fifthindex], (60000.0/tempo));
    Beep(notesfreq[sixthindex], (60000.0/tempo));
    Beep(notesfreq[seventhindex], (60000.0/tempo));
    Beep(notesfreq[finalindex], (120000.0/tempo));
    // beeping all of the frequencies in any minor scale in any key

    cout << "You heard a " << beginote << " minor scale at " <<  tempo <<  "bpm." << endl;
}

// similar to minor scale, less notes.
void Miscmusic::playarpeggio(string beginote)
{
    cout << "Now, fundamentals will be played with the beginning note of " << beginote << endl;
    int beginmidi;
    int startindex;
    int secondindex;
    int thirdindex;
    int fourthindex;

    int secondmidi = 1;
    int thirdmidi = 1;
    int fourthmidi = 1;

    for (int i =0; i<70; i++)
    {
        if (beginote == notes[i])
        {
            // will find the chord notes of this key
            beginmidi = midi[i];
            startindex = i;
            secondmidi = beginmidi +4;
            thirdmidi = beginmidi +7;
            fourthmidi = beginmidi +12;

        }
        else if (secondmidi == midi[i])
        {
            secondindex = i;


        }
        else if (thirdmidi == midi[i])
        {
            thirdindex = i;

        }
        else if (fourthmidi == midi[i])
        {
            fourthindex = i;

        }



    }
    // plays the notes in a pattern that is user defined by me, not random.
    Beep(notesfreq[startindex], (60000.0/tempo));
    Beep(notesfreq[secondindex], (60000.0/tempo));
    Beep(notesfreq[thirdindex], (60000.0/tempo));
    Beep(notesfreq[fourthindex], (60000.0/tempo));
    Beep(notesfreq[thirdindex], (60000.0/tempo));
    Beep(notesfreq[secondindex], (60000.0/tempo));

    Beep(notesfreq[startindex], (30000.0/tempo));
    Beep(notesfreq[secondindex], (30000.0/tempo));
    Beep(notesfreq[thirdindex], (30000.0/tempo));
    Beep(notesfreq[fourthindex], (30000.0/tempo));
    Beep(notesfreq[thirdindex], (30000.0/tempo));
    Beep(notesfreq[secondindex], (30000.0/tempo));
    Beep(notesfreq[startindex], (240000.0/tempo));

    cout << "You heard a " << beginote << " arpeggio at " <<  tempo <<  "bpm." << endl;


}
// plays eighth note
void Miscmusic::playeighthnote(string beginote)
{
    cout << "Now, the note " << beginote << " will be played in eighth notes at " << tempo << "bpm." << endl;
    int startindex;
    for (int i =0; i<70; i++)
    {
        if (beginote == notes[i])
        {

            startindex = i;
        }
    }
    for (int i =0; i<1; i++ )
    {
        // plays a few eighth notes.

        Beep(notesfreq[startindex], (30000.0/tempo));
        Beep(notesfreq[startindex], (30000.0/tempo));
        Beep(notesfreq[startindex], (30000.0/tempo));
        Beep(notesfreq[startindex], (30000.0/tempo));
    }



}
// plays quarter note
void Miscmusic::playquarternote(string beginote)
{
   cout << "Now, the note " << beginote << " will be played in quarter notes at " << tempo << "bpm." << endl;
    int startindex;
    for (int i =0; i<70; i++)
    {
        // looks for the note in the array.
        if (beginote == notes[i])
        {

            startindex = i;
        }
    }
    for (int i =0; i<1; i++ )
    {

        // plays some notes

        Beep(notesfreq[startindex], (60000.0/tempo));
        Beep(notesfreq[startindex], (60000.0/tempo));
        Beep(notesfreq[startindex], (60000.0/tempo));
        Beep(notesfreq[startindex], (60000.0/tempo));
    }






}

// plays half note
void Miscmusic::playhalfnote(string beginote)
{
    cout << "Now, the note " << beginote << " will be played in half notes at " << tempo << "bpm." << endl;
    int startindex;
    for (int i =0; i<70; i++)
    {
        if (beginote == notes[i])
        {

            startindex = i;
        }
    }
    for (int i =0; i<1; i++ )
    {

        // plays some notes.

        Beep(notesfreq[startindex], (120000.0/tempo));
        Beep(notesfreq[startindex], (120000.0/tempo));
        Beep(notesfreq[startindex], (120000.0/tempo));
        Beep(notesfreq[startindex], (120000.0/tempo));
    }



}

// plays whole note
void Miscmusic::playwholenote(string beginote)
{
    cout << "Now, the note " << beginote << " will be played in whole notes at " << tempo << "bpm." << endl;
    int startindex;
    for (int i =0; i<70; i++)
    {
        if (beginote == notes[i])
        {

            startindex = i;
        }
    }
    for (int i =0; i<1; i++ )
    {

        // plays a few notes

        Beep(notesfreq[startindex], (240000.0/tempo));
        Beep(notesfreq[startindex], (240000.0/tempo));
        Beep(notesfreq[startindex], (240000.0/tempo));
        Beep(notesfreq[startindex], (240000.0/tempo));
    }




}
// plays a famous exercise used in band.
void Miscmusic::playRemington(string beginote)
{
    cout << "Now, the famous Remington exercise will be played with the starting note of " << beginote << " and descending downwards." << endl;
    int beginmidi;
    int startindex;
    int secondindex;
    int thirdindex;
    int fourthindex;
    int fifthindex;
    int sixthindex;
    int seventhindex;
    int finalindex;
    int secondmidi = 100;
    int thirdmidi = 100;
    int fourthmidi = 100;
    int fifthmidi = 100;
    int sixthmidi = 100;
    int seventhmidi = 100;
    int finalmidi = 100;
    for (int i =69; i>=0; i--)
    {
        // goes from the end of the array to the beginning
        // because each new index will be at lower note than the others, so everything is
        // reversed compared to everything else.
        if (beginote == notes[i])
        {
            beginmidi = midi[i];
            startindex = i;
            secondmidi = beginmidi -1;
            thirdmidi = beginmidi -2;
            fourthmidi = beginmidi -3;
            fifthmidi = beginmidi -4;
            sixthmidi = beginmidi -5;
            seventhmidi = beginmidi - 6;
            finalmidi = beginmidi - 7;


        }
        else if (secondmidi == midi[i])
        {
            secondindex = i;


        }
        else if (thirdmidi == midi[i])
        {
            thirdindex = i;

        }
        else if (fourthmidi == midi[i])
        {
            fourthindex = i;

        }
        else if (fifthmidi == midi[i])
        {
            fifthindex = i;

        }
        else if (sixthmidi == midi[i])
        {
            sixthindex = i;

        }
        else if (seventhmidi == midi[i])
        {
            seventhindex = i;

        }
        else if (finalmidi == midi[i])
        {
            finalindex = i;

        }


    }
    // all these beeps are from the notes I had in each index.
    Beep(notesfreq[startindex], (120000.0/tempo));
    Beep(notesfreq[secondindex], (120000.0/tempo));
    Beep(notesfreq[startindex], (240000.0/tempo));

    Beep(notesfreq[startindex], (120000.0/tempo));
    Beep(notesfreq[thirdindex], (120000.0/tempo));
    Beep(notesfreq[startindex], (240000.0/tempo));

    Beep(notesfreq[startindex], (120000.0/tempo));
    Beep(notesfreq[fourthindex], (120000.0/tempo));
    Beep(notesfreq[startindex], (240000.0/tempo));

    Beep(notesfreq[startindex], (120000.0/tempo));
    Beep(notesfreq[fifthindex], (120000.0/tempo));
    Beep(notesfreq[startindex], (240000.0/tempo));

    Beep(notesfreq[startindex], (120000.0/tempo));
    Beep(notesfreq[sixthindex], (120000.0/tempo));
    Beep(notesfreq[startindex], (240000.0/tempo));

    Beep(notesfreq[startindex], (120000.0/tempo));
    Beep(notesfreq[seventhindex], (120000.0/tempo));
    Beep(notesfreq[startindex], (240000.0/tempo));

    Beep(notesfreq[startindex], (120000.0/tempo));
    Beep(notesfreq[finalindex], (120000.0/tempo));
    Beep(notesfreq[startindex], (240000.0/tempo));





}
// set the tempo
void Miscmusic::setTempo(int newtempo)
{
    tempo = newtempo;
    cout << "The tempo has now been set to " << newtempo << " beats per minute." << endl;


}

//returns the current tempo.
int Miscmusic::getTempo()
{
    return tempo;

}

//reads a file.

void Miscmusic::readFile(string filname, string outfile)
{

    ifstream myfile;
    ofstream myfile1;
    myfile.open(filname);
    myfile1.open(outfile);
    string line;
    // opens the file
    if (myfile.is_open())
    {
        getline(myfile, line);

        while (! myfile.eof())
        {
            // plays scale based on what is put into the file.
            // references the previous methods from this class.
            // For example, if the line contains the word "major",
            getline(myfile, line);
            if (line == "major")
            {
                playmajorscale("C4");
                myfile1 << " Difficulty = 5/10" << endl;
            }
            else if (line == "minor")
            {
                playminorscale("C4");
                myfile1 << " Difficulty = 7/10" << endl;
            }
            else if (line == "arpeggio")
            {
                playarpeggio("C4");
                myfile1 << " Difficulty = 8/10" << endl;
            }
            else if (line == "quarter")
            {
                playquarternote("C4");
                myfile1 << " Difficulty = 1/10" << endl;
            }
            else if (line == "half")
            {
                 playhalfnote("C4");
                 myfile1 << " Difficulty = 2/10" << endl;
            }
            else if (line == "whole")
            {
                playwholenote("C4");
                myfile1 << " Difficulty = 3/10" << endl;
            }
            else if (line == "eighth")
            {
                playeighthnote("C4");
                myfile1 << " Difficulty = 4/10" << endl;
            }
            else
            {

                cout << "There is nothing left to read." << endl;
            }




        }
    }
    // if the file fails to open.
    else
    {

        cout << "The file failed to open" << endl;
    }

}


