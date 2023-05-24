#--------------------------------------- game/src/input_main.cpp

// Include kýsmýna ekle
#include "../../common/service.h"

// Arat
	int len = snprintf(chatbuf, sizeof(chatbuf), "%s : %s", ch->GetName(), buf);

// Deðiþtir
#ifdef ENABLE_CHAT_COLOR_SYSTEM
	static const char* colorbuf[] = {"|cFFffa200|H|h[GM]|h|r", "|cFFff0000|H|h[Shinsoo]|h|r", "|cFFffc700|H|h[Chunjo]|h|r", "|cFF000bff|H|h[Jinno]|h|r"};
	int len = snprintf(chatbuf, sizeof(chatbuf), "%s %s : %s", (ch->IsGM()?colorbuf[0]:colorbuf[MINMAX(0, ch->GetEmpire(), 3)]), ch->GetName(), buf);
#else
	int len = snprintf(chatbuf, sizeof(chatbuf), "%s : %s", ch->GetName(), buf);
#endif


#--------------------------------------- game/common/service.h

// Ekle
#define ENABLE_CHAT_COLOR_SYSTEM


-----------------------------------------RENK KODLARI
Açýk Kýrmýzý - |cffff6060
Açýk Mavi - |cff00ccff
Turkuaz Mavi - |cff00C78C
Bahar Yeþili - |cff00FF7F
Yeþil & SARI - |cffADFF2F
Mavi - |cff0000ff
Mor - |cffDA70D6
Yeþil - |cff00ff00
Kýrmýzý - |cffff0000
Altýn - |cffffcc00
Altýn2 - |cffFFC125
GRÝ - |cff888888
Beyaz - |cffffffff
Alt Beyaz - |cffbbbbbb
Eflatun - |cffff00ff
Sarý - |cffffff00
Turuncu - |cffFF4500
Çikolata - |cffCD661D
Mavi 3 - |cff00ffff
Fildiþi  - |cff8B8B83
Açýk Sarý - |cffFFFFE0

ALICEBLUE            "|cFFF0F8FF"
ANTIQUEWHITE         "|cFFFAEBD7"
AQUA                 "|cFF00FFFF"
AQUAMARINE           "|cFF7FFFD4"
AZURE                "|cFFF0FFFF"
BEIGE                "|cFFF5F5DC"
BISQUE               "|cFFFFE4C4"
BLACK                "|cFF000000"
BLANCHEDALMOND       "|cFFFFEBCD"
BLUE                 "|cFF0000FF"
BLUEVIOLET           "|cFF8A2BE2"
BROWN                "|cFFA52A2A"
BURLYWOOD            "|cFFDEB887"
CADETBLUE            "|cFF5F9EA0"
CHARTREUSE           "|cFF7FFF00"
CHOCOLATE            "|cFFD2691E"
CORAL                "|cFFFF7F50"
CORNFLOWERBLUE       "|cFF6495ED"
CORNSILK             "|cFFFFF8DC"
CRIMSON              "|cFFDC143C"
CYAN                 "|cFF00FFFF"
DARKBLUE             "|cFF00008B"
DARKCYAN             "|cFF008B8B"
DARKGOLDENROD        "|cFFB8860B"
DARKGRAY             "|cFFA9A9A9"
DARKGREEN            "|cFF006400"
DARKKHAKI            "|cFFBDB76B"
DARKMAGENTA          "|cFF8B008B"
DARKOLIVEGREEN       "|cFF556B2F"
DARKORANGE           "|cFFFF8C00"
DARKORCHID           "|cFF9932CC"
DARKRED              "|cFF8B0000"
DARKSALMON           "|cFFE9967A"
DARKSEAGREEN         "|cFF8FBC8B"
DARKSLATEBLUE        "|cFF483D8B"
DARKSLATEGRAY        "|cFF2F4F4F"
DARKTURQUOISE        "|cFF00CED1"
DARKVIOLET           "|cFF9400D3"
DEEPPINK             "|cFFFF1493"
DEEPSKYBLUE          "|cFF00BFFF"
DIMGRAY              "|cFF696969"
DODGERBLUE           "|cFF1E90FF"
FIREBRICK            "|cFFB22222"
FLORALWHITE          "|cFFFFFAF0"
FORESTGREEN          "|cFF228B22"
FUCHSIA              "|cFFFF00FF"
GAINSBORO            "|cFFDCDCDC"
GHOSTWHITE           "|cFFF8F8FF"
GOLD                 "|cFFFFD700"
GOLDENROD            "|cFFDAA520"
GRAY                 "|cFF808080"
GREEN                "|cFF008000"
GREENYELLOW          "|cFFADFF2F"
HONEYDEW             "|cFFF0FFF0"
HOTPINK              "|cFFFF69B4"
INDIANRED            "|cFFCD5C5C"
INDIGO               "|cFF4B0082"
IVORY                "|cFFFFFFF0"
KHAKI                "|cFFF0E68C"
LAVENDER             "|cFFE6E6FA"
LAVENDERBLUSH        "|cFFFFF0F5"
LAWNGREEN            "|cFF7CFC00"
LEMONCHIFFON         "|cFFFFFACD"
LIGHTBLUE            "|cFFADD8E6"
LIGHTCORAL           "|cFFF08080"
LIGHTCYAN            "|cFFE0FFFF"
LIGHTGRAY            "|cFFD3D3D3"
LIGHTGREEN           "|cFF90EE90"
LIGHTPINK            "|cFFFFB6C1"
LIGHTRED             "|cFFFF6060"
LIGHTSALMON          "|cFFFFA07A"
LIGHTSEAGREEN        "|cFF20B2AA"
LIGHTSKYBLUE         "|cFF87CEFA"
LIGHTSLATEGRAY       "|cFF778899"
LIGHTSTEELBLUE       "|cFFB0C4DE"
LIGHTYELLOW          "|cFFFFFFE0"
LIME                 "|cFF00FF00"
LIMEGREEN            "|cFF32CD32"
LINEN                "|cFFFAF0E6"
MAGENTA              "|cFFFF00FF"
MAROON               "|cFF800000"
MEDIUMAQUAMARINE     "|cFF66CDAA"
MEDIUMBLUE           "|cFF0000CD"
MEDIUMORCHID         "|cFFBA55D3"
MEDIUMPURPLE         "|cFF9370DB"
MEDIUMSEAGREEN       "|cFF3CB371"
MEDIUMSLATEBLUE      "|cFF7B68EE"
MEDIUMSPRINGGREEN    "|cFF00FA9A"
MEDIUMTURQUOISE      "|cFF48D1CC"
MEDIUMVIOLETRED      "|cFFC71585"
MIDNIGHTBLUE         "|cFF191970"
MINTCREAM            "|cFFF5FFFA"
MISTYROSE            "|cFFFFE4E1"
MOCCASIN             "|cFFFFE4B5"
NAVAJOWHITE          "|cFFFFDEAD"
NAVY                 "|cFF000080"
OLDLACE              "|cFFFDF5E6"
OLIVE                "|cFF808000"
OLIVEDRAB            "|cFF6B8E23"
ORANGE               "|cFFFFA500"
ORANGERED            "|cFFFF4500"
ORCHID               "|cFFDA70D6"
PALEGOLDENROD        "|cFFEEE8AA"
PALEGREEN            "|cFF98FB98"
PALETURQUOISE        "|cFFAFEEEE"
PALEVIOLETRED        "|cFFDB7093"
PAPAYAWHIP           "|cFFFFEFD5"
PEACHPUFF            "|cFFFFDAB9"
PERU                 "|cFFCD853F"
PINK                 "|cFFFFC0CB"
PLUM                 "|cFFDDA0DD"
POWDERBLUE           "|cFFB0E0E6"
PURPLE               "|cFF800080"
RED                  "|cFFFF0000"
ROSYBROWN            "|cFFBC8F8F"
ROYALBLUE            "|cFF4169E1"
SADDLEBROWN          "|cFF8B4513"
SALMON               "|cFFFA8072"
SANDYBROWN           "|cFFF4A460"
SEAGREEN             "|cFF2E8B57"
SEASHELL             "|cFFFFF5EE"
SIENNA               "|cFFA0522D"
SILVER               "|cFFC0C0C0"
SKYBLUE              "|cFF87CEEB"
SLATEBLUE            "|cFF6A5ACD"
SLATEGRAY            "|cFF708090"
SNOW                 "|cFFFFFAFA"
SPRINGGREEN          "|cFF00FF7F"
STEELBLUE            "|cFF4682B4"
TAN                  "|cFFD2B48C"
TEAL                 "|cFF008080"
THISTLE              "|cFFD8BFD8"
TOMATO               "|cFFFF6347"
TRANSPARENT          "|c00FFFFFF"
TURQUOISE            "|cFF40E0D0"
VIOLET               "|cFFEE82EE"
WHEAT                "|cFFF5DEB3"
WHITE                "|cFFFFFFFF"
WHITESMOKE           "|cFFF5F5F5"
YELLOW               "|cFFFFFF00"
YELLOWGREEN          "|cFF9ACD32"