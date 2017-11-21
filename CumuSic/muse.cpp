#include <iostream>
using namespace std;
#include "CFugueLib.h"
void main()
{
    CFugue::Player player;
        // Play the Music Notes on the default MIDI output port
    player.Play("C D E F G A B");
    return 0;

}
