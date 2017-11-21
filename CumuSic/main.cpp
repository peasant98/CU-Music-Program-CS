#include <iostream>
#include <windows.h>
#include <math.h>
#include <string>
#include <sstream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "Miscmusic.h"
#include "Happymusic.h"
#include "Sadmusic.h"
using namespace std;
int main ()

{

    // the main function here tests out the aspects of each class, it is straightforward.


    Miscmusic misc;
    misc.readFile("miscin.txt", "miscout.txt");
    cout << misc.getTempo() << endl;
    misc.playarpeggio("C4");
    misc.playeighthnote("B3");
    misc.playFundamentals("Bb3");
    misc.playhalfnote("A3");
    misc.playmajorscale("Ab3");
    misc.playminorscale("G3");
    misc.playquarternote("Gb3");
    misc.playRemington("F3");
    misc.playwholenote("E3");

    Readmusic read("tire.txt", "out.txt");
    read.downOctave("tire.txt", "out.txt");
    read.upOctave("tire.txt", "out.txt");
    cout << read.getTempo() << endl;
    read.readthepieces(2);
    read.fasterMusic("tire.txt", "out.txt", 130);
    read.readmore("tire.txt", "out.txt");
    read.setTempo(130);






    Happymusic happy;
    happy.createMusic("C4");
    happy.playcool();
    happy.getNote();
    happy.fasterHappymusic(100);
    happy.changeKey("C4");
    cout << happy.getTempo() << endl;
    happy.setTempo(130);
    happy.upOctave("C4");
    happy.addPlatform();


    Sadmusic sad;
    sad.createMusic("C4");
    sad.fasterSadmusic(130);
    sad.playCool();
    sad.getNote();
    cout << sad.getTempo() << endl;
    sad.setTempo(130);
    sad.ChangeKey("B3");
    sad.upOctave("C4");
    sad.addPlatform();















    if (600>500)
        return 0;

}
