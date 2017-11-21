#include <iostream>
#include <windows.h>
#include <math.h>
#include <string>
#include <sstream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "Happymusic.h"
#include "Miscmusic.h"
#include <vector>
using namespace std;


Happymusic::Happymusic()
{
    // constructor for Happymusic
    cout << "Welcome to the Happymusic class. This will be more exciting than the Miscellaneous music class. You can generate random music here." << endl;
    tempo = 120;
    for (int i = 0; i<8; i++)
    {

        major[i] = "";
        majorfreq[i] = 0.0;
    }
    for (int i = 0; i<70; i++)
    {
        notes[i] = "";
        notesfreq[i] = 0.0;
        midi[i] = 0;


    }

    for (int i =0; i<1000; i++)
    {

        madenotes[i] = "";
        madenotesfreq[i] = 0.0;
        motifnotes[i] = "";
        motifnotesfreq[i] = 0.0;
    }

    // these three for loops set everything to 0 or empty quotes as to not create an mess with the program.

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
                    // the modulus value is 11.
                    notes[b] = "B" + ss.str();
                    notesfreq[b] = freq;
                    midi[b] = i;
                    break;

                }
            }
        }


    }

    // showing that the notes were successfully put into the arrays.
    for (int i = 0; i<70; i++)
    {

        cout << notes[i] << ", " << notesfreq[i] << ", " << midi[i] << endl;
    }


}


// this next method creates random music.
void Happymusic::createMusic(string basis)
{
    int amount;
    cout << "Now a random piece of music will be created with the Happymusic software." << endl;
    cout << "How many notes do you want to be played: " << endl;
    cin >> amount;
    // asks for amount of random notes.
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
    // declaring many variables here. the indexes are important and will as the midi values.
    for (int i =0; i<70; i++)
    {
        // searching through the notes and midi array
        if (basis == notes[i])
        {
            // if the string basis, from the parameters of the method, is equal to
            // the note found in the array, it couts "found"
            // and then it sets the beginning midi value to midi[i], then
            // makes the start index i, and all of the other midi values are based on the start midi and the theory of the major scale.
            // each midi is a set value from the beginning midi because that will change the note. The values of 2,4, 5, 7, etc. will create the
            // sounds that can be heard as a major scale.
            cout << "found" << endl;
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
    // placing the values of the note frequency and the note itself based on the indexes required.
    // The major scale arrays will have eight notes, and they are based on the index of the note and notefreq array.
    major[0] = notes[startindex];
    majorfreq[0] = notesfreq[startindex];


    major[1] = notes[secondindex];
    majorfreq[1] = notesfreq[secondindex];

    major[2] = notes[thirdindex];
    majorfreq[2] = notesfreq[thirdindex];

    major[3] = notes[fourthindex];
    majorfreq[3] = notesfreq[fourthindex];

    major[4] = notes[fifthindex];
    majorfreq[4] = notesfreq[fifthindex];

    major[5] = notes[sixthindex];
    majorfreq[5] = notesfreq[sixthindex];

    major[6] = notes[seventhindex];
    majorfreq[6] = notesfreq[seventhindex];

    major[7] = notes[finalindex];
    majorfreq[7] = notesfreq[finalindex];
    // Will play the scale.
    for (int i = 0; i<8; i++)
    {

        Beep(majorfreq[i], 500);
    }
    // creating a random seed

    srand (time(NULL) );
    // loops through the amount of notes that the user wants to be played.
    for (int i=0; i<amount; i++)
    {
        int random_x;

        random_x = rand() % 8;
        // sets the int random_x to a random value between 0 and 7
        // so that it can use this as a random value in the major scale.
        cout<< "The note is: " <<major[random_x]<< endl;
        Beep(majorfreq[random_x], 60000/tempo);
        // beeps the random value.
        for (int b=0; b<1000; b++)
        {
            // loops through the whole madenotes and madenotesfreq array, if there is nothing
            // in a slot, we fill it with the random value that was made, then break.

            if (madenotes[b] == "" && madenotesfreq[b] == 0.0)
            {
                madenotes[b] = major[random_x];
                madenotesfreq[b] = majorfreq[random_x];
                break;


            }
        }

    }
}
// plays random music up one octave.
int Happymusic::upOctave(string basis)
{
    // Very same to the createMusic, so it would be a waste of time to comment everything here again except for
    // the differences between this and the previous method.
    int amount;
    cout << "Now a random piece of music will be created with the Happymusic software. This time we will play an octave up" << endl;
    cout << "How many notes do you want to be played: " << endl;
    cin >> amount;
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
        if (basis == notes[i])
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
    major[0] = notes[startindex];
    majorfreq[0] = notesfreq[startindex];

    major[1] = notes[secondindex];
    majorfreq[1] = notesfreq[secondindex];

    major[2] = notes[thirdindex];
    majorfreq[2] = notesfreq[thirdindex];

    major[3] = notes[fourthindex];
    majorfreq[3] = notesfreq[fourthindex];

    major[4] = notes[fifthindex];
    majorfreq[4] = notesfreq[fifthindex];

    major[5] = notes[sixthindex];
    majorfreq[5] = notesfreq[sixthindex];

    major[6] = notes[seventhindex];
    majorfreq[6] = notesfreq[seventhindex];

    major[7] = notes[finalindex];
    majorfreq[7] = notesfreq[finalindex];
    for (int i = 0; i<8; i++)
    {

        Beep(majorfreq[i], 500);
    }

    srand (time(NULL) );
    for (int i=0; i<amount; i++)
    {
        int random_x;

        random_x = rand() % 8;
        cout<< "The note is: " <<major[random_x]<< " up an octave." << endl;
        Beep(majorfreq[random_x] *2, 60000/tempo);
        // twice the frequency allows the note to be played up an octave, that is one of the only differences here
        // between this and the other method above.
        for (int b=0; b<1000; b++)
        {

            if (madenotes[b] == "" && madenotesfreq[b] == 0.0)
            {


                madenotes[b] = major[random_x] + " up an octave.";
                madenotesfreq[b] = majorfreq[random_x] *2;
                // puts these notes into the madenotes array, and mentions that a note, such as "C4", was played up an octave.
                break;


            }
        }

    }
    // returns 1.
    return 1;
}









// Very similar to the last method, so it would make sense to comment the differences between this and the other method.
int Happymusic::fasterHappymusic(int newtempo)
{
    int amount;
    string basis;

    cout << "Now, happy music will be played at " << newtempo << " beats per minute." << endl;
    cout << "How many notes do you want to be played? " << endl;
    cin >> amount;
    cout << "What major scale?" << endl;
    // asks for key
    cin >> basis;
    // this process will create the major scale.
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
        if (basis == notes[i])
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
    major[0] = notes[startindex];
    majorfreq[0] = notesfreq[startindex];

    major[1] = notes[secondindex];
    majorfreq[1] = notesfreq[secondindex];

    major[2] = notes[thirdindex];
    majorfreq[2] = notesfreq[thirdindex];

    major[3] = notes[fourthindex];
    majorfreq[3] = notesfreq[fourthindex];

    major[4] = notes[fifthindex];
    majorfreq[4] = notesfreq[fifthindex];

    major[5] = notes[sixthindex];
    majorfreq[5] = notesfreq[sixthindex];

    major[6] = notes[seventhindex];
    majorfreq[6] = notesfreq[seventhindex];

    major[7] = notes[finalindex];
    majorfreq[7] = notesfreq[finalindex];
    for (int i = 0; i<8; i++)
    {

        Beep(majorfreq[i], 500);
    }
    //random seed is created.
    srand (time(NULL) );
    for (int i=0; i<amount; i++)
    {
        int random_x;

        random_x = rand() % 8;
        cout<< "The note is: " <<major[random_x]<< endl;
        Beep(majorfreq[random_x], 60000/newtempo);
        // notice the divided by newtempo, that is the only difference. I divided by 60000 through
        // deriving a formula for playing quarter notes based on the tempo. Newtempo is temporary and does not affect tempo, which is a data member.
        for (int b=0; b<1000; b++)
        {

            if (madenotes[b] == "" && madenotesfreq[b] == 0.0)
            {
                madenotes[b] = major[random_x];
                madenotesfreq[b] = majorfreq[random_x];
                break;


            }
        }

    }
    return 1;





}

string Happymusic::getNote()
{
    string thenote;
    cout << "What note do you want to get from all of the notes that have been made?" << endl;
    cin >> thenote;
    int thecount = 0;
    // asks user for note
    for (int i =0; i<1000; i++)
    {

        if (madenotes[i] == thenote)
        {

            thecount = thecount + 1;
            // if the loop sees the note, it increments count by 1.

        }
    }
    // the value of the amount of the times this note shows up is outputted.
    cout << "There are " << thecount << " notes that have been produced with the note name of " << thenote << endl;
    // returns a cool phrase.
    return "Music!";








}
void Happymusic::setTempo(int newtempo)
{
    tempo = newtempo;
    cout << "The tempo has now been changed to " << tempo << " beats per minute." << endl;
    // sets the tempo, here is my setter.


}

int Happymusic::getTempo()
{
    return tempo;
    // returns the tempo, which is an integer value.



}

//changes the key. It returns the note that the key was changed to. I will not comment this because it is the exact same as the create music method
//except no random music is created, just the basis scale, the major scale, is changed.

string Happymusic::changeKey(string basis)
{
    cout << "The key will now be changed to the key of " << basis << " major." << endl;
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
        if (basis == notes[i])
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
    major[0] = notes[startindex];
    majorfreq[0] = notesfreq[startindex];

    major[1] = notes[secondindex];
    majorfreq[1] = notesfreq[secondindex];

    major[2] = notes[thirdindex];
    majorfreq[2] = notesfreq[thirdindex];

    major[3] = notes[fourthindex];
    majorfreq[3] = notesfreq[fourthindex];

    major[4] = notes[fifthindex];
    majorfreq[4] = notesfreq[fifthindex];

    major[5] = notes[sixthindex];
    majorfreq[5] = notesfreq[sixthindex];

    major[6] = notes[seventhindex];
    majorfreq[6] = notesfreq[seventhindex];

    major[7] = notes[finalindex];
    majorfreq[7] = notesfreq[finalindex];
    for (int i = 0; i<8; i++)
    {

        Beep(majorfreq[i], 500);
    }

    return basis;

}


// this is the most fun method and creates music based on a motif.
void Happymusic::playcool()
{
    string enter;
    int motif;
    cout << "Now, for the real show." << endl;
    cout << "Are you ready?" << endl;
    cin >> enter;
    cout << "Your answer was " << enter << ". But we are going to start anyways." << endl;
    cout << "First choose the amount of notes you want to have your motif based on: " << endl;
    cin >> motif;
    cout << "Cool, your motif will be based on the key you defined in the create music method" << endl;
    // asks user for amount of notes and if they are ready.
    for (int p =0; p<1000; p++)
    {
        //sets everything in the motifnotes and motifnotesfreq to clear for the next motif to be created.

        motifnotes[p] = "";
        motifnotesfreq[p] = 0.0;
    }
    // random seed is created.

    srand (time(NULL) );
    for (int i=0; i<motif; i++)
    {
        int random_x;

        random_x = rand() % 8;
        cout<< "The note is: " <<major[random_x]<< endl;
        Beep(majorfreq[random_x], 60000/tempo);
        // plays random notes, but in the later for loop,
        // each of these random notes is placed into the motifnotes array as well as
        // the motif note freq array.
        for (int b=0; b<1000; b++)
        {

            if (motifnotes[b] == "" && motifnotesfreq[b] == 0.0)
            {
                motifnotes[b] = major[random_x];
                motifnotesfreq[b] = majorfreq[random_x];
                break;


            }
        }

    }


    cout << "Here we go with this motif." << endl;

    // a statement of here we go.

    //Essentially, all of this code is just using the motif in many ways:

    for (int i =0; i<motif; i++)
    {
        // original motif.
        cout << motifnotesfreq[i] << endl;

        Beep(motifnotesfreq[i], 60000/tempo);
    }


    for (int i =0; i<motif; i++)
    {
        // motif original, then played up octave.

        Beep(motifnotesfreq[i], 30000/tempo);
        Beep(motifnotesfreq[i] *2, 30000/tempo);

    }

    for (int i= 0; i<motif; i++)
    {
        // playing more notes
        Beep(motifnotesfreq[i], 60000/tempo);
        Beep(motifnotesfreq[i+1], 30000/tempo);


    }

    for (int i =0; i<motif; i++)
    {
        // messing around with octaves
        Beep(motifnotesfreq[i], 30000/tempo);
        Beep(motifnotesfreq[i] *2, 30000/tempo);
        Beep(motifnotesfreq[i+1], 30000/tempo);

    }

    for (int i =0; i<motif; i++)
    {
        // melody in half notes

        Beep(motifnotesfreq[i], 120000/tempo);


    }

    for (int i =0; i<motif; i++)
    {

        // melody in quarter notes.

        Beep(motifnotesfreq[i], 60000/tempo);


    }

    for (int i =0; i<motif; i++)
    {
        // melody in eighth notes.

        Beep(motifnotesfreq[i], 30000/tempo);


    }

    for (int i =0; i<motif; i++)
    {
        // melody up an octave in eighth notes.

        Beep(motifnotesfreq[i]*2, 30000/tempo);


    }
    for (int i =0; i<motif; i++)
    {
        // melody in quarter notes.

        Beep(motifnotesfreq[i], 60000/tempo);


    }

    for (int i =0; i<motif; i++)
    {
        // going through every note in the melody,
        // then going through every note in the major scale/

        // if the motif note being played is the same as the major scale note. I play that motif note plus
        // the next note up.
        for (int b =0; b<8; b++)
        {
            if (motifnotesfreq[i] == majorfreq[b])
            {
                if (b == 7)
                {
                    Beep(motifnotesfreq[i], 60000/tempo);
                    Beep(majorfreq[0], 30000/tempo);
                }
                else
                {
                    Beep(motifnotesfreq[i], 60000/tempo);

                    Beep(majorfreq[b+1], 30000/tempo);
                }

            }

        }





    }


    for (int i =0; i<motif; i++)
    {
        // going through every note in the melody,
        // then going through every note in the major scale/

        // if the motif note being played is the same as the major scale note. I play that motif note plus
        // the next note down.
        for (int b =0; b<8; b++)
        {
            if (motifnotesfreq[i] == majorfreq[b])
            {
                if (b == 0)
                {
                    Beep(motifnotesfreq[i], 60000/tempo);
                    Beep(majorfreq[b+1], 30000/tempo);
                }
                else
                {
                    Beep(motifnotesfreq[i], 60000/tempo);

                    Beep(majorfreq[b-1], 30000/tempo);
                }

            }

        }
    }




    for (int i =0; i<motif; i++)
    {
        // going through every note in the melody,
        // then going through every note in the major scale/

        // if the motif note being played is the same as the major scale note. I play that motif note plus
        // the next TWO notes up.
        for (int b =0; b<8; b++)
        {
            if (motifnotesfreq[i] == majorfreq[b])
            {
                if (b == 6 || b==7)
                {
                    Beep(motifnotesfreq[i], 60000/tempo);
                    Beep(majorfreq[0], 30000/tempo);
                    Beep(majorfreq[1], 30000/tempo);
                }
                else
                {
                    Beep(motifnotesfreq[i], 60000/tempo);

                    Beep(majorfreq[b+1], 30000/tempo);
                    Beep(majorfreq[b+2], 30000/tempo);
                }

            }

        }
    }

    for (int i =0; i<motif; i++)
    {
        // going through every note in the melody,
        // then going through every note in the major scale/

        // if the motif note being played is the same as the major scale note. I play that motif note plus
        // the next note up, three times.
        for (int b =0; b<8; b++)
        {
            if (motifnotesfreq[i] == majorfreq[b])
            {
                if (b == 7)
                {
                    Beep(motifnotesfreq[i], 30000/tempo);
                    Beep(majorfreq[7], 30000/tempo);
                    Beep(majorfreq[7], 30000/tempo);
                    Beep(majorfreq[7], 30000/tempo);
                }
                else
                {
                    Beep(motifnotesfreq[i], 30000/tempo);
                    Beep(majorfreq[b+1], 30000/tempo);
                    Beep(majorfreq[b+1], 30000/tempo);
                    Beep(majorfreq[b+1], 30000/tempo);
                }

            }

        }
    }

    for (int i =0; i<motif; i++)
    {
        // more repitition.
        for (int b =0; b<8; b++)
        {
            if (motifnotesfreq[i] == majorfreq[b])
            {
                if (b == 7)
                {
                    Beep(motifnotesfreq[i], 30000/tempo);
                    Beep(majorfreq[7], 30000/tempo);
                    Beep(majorfreq[7], 30000/tempo);
                    Beep(majorfreq[7], 30000/tempo);
                }
                else
                {
                    Beep(motifnotesfreq[i], 60000/tempo);

                    Beep(majorfreq[b+1], 30000/tempo);
                    Beep(majorfreq[b+1], 30000/tempo);
                }

            }

        }
    }


    for (int i =0; i<motif; i++)
    {
        // playing each motif note along with every note of the scale
        // as we come to the finale.

        Beep(motifnotesfreq[i], 60000/tempo);

        for (int b =0; b<8; b++)
        {
            Beep(motifnotesfreq[i], 60000/tempo);
            Beep(majorfreq[b], 30000/tempo);

        }
    }


    for (int i =0; i<motif; i++)
    {
        // melody octave down

        Beep(motifnotesfreq[i] *0.5, 30000/tempo);


    }
    for (int i =0; i<motif; i++)
    {
        // melody

        Beep(motifnotesfreq[i], 30000/tempo);


    }

    for (int i =0; i<motif; i++)
    {
        // melody octave up

        Beep(motifnotesfreq[i] *2, 30000/tempo);


    }
    for (int i =0; i<motif; i++)
    {
        // melody octave up, regular, and down.
        Beep(motifnotesfreq[i] *0.5, 30000/tempo);
        Beep(motifnotesfreq[i], 30000/tempo);

        Beep(motifnotesfreq[i] *2, 30000/tempo);


    }
    // ends on resolving note.

    Beep(majorfreq[0], 240000/tempo);








}

bool Happymusic::addPlatform()
{
    // constructing an object from class Miscmusic and putting it into a vector.

    Miscmusic misc;
    Arraymisc.push_back(misc);
    cout << "Platform added!" << endl;
    return true;
}





