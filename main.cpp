#include<iostream>
#include"Image_Class.h"
using namespace std;
int main() {
    Image I("C:\\Users\\ASUS\\Downloads\\wallpaperflare.com_wallpaper (11).jpg") ;
    for (int i=0 ; i<I.width ; i++) {
        for (int j=0 ; j<I.height ; j++) {
            for (int k=0 ; k<I.channels ; k++) {
                unsigned int add =10;
                if (k == 0) {
                    add =50;
                }
                else if (k == 1) {
                    add =30;
                }

                unsigned int newI = I(i,j,k) + add ;
                if (newI > 255) {
                    newI = 255;
                }
                else {
                    I(i,j,k) = newI;
                }

            }
        }
    }
    I.saveImage("C:\\Users\\ASUS\\Downloads\\ooo0o0.png");
    cout <<"filter applied successfully" << endl;
    return 0;
}









