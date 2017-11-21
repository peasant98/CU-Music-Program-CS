#include <iostream>
#include <windows.h>
#include <math.h>
#include <string>
#include <sstream>


#include "Readmusic.h"
using namespace std;

// this is first constructor for the Readmusic class
Readmusic::Readmusic()
{


    cout << "Welcome to the Readmusic program, perhaps the most challenging of all of the programs." << endl;
    tempo = 120;

    for (int i=0; i<1000; i++)
    {

        readpieces[i] = "";
    }
    for (int i = 0; i<70; i++)
    {
        notes[i] = "";
        notesfreq[i] = 0.0;
        midi[i] = 0;

    }
    // these two for loops set everything to 0 or empty quotes as to not create an mess with the program.

    for (int i =30; i<90; i++)
    {
        int octave = (i-12)/12;
        string note;
        stringstream ss;
        ss << "" << octave;
        // looping through i from 30 to 90
        // I used 90 to not create a small value to ensure that the arrays will be filled.
        // calculating the octave of each midi
        // making the octave into a string with stringstream

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
                    // also, note that I add C to ss.str() in order to create C4 or C5 or whatever it is that the octave is
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
                    // the modulus value is 4.
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
                    // the modulus value is 10.
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








// here is another constructor
Readmusic::Readmusic(string filename, string outfile)
{
    // everything until a point is the same as the firs constructor, so I will not comment until
    // I get to the new parts of the program.

    cout << "Welcome to the Readmusic program, perhaps the most challenging of all of the programs." << endl;
    tempo = 120;

    for (int i=0; i<1000; i++)
    {

        readpieces[i] = "";
    }
    for (int i = 0; i<70; i++)
    {
        notes[i] = "";
        notesfreq[i] = 0.0;
        midi[i] = 0;

    }

    for (int i =30; i<90; i++)
    {
        int octave = (i-12)/12;
        string note;
        stringstream ss;
        ss << "" << octave;

        float freq = (440*pow(2, (0.083333*(i-69))));
        for (int b=0; b<70; b++)
        {
            if (notes[b] == "" && notesfreq[b] == 0.0 && midi[b] == 0)
            {

                if (i%12 == 0)
                {
                    notes[b] = "C" + ss.str();
                    notesfreq[b] = freq;
                    midi[b] = i;
                    break;


                }
                if (i%12 == 1)
                {
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
                    notes[b] = "D" + ss.str();
                    notesfreq[b] = freq;
                    midi[b] = i;
                    break;

                }
                if (i%12 == 3)
                {
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
                    notes[b] = "E" + ss.str();
                    notesfreq[b] = freq;
                    midi[b] = i;


                    break;


                }
                if (i%12 == 5)
                {
                    notes[b] = "F" + ss.str();
                    notesfreq[b] = freq;
                    midi[b] = i;


                    break;


                }
                if (i%12 == 6)
                {
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
                    notes[b] = "G" + ss.str();
                    notesfreq[b] = freq;
                    midi[b] = i;
                    break;

                }
                if (i%12 == 8)
                {
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
                    notes[b] = "A" + ss.str();
                    notesfreq[b] = freq;
                    midi[b] = i;
                    break;

                }
                if (i%12 == 10)
                {
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


    for (int i = 0; i<70; i++)
    {

        cout << notes[i] << ", " << notesfreq[i] << ", " << midi[i] << endl;
    }

    // Now I shall comment.
    cout << "Now a file shall be read in." << endl;
    ifstream myfile;
    ofstream file;
    myfile.open(filename);
    file.open(outfile);
    string line;
    string test;
    string test2;
    // declaring strings and opening the fails, as this is fundamental file i/o.


    if (myfile.is_open() && file.is_open())
    {
        // if the files are open, then I get the first line
        // with this first line, I loop through the readpieces array and see if there is an
        // empty space, if there is, then I fill it with the line and output to the outfile stating what the piece is.
        getline(myfile, line);
        for (int b=0; b<1000; b++)
        {

            if (readpieces[b] == "")
            {
                readpieces[b] = line;
                file << line << " is the piece." << endl;
                break;
            }
        }
        // Now that I have the first line out of the way, I can move on to the rest of the file.
        while (! myfile.eof())
        {
            // getting the line, and setting two strings to empty strings. I had to do this because Codeblocks was adding a random extra line
            // when I was saving the file, so I had to account for this with this.
            getline(myfile, line);
            test = "";
            test2 = "";
            cout << line << endl;
            // outputting the line
            for (int z=0; z<(int)line.length(); z++)
            {
                // looping through each line
                // if a character is a space, then
                // I use the substring function to split
                // the line into the note and the length of that note.

                if (line[z] == ',')
                {

                    test = line.substr(0, z);
                    test2 = line.substr(z+2);
                    break;
                }
            }
            for (int a=0; a< 70; a++)
            {
                // going through all of the notes that have been made in the very beginning. If the note is equal to the note that was read in,
                // then I play the note with the specified frequency. I also have if statements that are based on the second part of a read in line,
                // if the string says a specific length, then that length is played.
                //

                if (notes[a] == test)
                {
                    if(test2 == "quarter")
                    {



                        Beep(notesfreq[a], 60000/tempo);
                        break;


                    }
                    else if(test2 == "whole")
                    {
                        Beep(notesfreq[a], 240000/tempo);
                        break;


                    }
                    else if(test2 == "half")
                    {
                        Beep(notesfreq[a], 120000/tempo);
                        break;


                    }
                    else if(test2 == "eighth")
                    {
                        Beep(notesfreq[a], 30000/tempo);
                        break;


                    }

                }
            }
        }
    }
    // If the file fails to open, in which hopefully it does open.
    else
    {
        cout<< "File failed to open."  << endl;
    }





}



void Readmusic::readmore(string filename, string outfile)
{

    // no difference between this and the last constructor except for the fact that I can
    // read in more files here and add more to the readpieces array without resetting it to 0.

    // As such, I will not comment here, but you can look back at the previous constructor to see how  I did this.
    cout << "Now a file shall be read in." << endl;
    ifstream myfile;
    ofstream file;
    myfile.open(filename);
    file.open(outfile);
    string line;
    string test;
    string test2;



    if (myfile.is_open() && file.is_open())
    {
        getline(myfile, line);
        for (int b=0; b<1000; b++)
        {

            if (readpieces[b] == "")
            {
                readpieces[b] = line;
                file << line << " is the piece." << endl;
                break;
            }
        }

        while (! myfile.eof())
        {
            getline(myfile, line);
            test = "";
            test2 = "";
            cout << line << endl;
            for (int z=0; z<(int)line.length(); z++)
            {

                if (line[z] == ',')
                {

                    test = line.substr(0, z);
                    test2 = line.substr(z+2);
                    break;
                }
            }
            for (int a=0; a< 70; a++)
            {

                if (notes[a] == test)
                {
                    if(test2 == "quarter")
                    {
                        cout << "note" << endl;


                        Beep(notesfreq[a], 60000/tempo);
                        break;


                    }
                    else if(test2 == "whole")
                    {
                        Beep(notesfreq[a], 240000/tempo);
                        break;


                    }
                    else if(test2 == "half")
                    {
                        Beep(notesfreq[a], 120000/tempo);
                        break;


                    }
                    else if(test2 == "eighth")
                    {
                        Beep(notesfreq[a], 30000/tempo);
                        break;


                    }

                }
            }
        }
    }

    // If the file fails, but I hope that it will not.
    else
    {
        cout<< "File failed to open."  << endl;
    }



}

// similar to the last method, except everything is up an octave.

int Readmusic::upOctave(string filename, string outfile)
{
    cout << "Now this file will be played up one octave." << endl;
    ifstream myfile;
    ofstream file;
    myfile.open(filename);
    file.open(outfile);
    string line;

    string test;
    string test2;
    if (myfile.is_open() && file.is_open())
    {
        getline(myfile, line);
        for (int b=0; b<1000; b++)
        {

            if (readpieces[b] == "")
            {

                readpieces[b] = line;
                file << line << " is the piece." << endl;
                break;
            }
        }
        while (! myfile.eof())
        {

            getline(myfile, line);
            test = "";
            test2 = "";
            for (int z=0; z<line.length(); z++)
            {
                if (line[z] == ',')
                {
                    test = line.substr(0, z);
                    test2 = line.substr(z+2);
                    cout << test2 << endl;
                }
            }
            for (int a=0; a< 70; a++)
            {

                if (notes[a] == test)
                {
                    if(test2 == "quarter")
                    {
                        Beep(notesfreq[a]*2, 60000/tempo);
                        // that *2 brings everything up an octave.
                        break;


                    }
                    else if(test2 == "whole")
                    {
                        Beep(notesfreq[a]*2, 240000/tempo);
                        break;


                    }
                    else if(test2 == "half")
                    {
                        Beep(notesfreq[a]*2, 120000/tempo);
                        break;


                    }
                    else if(test2 == "eighth")
                    {
                        Beep(notesfreq[a]*2, 30000/tempo);
                        break;


                    }

                }
            }
        }
    }
    // If the file fails.
    else
    {
        cout<< "File failed to open."  << endl;
    }





    return 1;


}
// just like the last method, except everything is down an octave from the original file.
int Readmusic::downOctave(string filename, string outfile)
{
    cout << "Now this file will be played down one octave." << endl;
    ifstream myfile;
    ofstream file;
    myfile.open(filename);
    file.open(outfile);
    string line;
    string test;
    string test2;



    if (myfile.is_open() && file.is_open())
    {
        getline(myfile, line);
        for (int b=0; b<1000; b++)
        {

            if (readpieces[b] == "")
            {

                readpieces[b] = line;
                file << line << " is the piece." << endl;
                break;
            }
        }
        while (! myfile.eof())
        {
            getline(myfile, line);
            test = "";
            test2 = "";
            for (int z=0; z<line.length(); z++)
            {
                if (line[z] == ',')
                {
                    test = line.substr(0, z);
                    test2 = line.substr(z+2);
                }
            }
            for (int a=0; a< 70; a++)
            {

                if (notes[a] == test)
                {
                    if(test2 == "quarter")
                    {
                        Beep(notesfreq[a]*0.5, 60000/tempo);
                        // the first *0.5 means that everything is down an octave.
                        break;


                    }
                    else if(test2 == "whole")
                    {
                        Beep(notesfreq[a]*0.5, 240000/tempo);
                        break;


                    }
                    else if(test2 == "half")
                    {
                        Beep(notesfreq[a]*0.5, 120000/tempo);
                        break;


                    }
                    else if(test2 == "eighth")
                    {
                        Beep(notesfreq[a]*0.5, 30000/tempo);
                        break;


                    }

                }
            }
        }
    }
    // if the file decides to fail.
    else
    {
        cout<< "File failed to open."  << endl;
    }










}

// similar to the last method, except for one small thing, which I will comment.
int Readmusic::fasterMusic(string filename, string outfile, int newtempo)
{
    cout << "Music will now be played at " << newtempo << " beats per minute." << endl;
    ifstream myfile;
    ofstream file;
    myfile.open(filename);
    file.open(outfile);
    string line;
    string test;
    string test2;



    if (myfile.is_open() && file.is_open())
    {
        getline(myfile, line);
        for (int b=0; b<1000; b++)
        {

            if (readpieces[b] == "")
            {

                readpieces[b] = line;
                file << line << " is the piece." << endl;
                break;
            }
        }

        while (! myfile.eof())
        {
            getline(myfile, line);
            test = "";
            test2 = "";
            for (int z=0; z<line.length(); z++)
            {
                if (line[z] == ',')
                {
                    test = line.substr(0, z);
                    test2 = line.substr(z+2);
                }
            }
            for (int a=0; a< 70; a++)
            {

                if (notes[a] == test)
                {
                    if(test2 == "quarter")
                    {
                        Beep(notesfreq[a], 60000/newtempo);
                        // based on the new tempo, which is above
                        // does not change the tempo though.
                        break;


                    }
                    else if(test2 == "whole")
                    {
                        Beep(notesfreq[a], 240000/newtempo);
                        break;


                    }
                    else if(test2 == "half")
                    {
                        Beep(notesfreq[a], 120000/newtempo);
                        break;


                    }
                    else if(test2 == "eighth")
                    {
                        Beep(notesfreq[a]*0.5, 30000/newtempo);
                        break;


                    }

                }
            }
        }
    }

    // If and only if the file fails.
    else
    {
        cout<< "File failed to open."  << endl;
    }








    return 1;



}
// displays the read pieces.
void Readmusic::readthepieces(int amount)
{
    cout << amount << " pieces will now be read." << endl;
    for (int i=0; i<amount; i++)
    {

        cout << readpieces[i] << endl;
    }





}

// sets the tempo, straightforward.
void Readmusic::setTempo(int newtemp)
{
    tempo = newtemp;
    cout << "The new tempo has been now set to " << tempo << " beats per minute." << endl;


}

// gets the tempo.
int Readmusic::getTempo()
{
    return tempo;


}





