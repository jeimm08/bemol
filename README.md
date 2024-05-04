# bemol
Proyecto Colaborativo COMP2315 - Programación Estructurada

Adriana P. Peréz López & Jeisaly Morales Moreno
  - music player
# How to use
- the user will have a selection of artist to choose from (Barbie, Bratz, Monster High or Tangled)
- after choosing from that list, the album(s) of the selected artist will be on screen
- when selecting an album the list of tracks will be on screen, when one is choosen the music will start to play

  ~ while a song is playing the user will have the option to pause, play or go back to the menu
  
- Variables

  ~ art: selection of the artist

  ~ menu = 0: for the loop in the main, continuity of the program

  ~ exit = 0: while the song is playing, the option of going back to the artist selection

  ~ input: for the play or pause of a song
  
  ~ stop: while a song is playing after pausing, is the option to go back to the menu

  ~ color: variable for the HANDLE Function

  ~ brb: selection of the Barbie album

  ~ nc: selection of a song from Barbie in the Nutcracker

  ~ swn: selection of a song from Barbie of Swan Lake

  ~ bza: selection of the Bratz album

  ~ ra: selection of a song from Bratz Rock Angelz

  ~ fd: selection of a song from Bratz Forever Diamondz

  ~ mhby: selection of the Monster High album

  ~ mh: selection of a song from Monster High: Boo York, Boo York!

  ~ tst: selection of the Tangled Soundtrack

  ~ tgld: selection of a song from Tangled Soundtrack

# Version History
- Version 1.00

  ~ made in PSeInt

  ~ this version only had the selection parts, couldn't play sound
- Version 1.01
  
  ~ made in Visual Studio with a programming language (C++)
  
  ~ PlaySound Function

        PlaySound(TEXT(“song.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

  ~ HANDLE Function

        HANDLE variable = GetStdHandle(STD_OUTPUT_HANDLE); SetConsoleTextAttribute(variable, #);
# Additional information
  - What is a bemol?
    
    ~ Bemol is the french word for flat. A flat is a musical symbol that gives the instruction to play a note one semitone lower.
  - In order for the project to work properly the .wav files for the songs are necessary.
  - What have we accomplished since Programming Logic?
    
    ~ the code is the same in terms of structure
    
    ~ for the music player to play the songs

    ~ addition of colors
  - What are the future plans?
    
    ~ the same selected song can be put on loop or play only one time depending on what the user wants
    
    ~ managing to skip a song

# License
GNU GENERAL PUBLIC LICENSE

                   Version 3, 29 June 2007
                   
Copyright (C) 2007 Free Software Foundation, Inc. <https://fsf.org/>

Everyone is permitted to copy and distribute verbatim copies of this license document, but changing it is not allowed.
