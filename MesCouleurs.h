#ifndef _MesCouleursH_
#define _MesCouleursH_

#include<Arduino.h>


#define RGB565(r,g,b) ((((r>>3)<<11) | ((g>>2)<<5) | (b>>3)))

#define Noir_Clair RGB565(20, 20, 20)
#define Gris RGB565(128,128,128)
#define Gris_150 RGB565(150,150,150)
#define Gris_Claire RGB565(60,60,60)
#define Gris_Sourie RGB565(183,183,183)
#define Gris_SouriePlus RGB565(200,200,200)
#define Vert RGB565(0,255,0)
#define Violet RGB565(159, 117, 166)
#define BleuCiel RGB565(165, 199, 232) 
#define BleuClaire RGB565(197, 222, 243)
#define BleuViolet RGB565(54, 55, 182)
#define BlancCasser RGB565(227, 227, 227)
#define BlancVet RGB565(235, 248, 245) 
#define Blanc RGB565(255, 255, 255)
#define RoseClaire RGB565(255, 230, 230)
#define MarronClaire RGB565(203, 77, 77)

#define AliceBlue	RGB565(240, 248, 255)
#define AntiqueWhite	RGB565(250, 235, 215)
#define Aqua	RGB565(0, 255, 255)
#define Aquamarine RGB565(127, 255, 212)
#define Black RGB565(0, 0, 0)
#define FloralBlanc RGB565(255, 250, 240)
#define GrisArdoise RGB565(112, 128, 144)
#define PrintempsVert RGB565(0, 255, 127)
#define Tan RGB565(210, 180, 140)
#define Sienna RGB565(160, 82, 45)
#define Or RGB565(255, 215, 0)
#define Rouge_fonce RGB565(139, 0, 0)
#define BlueViolet RGB565(138, 43, 226)
#define CadetBlue RGB565(95, 158, 160)
#define DarkOliveGreen RGB565(85, 107, 47)
#define RSlateBlue RGB565(106,90,205)
#define Thistle RGB565(216,191,216)
#define Persian_Indigo RGB565(50, 18, 122)
#define Navy_Blue RGB565(0, 0, 128)
#define Imperial_Blue RGB565(0, 35, 149)
#define Anti_Flash_White RGB565(242, 243, 244)


#endif // ends #ifndef _ControlepPropertyH_