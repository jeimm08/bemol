#include <iostream>
#include <windows.h> // system(), colores
#include <mmsystem.h> // PlaySound
#include <string> // toupper
#include <fstream> // notepad
#pragma comment(lib, "winmm.lib") // hace que la cancion funcione
using namespace std;

//****************************************** Source: link *******************************************************
// Barbie - The Nutcracker
void theNutcracker() {

    cout << "Playing The Nutcracker (Theme): " << endl;
    PlaySound(TEXT("nutcracker_theme.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Vuelve al menu
        system("cls");
    }
    else {
        int stop = 0; // Buscar manera de salir del loop 
        while (stop <= 3) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0); // buscar playsound
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("nutcracker_theme.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input); // se puede eliminar
            system("cls");
            stop++;
        }
    }
    //********************************************************************************
}
void plumFairies() {

    cout << "Playing Dance of The Sugar Plum Fairies: " << endl;
    PlaySound(TEXT("sugar_plum_fairy.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("sugar_plum_fairy.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }


}
void snowFairies() {

    cout << "Playing Dance of The Snow Fairies: " << endl;
    PlaySound(TEXT("snow_fairies.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("snow_fairies.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }

}
void springFairies() {
    cout << "Playing Dance of The Spring Fairies: " << endl;
    PlaySound(TEXT("spring.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("spring.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }

}
void russianDance() {

    cout << "Playing Russian Dance: " << endl;
    PlaySound(TEXT("russian_dance.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
    // name of the sound file, (NULL: value = 0), (SND_FILENAME: location of the file), (SND_ASYNC: pause the audio), (SND_LOOP: loop sound)
    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("russian_dance.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }


} // comments
void plumPrincess() {
    cout << "Playing The Sugar Plum Princess: " << endl;
    PlaySound(TEXT("sugar_princess.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("sugar_princess.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }

}
void nutcrackerMarch() {
    cout << "Playing The Nutcracker (March): " << endl;
    PlaySound(TEXT("march.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("march.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }

}


// Barbie - Swan Lake
void swanlake() {
    cout << "Playing Swan Lake (Theme): " << endl;
    PlaySound(TEXT("swanLakeTheme.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("swanLakeTheme.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }

}
void baker() {
    cout << "Playing Bakery Dance: " << endl;
    PlaySound(TEXT("bakeryDance.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("bakeryDance.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void dateNight() {
    cout << "Playing Date Night: " << endl;
    PlaySound(TEXT("dateNight.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("dateNight.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void spanish() {
    cout << "Playing Spanish Dance: " << endl;
    PlaySound(TEXT("spanishDance.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("spanishDance.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void hungarian() {
    cout << "Playing Hungarian Dance: " << endl;
    PlaySound(TEXT("hungarianDance.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("hungarianDance.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void danceLesson() {
    cout << "Playing Dance Lesson With The Fairy Queen: " << endl;
    PlaySound(TEXT("danceLessonFairy.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("danceLessonFairy.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void odiles() {
    cout << "Playing Odiles Dance: " << endl;
    PlaySound(TEXT("odilesDance.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("odilesDance.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}


// Bratz - Rock Angelz
void soGood() {
    cout << "Playing So Good" << endl;
    PlaySound(TEXT("So Good.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("So Good.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void changeTheWorld() {
    cout << "Playing Change The World" << endl;
    PlaySound(TEXT("Change The World.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("Change The World.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void iDontCare() {
    cout << "Playing I Don't Care" << endl;
    PlaySound(TEXT("I Don't Care.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("I Don't Care.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void allAboutYou() {
    cout << "Playing All About You" << endl;
    PlaySound(TEXT("All About You.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("All About You.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void whoIAm() {
    cout << "Playing Who I Am" << endl;
    PlaySound(TEXT("Who I Am.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("Who I Am.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void soWhat() {
    cout << "Playing So What" << endl;
    PlaySound(TEXT("So What.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("So What.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void youThink() {
    cout << "Playing You Think" << endl;
    PlaySound(TEXT("You Think.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("You Think.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void itCouldBeYours() {
    cout << "Playing It Could Be Yours" << endl;
    PlaySound(TEXT("Bratz - It Could Be Yours.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("It Could Be Yours.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void lookinGood() {
    cout << "Playing Lookin' Good" << endl;
    PlaySound(TEXT("Lookin' Good.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("Lookin' Good.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void rockTheWorld() {
    cout << "Playing Rock The World" << endl;
    PlaySound(TEXT("Rock The World.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("Rock The World.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void standOut() {
    cout << "Playing Stand Out" << endl;
    PlaySound(TEXT("Stand Out.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("Stand Out.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void nobodysGirl() {
    cout << "Playing Nobody's Girl" << endl;
    PlaySound(TEXT("Nobody's Girl.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("Nobody's Girl.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}


// Bratz - Forever Diamondz
void ooohFashion() {
    cout << "Playing Oooh Fashion" << endl;
    PlaySound(TEXT("Ooooh Fashion.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("Ooooh Fashion.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void wazzUp() {
    cout << "Playing Wazz Up" << endl;
    PlaySound(TEXT("Wazz Up.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("Wazz Up.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void keepItUp() {
    cout << "Playing Keep It Up" << endl;
    PlaySound(TEXT("Keep It Up.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("Keep It Up.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void whatsGoinOn() {
    cout << "Playing What's Goin' On" << endl;
    PlaySound(TEXT("What's Goin' On.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("What's Goin' On.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void bestFriends() {
    cout << "Playing Best Friends" << endl;
    PlaySound(TEXT("Best Friends.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("Best Friends.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void myAttitude() {
    cout << "Playing My Attitude" << endl;
    PlaySound(TEXT("My Attitude.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("My Attitude.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void expressYourself() {
    cout << "Playing Express Yourself" << endl;
    PlaySound(TEXT("Express Yourself.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("Express Yourself.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void youveGotIt() {
    cout << "Playing You've Got It" << endl;
    PlaySound(TEXT("You've Got It.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("You've Got It.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void justHavingSomeFun() {
    cout << "Playing Just Having Some Fun" << endl;
    PlaySound(TEXT("Just Having Some Fun.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("Just Having Some Fun.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void letGo() {
    cout << "Playing Let Go" << endl;
    PlaySound(TEXT("Let Go.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("Let Go.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void hangOn() {
    cout << "Playing Hang On" << endl;
    PlaySound(TEXT("Hang On.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("Hang On.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void foreverDiamondz() {
    cout << "Playing Forever Diamondz" << endl;
    PlaySound(TEXT("Forever Diamondz.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("Forever Diamondz.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void beautiful() {
    cout << "Playing Beautiful" << endl;
    PlaySound(TEXT("Beautiful.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("Beautiful.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}


// Monster High - Boo York
void loveStorm() {
    cout << "Playing Love ls Like a Storm Tonight: " << endl;
    PlaySound(TEXT("loveStorm.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("loveStorm.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void search() {
    cout << "Playing Search Inside: " << endl;
    PlaySound(TEXT("searchInside.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("searchInside.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void empire() {
    cout << "Playing Empire: " << endl;
    PlaySound(TEXT("empire.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("empire.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void canOver() {
    cout << "Playing It Can Be Over: " << endl;
    PlaySound(TEXT("cantBeOver.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("cantBeOver.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void booyork() {
    cout << "Playing Boo York, Boo York: " << endl;
    PlaySound(TEXT("booYork.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("booYork.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void stealShow() {
    cout << "Playing Steal the Show: " << endl;
    PlaySound(TEXT("stealShow.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("stealShow.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void shooting() {
    cout << "Playing Shooting Stars: " << endl;
    PlaySound(TEXT("shootingStars.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("shootingStars.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void fright() {
    cout << "Playing Fright Song: " << endl;
    PlaySound(TEXT("fright.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("fright.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}


// Tangled Soundtrack
void cuandoEmpezareAVivir() {
    cout << "Playing Cuando Empezare A Vivir" << endl;
    PlaySound(TEXT("Cuándo Empezaré A Vivir.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("Cuándo Empezaré A Vivir.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void madreSabeBien() {
    cout << "Playing Madre Sabe Bien" << endl;
    PlaySound(TEXT("Madre Sabe Bien.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("Madre Sabe Bien.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void miVidaEmpiezaAsi() {
    cout << "Playing Mi Vida Empieza Asi" << endl;
    PlaySound(TEXT("Mi Vida Empieza Así.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("Mi Vida Empieza Así.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void miSuenoIdeal() {
    cout << "Playing Mi Sueno Ideal" << endl;
    PlaySound(TEXT("Mi Sueño Ideal.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("Mi Sueño Ideal.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void florQueDaFulgor() {
    cout << "Playing Flor Que Da Fulgor" << endl;
    PlaySound(TEXT("Flor Que Da Fulgor.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("Flor Que Da Fulgor.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void madreSabeBienReprise() {
    cout << "Playing Madre Sabe Bien (Reprise)" << endl;
    PlaySound(TEXT("Madre Sabe Bien (Reprise).wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("Madre Sabe Bien (Reprise).wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void veoEnTiLaLuz() {
    cout << "Playing Veo En Ti La Luz" << endl;
    PlaySound(TEXT("Veo En Ti La Luz.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("Veo En Ti La Luz.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}
void algoQuiero() {
    cout << "Playing Algo Quiero" << endl;
    PlaySound(TEXT("Algo Quiero.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

    cout << endl;

    int exit;
    cout << "For Exit please press (0): " << endl;
    cout << "To Play and Pause please press (1): " << endl;
    cin >> exit;
    system("cls");
    if (exit == 0) {
        cout << "Going back to menu..."; // Volver al menu
        system("cls");
    }
    else {
        int stop = 0;
        while (100 >= stop) {

            string input;
            getline(cin, input);
            PlaySound(0, 0, 0);
            cout << "Pause" << endl;

            getline(cin, input);
            cout << "Play" << endl;
            PlaySound(TEXT("Algo Quiero.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

            getline(cin, input);
            system("cls");
            stop++;
        }

    }
}


// logos
void barbieLogo() {
    HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE); // color es una varible que nombre
    SetConsoleTextAttribute(color, 13); // Rosa

    cout << "                                                      :XXXXXXXXXXXXXXX+         " << endl;
    cout << "                                                    +XXXXXXXXXXXXXXXXXXX        " << endl;
    cout << "                                       ;+xx+:     :XXXXXXXXXxXXXXXXXXXXX        " << endl;
    cout << "                                  +XXXXXXXXXXXXXxXXXXX;        XXXXXXXX;        " << endl;
    cout << "                               xXXXXXXXXXXXXXXXXXXX           XXXXXXXX+         " << endl;
    cout << "                             xXXXXXXXXXXXXXXXXXXXXXX         XXXXXXXX.          " << endl;
    cout << "                           .XXXXXXXXXXXXXXXXXXXXXXXX;       xXXXXXXx            " << endl;
    cout << "                          :XXXXXXXXXXXXXXXXXXXXXXXXXx      +XXXXXX:             " << endl;
    cout << "                          XXXXXXXXXXXXXXXXXXXXXXXXXXx     .XXXXXx               " << endl;
    cout << "                         :XXXXXXXXXXXXXXXXXXXXXXXXXX;     XXXXX         +XXXX   " << endl;
    cout << "                           +XXXXXXXXXXXXXXXXXXXXXXXX      XXXX        +XXXXXXx  " << endl;
    cout << "                           +XXXXXXXXXXXXXXXXXXXXXXX+     ;XXX        XXXXXXXXX  " << endl;
    cout << "                           XXXXXXXXXXXXXXXXXXXXXXX+       XXX      .XXXXXXXXXx  " << endl;
    cout << "                          +XXXXXXXXXXXXXXXXXXXXXX:        XXXX     X    XXXXX.  " << endl;
    cout << "                          :XXXXXXXXXXXXXXXXXXXXX           XXXX+       :XXXX.   " << endl;
    cout << "                          ;XXXXXXXXXXXXXXXXXXX:             xXXXXX:  .xXXXX     " << endl;
    cout << "                           xXXXXXXXXXXXXXXXXX                 :XXXXXXXXXX       " << endl;
    cout << "                            ...        :XXXX                                    " << endl;
    cout << "                                        XXXX                                    " << endl;
    cout << "                                        XXXX                                    " << endl;
    cout << "                                       XXXXX                                    " << endl;
    cout << "                                      +XXXXX;                                   " << endl;
    cout << "                                     +XXXXXXX.                                  " << endl;
    cout << "                                    XXXXXXXXXXX                                 " << endl;
    cout << "                                  xXXXXXXXXXXXXXx                               " << endl;
    cout << "                                xXXXXXXXXXXXXX+                                 " << endl;
    cout << "                              XXXXXXXXXXXX.                                     " << endl;
    cout << "                                                                                " << endl;
    cout << "                   :;;;:                                                        " << endl;
    cout << "              :XXXXXXXXXXx                     XX.                              " << endl;
    cout << "           ;XXXXx.      XX                     XX:                              " << endl;
    cout << "        .XXXX.         :XX                    XXX       :Xx                     " << endl;
    cout << "      +XXX;   XXX     +XX                     XX;       +X                      " << endl;
    cout << "    .XXX     ;XXX   .XXX            XX;      ;XX        +      :XX:             " << endl;
    cout << "   xXX       XXX  ;XXX       :XXX+  xXXXXXXX XX     .;XXX;   XXXXXX     ;.      " << endl;
    cout << "  XX;       ;XXXXXXXXXX+    XX: x:  XXX  X; :X ;XXX; +XX;  +XX  XX+     X:      " << endl;
    cout << " +X.      XXXXXXXXXXXXXXXx:XX  XXx  XX  ;.  XXX  +Xx XX+  XX; +XX+     X.       " << endl;
    cout << " x+        .XXX        xXXXX  +XX  xX:     XX:  .XX.:XX  XXXXXX+     +X         " << endl;
    cout << " :X++Xx     XX;       ;XXXX  XXXX  XX   X+;X+  xXX  xX   :XX+     ;XX.          " << endl;
    cout << "    .      :XX      xXX:XX; X+;XX  XX   xXXXxXXX:   ;XXX  +XXXXXXXx             " << endl;
    cout << "           ;Xx  :XXX;  .XXXX   xx.;XX    :X:.                                   " << endl;
    cout << "      :XXXxXXXXX;       XX.                                                     " << endl;
    cout << "        .:.XX;                                                                  " << endl;
    cout << "           XX;                                                                  " << endl;

}
void bratzLogo() {
    HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE); // color es una varible que nombre
    SetConsoleTextAttribute(color, 4); // rojo / vino

    cout << "     ......*.                                                                 " << endl;
    cout << "     +*#####:                                          ...=#                  " << endl;
    cout << "     +*#####:                                        +*#####                  " << endl;
    cout << "     =*#####: :=*****   -----+*  =*  .:-=+*****--*   *######## ===---:--**    " << endl;
    cout << "     =*############### .*######**## -*#############  *######## *##########    " << endl;
    cout << "     =*#####% -*###### .*########## -#%.    *######  *######   ##########+    " << endl;
    cout << "     =*#####:  *###### .*######%        ..:=*######  *######      :*####+     " << endl;
    cout << "     =*#####:  *###### .*######      :+*###*#######  *######     .*####+      " << endl;
    cout << "     =*#####:  *###### .*######     +#####: *######  *######    .*####=       " << endl;
    cout << "     +*#####:  :*#####  =######     +#####: -#####*  :*#####   :*###**        " << endl;
    cout << "     *######+  +*####*+########  ..*######*+*#####*:-*#####*::+######***+*#+  " << endl;
    cout << "     .#################.*#########%-########*#######*#########*############   " << endl;
    cout << "        :+%%###%%*-      -###%%+.    *#%%:   -##%+    =##%%-    =####%%=      " << endl;
}
void mhLogo() {
    HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(color, 5); // Violeta

    cout << "                                                                  &&&&&$                                                                                   " << endl;
    cout << "                                                               &&&&&&&&&&&&          .&&&&&&                                                               " << endl;
    cout << "                                                             .&&&&&&&&&&&&&&&      &&&&&&&&&&&                                                             " << endl;
    cout << "                                                            :&&&&&$x+++X&&&&&&&&&&&&&&&&&&&&&&&&                                                           " << endl;
    cout << "                                                            $&&&&x++++++++$&&&&&&&&&&x++++x&&&&&&                                                          " << endl;
    cout << "                                                            &&&&&++++++++++$&Xx+X&++++++++++$&&&&                                                          " << endl;
    cout << "                                                         &&&&&&&&+++++x&&&$++++++&xxxx++++++x&&&&;                                                         " << endl;
    cout << "                                                      x&&&&&&&&&&x++++++++$X+++++&&x++++++++$&&&&                                                          " << endl;
    cout << "                                                    :&&&&&&&    ;X+++++++++x&xxX&x+++++++++x&&&&&                                                          " << endl;
    cout << "                                                   &&&&&&&       &X+++++x&&     $&x+++++++x&&&&&&&                                                         " << endl;
    cout << "                                                 &&&&&&          $&Xx&&          .&x++++x&   &&&&&                                                         " << endl;
    cout << "    &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&+                              &&&&;    $&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&$         " << endl;
    cout << "      &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&                                          &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&+           " << endl;
    cout << "        &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&                                          &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&              " << endl;
    cout << "          &&&&&&&&$                            &&&&&                                           &&&&x                              +&&&&&&&&                " << endl;
    cout << "            &&&&&&&&&                          &&&&&                                          x&&&&:                            &&&&&&&&&                  " << endl;
    cout << "              ;&&&&&&:                         &&&&&:                                         &&&&&:                            &&&&&&&                    " << endl;
    cout << "                +&&&&               &&&&&&&&&&&&&&&&&                                        &&&&&&&&&&&&&&&&&&&&+              &&&&&                      " << endl;
    cout << "                .&&&&                 &&&&&&&&&&&&&&&;                        &&&&&&&&&&    &&&&&&&&&&&&&&&&&&&                 &&&&&                      " << endl;
    cout << "                ;&&&&     &&&&&&&&&&&&&&&&&&&&&&&&&&&&&           .&&&&&&    &&&&&&&&&&&&  X&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&     &&&&&                      " << endl;
    cout << "                ;&&&&     &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&        &&&&&&&&&&   &&&&&&&&&&&    &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&     &&&&&                      " << endl;
    cout << "                +&&&&     &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&     &&&&&&&&&&&&  &&&&&&&&&&&    :&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&     &&&&&                      " << endl;
    cout << "                +&&&&     &&&&&x++++x&&&&&&x++++++++x&&&&&&&   X&&&&&&&&&&&    &&&&&&&       &&&&x                    &&&&&     &&&&&                      " << endl;
    cout << "                x&&&&     &&&&&X+++&&&&&&x+++++++++x&&&&&&&&$   &&&&&&&&&X  :&             &&&&&&                     &&&&&     &&&&&                      " << endl;
    cout << "                x&&&&     &&&&&X+$&&&&&X+++++++++x&&&&&&&&&&&      ..      &&&:         :&&&&&&&;                     &&&&&     &&&&&                      " << endl;
    cout << "                x&&&&     &&&&&&&&&&&$++++++++++&&&&&&x+&&&&&                        &&&&&&&&&&                       &&&&&     &&&&&                      " << endl;
    cout << "                x&&&&     &&&&&&&&&&++++++++++&&&&&&X+++X&&&&&&                     &&&&&&X:                          &&&&&     &&&&&                      " << endl;
    cout << "                +&&&&     &&&&&&&&x+++++++++$&&&&&$++++++X&&&&&&&&&&&&&&           &&&&$                              &&&&&     &&&&&                      " << endl;
    cout << "                ;&&&&     &&&&&&x+++++++++X&&&&&$++++++++++&&&&&&&&&&&&&&&+ x&&&&&&&&&&               ;&&&           .&&&&&     &&&&&                      " << endl;
    cout << "                ;&&&&     &&&&&&++++++++x&&&&&&&&&&&Xx+++$&&&&&XxxxxxX&&&&&&&&&&&&&&&&          .X&&&&&&&&           :&&&&&     &&&&&                      " << endl;
    cout << "                :&&&&     &&&&&&++++++x&&&&&&&&&&&&&&&&&&&&&&&+++++++++x&&&&&&&&&&&x       :$&&&&&&&&&&&&.           :&&&&&     &&&&&                      " << endl;
    cout << "                .&&&&     &&&&&&+++++&&&&&&x&&&&&&&&&&&&&&&&&&&Xx+++++&&&&&+          $&&&&&&&&&&&&&&&&&&            +&&&&&     &&&&&                      " << endl;
    cout << "                 &&&&.    &&&&&&x++$&&&&&X++$&&&&    X&&&&&&&&&&&&&&$&&&&&&;    ;X&&&&&&&&&&&&&$    &&&&&            x&&&&&     &&&&$                      " << endl;
    cout << "                 &&&&+    &&&&&&xX&&&&&$++++x&&&&         &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&         &&&&x            $&&&&&     &&&&:                      " << endl;
    cout << "                 &&&&&    &&&&&&&&&&&&++++++x&&&&               &&&&&&&&&&&&&&&&&&&&&+              &&&&:            &&&&&&    :&&&&                       " << endl;
    cout << "                 &&&&&    .&&&&&&&&&x++++++++&&&&&                   x&&&&&&&&&&;                  .&&&&             &&&&&x    +&&&&                       " << endl;
    cout << "                 &&&&&     &&&&&&&x+++++++++X&&&&&                        &.                       x&&&&             &&&&&+    X&&&&                       " << endl;
    cout << "                 &&&&&     &&&&&$+++++++++x&&&&&&&      &&;                               .X&      &&&&&             &&&&&.    $&&&&                       " << endl;
    cout << "                 &&&&&     &&&&&$++++++++&&&&&&&&&      :&&&&&&&                     $&&&&&&x      &&&&X             &&&&&     &&&&&                       " << endl;
    cout << "                 .&&&&&    &&&&&$++++++&&&&&&x&&&&X      &&&&&&&&&&&&&         X&&&&&&&&&&&&;      &&&&.            x&&&&&     &&&&X                       " << endl;
    cout << "                  &&&&&    .&&&&&++++$&&&&&X++$&&&&      &&&&&&&&&&&&&&       &&&&&&&&&&&&&&.     :&&&&             &&&&&&     &&&&;                       " << endl;
    cout << "                  &&&&&     &&&&&x+X&&&&&$++++$&&&&      &&&&   X&&&&&&       &&&&&&&   &&&&      &&&&&             &&&&&&    +&&&&                        " << endl;
    cout << "                  &&&&&     &&&&&&&&&&&&++++++x&&&&      &&&&      +&&&       &&&&      &&&&      &&&&x             &&&&&.    &&&&&                        " << endl;
    cout << "                  :&&&&     &&&&&&&&&&x+++++++x&&&&      $&&&      ;&&&.      &&&X      &&&&      &&&&             :&&&&&     &&&&&                        " << endl;
    cout << "                   &&&&+    $&&&&&&&x+++++++++X&&&&      .&&&      :&&&:      &&&+      &&&&      &&&&             x&&&&&     &&&&&                        " << endl;
    cout << "                   &&&&&     &&&&&X+++++++++x&&&&&&X      &&&+      &&&;      &&&.      &&&&     ;&&&&             &&&&&:    $&&&&                         " << endl;
    cout << "                   &&&&&     &&&&&$+++++++x&&&&&&&&&      &&&&      &&&+      &&&       &&&&     X&&&X             &&&&&     &&&&&                         " << endl;
    cout << "                   :&&&&&    +&&&&&++++++&&&&&&x&&&&      &&&&      &&&&&&&&&&&&&      ;&&&      &&&&x            +&&&&&     &&&&+                         " << endl;
    cout << "                    &&&&&     &&&&&x+++$&&&&&X++&&&&      &&&&      &&&&&&&&&&&&&      &&&&      &&&&             &&&&&X    +&&&&                          " << endl;
    cout << "                    x&&&&     $&&&&X+$&&&&&&++++$&&&$     &&&&      &&&&&&&&&&&&&      &&&&      &&&&            .&&&&&     &&&&&                          " << endl;
    cout << "                     &&&&$     &&&&&&&&&&&++++++X&&&&     &&&&                         &&&&      &&&&            $&&&&+    X&&&&&                          " << endl;
    cout << "                     $&&&&     &&&&&&&&&++++++++x&&&&     X&&&                         &&&&     &&&&+            &&&&&     &&&&&                           " << endl;
    cout << "     &&               &&&&&     &&&&&&x+++++++++X&&&&     ;&&&                         &&&+     &&&&            &&&&&x     &&&&x                           " << endl;
    cout << "     &&&              &&&&&     x&&&&&++++++++x&&&&&&      &&&      &&&&&&&&&&&&&      &&&.     &&&&         :+&&&&&&&&&&&&&&&&$.                          " << endl;
    cout << "      &&&              &&&&&     &&&&&&+++++x&&&&&&&&      &&&.     &&&&&&&&&&&&&     +&&&      &&&$ ;&&&&&&&&x                 x&&&                       " << endl;
    cout << "      &x &$            x&&&&;     &&&&&X+++&&&&&&$&&&+     &&&;     &&&&&&&&&&&&&     &&&&     &&&&&&:         :xX$&&&&&&&&&&&$x   x&.                     " << endl;
    cout << "     X&  &&x           &&&&&     .&&&&&X$&&&&&X+x&&&&&&&&&&&&X     &&&&xx&; &&&&     &&&&&&&&$x       +&&&&&&&&&&&&&&&&&&&&&&&&&&  &&                      " << endl;
    cout << "       &&   $&&&X        &&&&&     $&&&&&&&&&$++++&&&&&&&&&&&&&     &&&&xx&; &&&&    &&&&&      +&&&&&&&&&&&&&&&&&&&&x  &&   x   &  &&                     " << endl;
    cout << "       .&  :    :X&&&&&&&&&&&&&     $&&&&&&&++++++X$$&&&&&&&&&&     $&&&Xx&; &&&&&&&+      +&&&&&&&$&&&&&&&&      &&&:  &&   &&&&&  &&                     " << endl;
    cout << "        &&  X&&x          &&&&&&     x&&&&&&++++++++X&&&&&&&&&&     ;&&&Xx&&&&&&      &&&&&&&&&&&&  &&&  .&&  $&&&&&&+       &&&&&  &&                     " << endl;
    cout << "         :&:  &&&&&&&&&&&&&&&&&&&     ;&&&&&&+++++x&&&&&&++&&&&      &&&&&&      &&&&&&&&&&&&   &&  X&&   &&  .    &&x       &&&&&  &&                     " << endl;
    cout << ":&&         &&   &&&&&&&&&&&&&&&&&&      &&&&&&x+x&&&&&&x+++&&&&   &&&&;     ;&&&&&&&&&&$ &&&&   &&  .&&   &&   &&  X&X  x&   &&&&&  $&                    " << endl;
    cout << "$&&&&&      &&&   &&&&&&&&&&&&&&&&&      &&&&&&&&&&&&x+++++$&&&&&$     $&&&&&&&&&&&x     &&&&        &&   &&   &&  ;&$  +&.  &&&&&  :&                     " << endl;
    cout << " :&X   :X$&&x:       &&&&     $&&&&&.     &&&&&&&&&x+xx$&&&&:     :$&&&&&&&&&&  &&   X&  &&&&   $&   &&   &&   &   .&$  ;&;  &&&&&;  &                     " << endl;
    cout << "   &&           X&&&&&&   &&&&&&&&&&&;     :&&&&&&&&&&&x      &&&&&&&&&&&&&     &&      &&&&&:  &&   &&   &&$      ;&&&&&&&&&&&&&&&  &                     " << endl;
    cout << "     &&    &&&&&&&&&&&   x&&&&&&&&&&&&&   $&&&&&&       X&&&&&&&&&&&&     &  &X &&      X&&&&$  &&   &&:  &&&&&&&&&&&&&&&&&&&&&&&&&  &&&:                  " << endl;
    cout << "        &&      .x&&&&     :$&&&&&&&&&X+.          $&&&&&&&&&&&+   x    &&&     &&   &   &&&&&  &&+ X&&&&&&&&&&&&X+.            x&&  :   .+&&&:            " << endl;
    cout << "           &&&&.     +  &&                X&&&&&&&&&&&&&&&+ &&   ;&&&.  &&&   &&&&:  &&   &&&&&&&&&&&&&&&&&          X&&&&&&&&&      &&&       +&&X        " << endl;
    cout << "                 +&&&&  &&&&&&&&&&&&&&&&&&&&&&&&&&&&& :&&+  &&+   &&&;  &&&   &&&&&  &&.:$&&&&&&&&&&       :X&&&&&&&&&&&&&&&&&&&&    &&&&&&&&&X    &&;     " << endl;
    cout << "                    &  &&&&&& X&&&&&&+  &&$x.    .&&       $&&   &&&+  &&&     ;&& &&&&&&&&&&;      .&&&: X&&&&&&&&&&&&&&&&&&&&&   &&&&&&&$X+;  ;   ;&:    " << endl;
    cout << "                     &  &&&&&&           &&    &   &&   &   X&&&   &&X  &&&&; .&&&&&&&&&&      X&&&&&.&&&  &&&&x                  &&&&          .      &&  " << endl;
    cout << "                     &  x&&&&&       &   &&   &&   &&   &$  X&&&$  x&&  &&&&&&&&&&&X      +&&&&.     &&&&      :xX$&&&&&&&&&&&&&&&&&&&&&    &&&    .X&&&&&." << endl;
    cout << "                     &   &&&&&  .&   &   &&   &&   &&   &$  x&+    &&&&&&&&&&&&x     X&&&&X        &&&&&.  :&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&X  :&&        $&&" << endl;
    cout << "                     &+  &&&&&   &   &   &&+  &&   &&   &&  ;&  $&&&&&&&&&;     X&&&&&&&        $&&&&&&&   &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&x  &&          " << endl;
    cout << "                     &&  &&&&&   &   &:  &&X  &&   &&   &&:&&&&&&&&&&+      &&&&&&&&$         &&&&&&&&+&&  &&&&&&&&&&&&&&&X+:            ;X&&&  &&         " << endl;
    cout << "                     &&  &&&&&   &.  &&  &&&      &&&&&&&&&&&&&&&      &&&&&&&&&&+         &&&&&&&&&   .&&     .:.           +&&&&&&&&&&$     x  ;&        " << endl;
    cout << "                     &&  &&&&&   &:  &&  &&&&&X$&&&&&&&&&&x      .$&&&+ &&&&&.          +&&&&&&&&+       &&&X;.   :+X&&&&&&&x.           +&&&X    &&       " << endl;
    cout << "                     &&  &&&&&&&&&&&&&&&&&&&&&&&&&&&X       ;&&&&&                   $&&&&&&&&&              X$&&$$x                         :&&   &       " << endl;
    cout << "                     x&.   &&&&&&&&&&&&&&&&x          &&&&&&&&&&&&&&             x&&&&&&&&&&                                                    && :&      " << endl;
    cout << "                       &&+                    :$&&&&&+      X&&&&&&&&&&;      &&&&&&&&&&&                                                        .&&&      " << endl;
    cout << "                         ;&&&&&&&&&&&&&&&&&&&&                 &&&&&&&&&&&&&&&&&&&&&&&                                                            :&&$     " << endl;
    cout << "                                                                   ;&&&&&&&&&&&&&$                                                                 +&&     " << endl;
    cout << "                                                                       ;&&&&&X                                                                             " << endl;

}
void tangledLogo() {
    HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE); // color es una varible que nombre
    SetConsoleTextAttribute(color, 6); // amarillo

    cout << "                              .@.                                                        " << endl;
    cout << "                             -@@-                                                        " << endl;
    cout << "                              @@@%                                                       " << endl;
    cout << "                             :@@@@=                         +                            " << endl;
    cout << "                             @@@@@%                        #@:                           " << endl;
    cout << "                            @@@@@@@                      *@@@.                           " << endl;
    cout << "                           *@@@@@@@.       :@+     @@@@@@@@@@                            " << endl;
    cout << "                           *@@@@@@@@@#.     @@#  @@@@@@@@@@@                             " << endl;
    cout << "                            @@@@@@@@@@@@.  +@@@ @@@@@@@@@@-                              " << endl;
    cout << "                      +@@@@@+#@@@@@@@@@@@+@@@@@:@@@@@@@@:                                " << endl;
    cout << "                         @@@@@+@@@@@@@@@@%@@@@@+@@@@@@@@                                 " << endl;
    cout << "     +@@@@@@*             @@@@@*@@@@@*++*=@@@@=@@@@@@@@@                                 " << endl;
    cout << "       -@@@@@@@*    :#@@@%##@@@+ =%@@@@@@@@@* =@@@@@@@@@:                                " << endl;
    cout << "         .@@@@@@@@@@@@@@@@@@* =@@@@@@@@@@@@@@@@#.@@@@@@@     ##                          " << endl;
    cout << "          .@@@@@@@@@@@@@@@@-#@@@@@@@@@@@@@@@@@@@@@ @@@@.  -@@@+                          " << endl;
    cout << "           *@@@@@@@@@@@@@@ @@@@@@@@@@@@@@@@@@@@@@@@-#=*@@@@@@#                           " << endl;
    cout << "            .@@@@@@@@@@@@.@@@@@@@@@@@@@@@@@@@@@@@@@@.%@@@@@@-.+*+.                       " << endl;
    cout << "                :==++-=@+%@@@@@@@@@@@@@@@@@@@@@@@@@@@.+#+=%@@@@@@@@@                     " << endl;
    cout << "               %@@@@@@@@ @@@@@@@@@@@@@@@@@@@@@@@@@@@@+@@@@@@@@@@@@@@@@-                  " << endl;
    cout << "             *@@@@@@@@@@.@@@@@@@@@@@@@@@@@@@@@@@@@@@@##@@@@@@@@@@@@@@@@@@@@@             " << endl;
    cout << "             -     .+#@@.@@@@@@@@@@@@@@@@@@@@@@@@@@@@*%@@@@@@@@@@@@@@@@@@+               " << endl;
    cout << "                  :@@@@@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@-@@@@@@@@:                          " << endl;
    cout << "                 :@@@@@@@+@@@@@@@@@@@@@@@@@@@@@@@@@@@=@@@@@@-                            " << endl;
    cout << "                 @@@@@@@@=+@@@@@@@@@@@@@@@@@@@@@@@@@ @***                                " << endl;
    cout << "                @@@@@@@@@@%-@@@@@@@@@@@@@@@@@@@@@@#.@@@@@@-                              " << endl;
    cout << "           +@@@@@@@@@@@@@-%@.*@@@@@@@@@@@@@@@@@@@.@@.@@@@@@@@@@                          " << endl;
    cout << "        :@@@@@@@@@@@@@@*@@@@@*:-@@@@@@@@@@@@@@+:@@@@@@####%#-                            " << endl;
    cout << "       %@@@@@@@@@@@@@@+@@@@@#@@@@%. -*##*=  +@@@@@@@@@@@@@+                              " << endl;
    cout << "      #@#.   .=@@@@*. +@@@@:.@@@@@@@@@@+@@@-@@@@@@@@@@@@@@@@                             " << endl;
    cout << "                      *@@    @@@@@@@@@@%@@@@-%@@@@@@@@@@@@@@#                            " << endl;
    cout << "                      .@-    -@@@@@@@@@%@@@@.   .+*%@@@@@@@@#                            " << endl;
    cout << "                              .@@@@@@@@#%@@@:         @@@@@@+                            " << endl;
    cout << "                               .@@@@@@@@ :@@@          @@@@@#                            " << endl;
    cout << "                               %@@@@@@@+                =@@@@:                           " << endl;
    cout << "                              #@@@@@@@%                   :%@@@:                         " << endl;
    cout << "                              @@@@@@#                                                    " << endl;
    cout << "                             .@@@@:                                                      " << endl;
    cout << "                              @@@                                                        " << endl;
    cout << "                              -@=                                                        " << endl;
}


// Funcion que reciba parametros (?)
// Menú
char notepad(char artist) {
    char art;
    string notaMenu;
    ifstream menu("menu.txt"); // read from text file
    while (getline(menu, notaMenu)) {
        // output the text from the file
        cout << notaMenu << endl;
    }
    // close the file
    menu.close();

    cin >> art;

    system("cls");

    art = toupper(art);

    return art;
}


int main()
{
    char art;
    //int menu = 0;

    string notaMenu;
    ifstream menu("menu.txt"); // read from text file
    while (getline(menu, notaMenu)) {
        // output the text from the file
        cout << notaMenu << endl;
    }
    // close the file
    menu.close();

    cin >> art;

    system("cls");

    art = toupper(art);

    //do {
        // Menu: notepad
        // cout << notepad(art);
       


        // switch artist
        switch (art) {

        case 'A':
            char brb;
            barbieLogo();
            cout << endl << endl;
            cout << "BARBIE albums: \n";
            cout << "I. Barbie in the Nutcracker \n";
            cout << "II. Barbie of Swan Lake \n";
            cin >> brb;
            system("cls");
            brb = toupper(brb);

            if (brb == 'I') {
                int nc;
                barbieLogo();
                cout << endl << endl;
                cout << "> Barbie in the Nutcracker" << endl;
                string barbieNC[7] = { "1. The Nutcracker (Theme) - 1: 46", "2. Dance of The Sugar Plum Fairies - 2: 17", "3. Dance of The Snow Fairies - 6: 56",
                    "4. Dance of The Spring Fairies - 6: 24", "5. Russian Dance - 1: 09", "6. The Sugar Plum Princess - 3: 09", "7. The Nutcracker (March) - 2: 36", };
                cout << barbieNC[0] << endl;
                cout << barbieNC[1] << endl;
                cout << barbieNC[2] << endl;
                cout << barbieNC[3] << endl;
                cout << barbieNC[4] << endl;
                cout << barbieNC[5] << endl;
                cout << barbieNC[6] << endl;
                cin >> nc;

                system("cls");

                switch (nc) {

                case 1:

                    theNutcracker();
                    break;

                case 2:
                    plumFairies();
                    break;

                case 3:
                    snowFairies();
                    break;

                case 4:
                    springFairies();
                    break;

                case 5:
                    russianDance();
                    break;

                case 6:
                    plumPrincess();
                    break;

                case 7:
                    nutcrackerMarch();
                    break;

                default:
                    cout << "ERROR \n";
                    break;
                }
            }
            else if (brb == 'II') {
                int swn;
                barbieLogo();
                cout << endl << endl;
                cout << "> Barbie of Swan Lake" << endl;
                string barbieSL[7] = { "1. Swan Lake (Theme) - 1: 35", "2. Bakery Dance - 0: 31", "3. Date Night - 2: 22",
                    "4. Spanish Dance - 0: 57", "5. Hungarian Dance - 0: 59", "6. Dance Lesson With The Fairy Queen - 1: 17", "7. Odiles Dance - 0: 40", };
                cout << barbieSL[0] << endl;
                cout << barbieSL[1] << endl;
                cout << barbieSL[2] << endl;
                cout << barbieSL[3] << endl;
                cout << barbieSL[4] << endl;
                cout << barbieSL[5] << endl;
                cout << barbieSL[6] << endl;
                cin >> swn;

                system("cls");

                switch (swn) {

                case 1:

                    swanlake();
                    break;

                case 2:
                    baker();
                    break;

                case 3:
                    dateNight();
                    break;

                case 4:
                    spanish();
                    break;

                case 5:
                    hungarian();
                    break;

                case 6:
                    danceLesson();
                    break;

                case 7:
                    odiles();
                    break;

                default:
                    cout << "ERROR \n";
                    break;
                }
            }
            else {
                cout << "ERROR \n";
            }

            break;

        case 'B':
            char bza;
            bratzLogo();
            cout << endl << endl;
            cout << "BRATZ albums: \n";
            cout << "I. Rock Angelz \n";
            cout << "II. Forever Diamondz \n";
            cin >> bza;
            system("cls");
            bza = toupper(bza);

            if (bza == 'I') {
                int ra;
                bratzLogo();
                string bratzRA[12] = { "0. So Good", "1. Change The World", "2. I Don't Care", "3. All About You", "4. Who I Am", "5. So What",
                    "6. You Think", "7. It Could Be Yours", "8. Lookin' Good", "9. Rock The World", "10. Stand Out", "11. Nobody's Girl" };
                cout << bratzRA[0] << endl;
                cout << bratzRA[1] << endl;
                cout << bratzRA[2] << endl;
                cout << bratzRA[3] << endl;
                cout << bratzRA[4] << endl;
                cout << bratzRA[5] << endl;
                cout << bratzRA[6] << endl;
                cout << bratzRA[7] << endl;
                cout << bratzRA[8] << endl;
                cout << bratzRA[9] << endl;
                cout << bratzRA[10] << endl;
                cout << bratzRA[11] << endl;
                cin >> ra;

                system("cls");

                switch (ra) {

                case 0:
                    soGood();
                    break;

                case 1:
                    changeTheWorld();
                    break;

                case 2:
                    iDontCare();
                    break;

                case 3:
                    allAboutYou();
                    break;

                case 4:
                    whoIAm();
                    break;

                case 5:
                    soWhat();
                    break;

                case 6:
                    youThink();
                    break;

                case 7:
                    itCouldBeYours();
                    break;

                case 8:
                    lookinGood();
                    break;

                case 9:
                    rockTheWorld();
                    break;

                case 10:
                    standOut();
                    break;

                case 11:
                    nobodysGirl();
                    break;

                default:
                    cout << "ERROR \n";
                    break;
                }
            }
            else if (bza == 'II') {
                int fd;
                bratzLogo();
                string bratzFD[13] = { "0. Oooh Fashion", "1. Wazz Up", "2. Keep It Up", "3. What's Goin' On", "4. Best Friends", "5. My Attitude", "6. Express Yourself",
                    "7. You've Got It", "8. Just Having Some Fun", "9. Let Go", "10. Hang On", "11. Forever Diamondz", "12. Beautiful" };
                cout << bratzFD[0] << endl;
                cout << bratzFD[1] << endl;
                cout << bratzFD[2] << endl;
                cout << bratzFD[3] << endl;
                cout << bratzFD[4] << endl;
                cout << bratzFD[5] << endl;
                cout << bratzFD[6] << endl;
                cout << bratzFD[7] << endl;
                cout << bratzFD[8] << endl;
                cout << bratzFD[9] << endl;
                cout << bratzFD[10] << endl;
                cout << bratzFD[11] << endl;
                cout << bratzFD[12] << endl;
                cin >> fd;

                system("cls");

                switch (fd) {

                case 0:
                    ooohFashion();
                    break;

                case 1:
                    wazzUp();
                    break;

                case 2:
                    keepItUp();
                    break;

                case 3:
                    whatsGoinOn();
                    break;

                case 4:
                    bestFriends();
                    break;

                case 5:
                    myAttitude();
                    break;

                case 6:
                    expressYourself();
                    break;

                case 7:
                    youveGotIt();
                    break;

                case 8:
                    justHavingSomeFun();
                    break;

                case 9:
                    letGo();
                    break;

                case 10:
                    hangOn();
                    break;

                case 11:
                    foreverDiamondz();
                    break;

                case 12:
                    beautiful();
                    break;

                default:
                    cout << "ERROR \n";
                    break;
                }
            }
            else {
                cout << "ERROR \n";
            }

            break;

        case 'C':
            char mhby;
            mhLogo();
            cout << endl << endl;
            cout << "MONSTER HIGH album: \n";
            cout << "I. Monster High: Boo York, Boo York!" << endl;
            cin >> mhby;
            system("cls");
            mhby = toupper(mhby);

            if (mhby == 'I') {
                int mh;
                mhLogo();
                cout << endl << endl;
                cout << "> Monster High : Boo York, Boo York!" << endl;
                string mhBY[8] = { "1. Love ls Like a Storm Tonight - 3: 18","2. Search Inside - 3: 38","3. Empire - 2: 58","4. It Can Be Over - 3: 24",
                        "5. Boo York, Boo York - 2: 45","6. Steal the Show - 3: 44","7. Shooting Stars - 3: 26","8. Fright Song - 2: 49" };
                cout << mhBY[0] << endl;
                cout << mhBY[1] << endl;
                cout << mhBY[2] << endl;
                cout << mhBY[3] << endl;
                cout << mhBY[4] << endl;
                cout << mhBY[5] << endl;
                cout << mhBY[6] << endl;
                cout << mhBY[7] << endl;
                cin >> mh;

                switch (mh) {

                case 1:
                    loveStorm();
                    break;

                case 2:
                    search();
                    break;

                case 3:
                    empire();
                    break;

                case 4:
                    canOver;
                    break;

                case 5:
                    booyork();
                    break;

                case 6:
                    stealShow();
                    break;

                case 7:
                    shooting();
                    break;

                case 8:
                    fright();
                    break;

                default:
                    cout << "ERROR \n";
                    break;
                }
                break;
            }
            else {
                cout << "ERROR \n";
            }

            break;

        case 'D':
            char tst;
            tangledLogo();
            cout << endl << endl;
            cout << "TANGLED album: \n";
            cout << "I. Tangled Soundtrack" << endl;
            cin >> tst;
            system("cls");
            tst = toupper(tst);

            if (tst == 'I') {
                int tgld;
                tangledLogo();
                string tangled[8] = { "0. Cuando Empezare A Vivir", "1. Madre Sabe Bien", "2. Mi Vida Empieza Aqui", "3. Mi Sueño Ideal",
                    "4. Flor Que Da Fulgor", "5. Madre Sabe Bien (Reprise)", "6. Veo En Ti La Luz", "7. Algo Quiero" };
                cout << tangled[0] << endl;
                cout << tangled[1] << endl;
                cout << tangled[2] << endl;
                cout << tangled[3] << endl;
                cout << tangled[4] << endl;
                cout << tangled[5] << endl;
                cout << tangled[6] << endl;
                cout << tangled[7] << endl;
                cin >> tgld;

                system("cls");

                switch (tgld) {

                case 0:
                    cuandoEmpezareAVivir();
                    break;

                case 1:
                    madreSabeBien();
                    break;

                case 2:
                    miVidaEmpiezaAsi();
                    break;

                case 3:
                    miSuenoIdeal();
                    break;

                case 4:
                    florQueDaFulgor();
                    break;

                case 5:
                    madreSabeBienReprise();
                    break;

                case 6:
                    veoEnTiLaLuz();
                    break;

                case 7:
                    algoQuiero();
                    break;

                default:
                    cout << "ERROR \n";
                    break;
                }
            }
            else {
                cout << "ERROR \n";
            }
                        
            break;

        default:
            cout << "ERROR \n";
            break;
        }

   // } while (menu == 0);

    return 0;
}