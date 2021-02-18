********************************* INTRODUCTION *********************************
--------------------------------------------------------------------------------
  This program will allow users to input a season and output one of 6 possible
fruits for each season. Input should be read from a file into a 2-dimensional
array. If the user selects a season, one of the fruits in the season for that
month should be randomly selected to output. The user should also have the option
to output a table with all the fruits. If they choose Display All, a sub-menu
should be displayed allowing the user to choose between viewing the fruits by
season or by variety
  This is a project that I have done back in Fall 2017 at Saddleback College
demonstrating the use of functions, enumeration, and 2D-array
  Notice: Eclipse IDE shows perfect output demonstration; however, for some
reasons, the output for the "Display All" option does not fully show the name
of season and fruit.
--------------------------------------------------------------------------------

******************************** PREREQUISITES *********************************
--------------------------------------------------------------------------------
o- Eclipse or VS code
o- VM
--------------------------------------------------------------------------------

********************************** EXECUTION ***********************************
--------------------------------------------------------------------------------
$g++ -Wall -std=c++17 *.cpp
--------------------------------------------------------------------------------

****************************** SAMPLE EXECUTION ********************************
--------------------------------------------------------------------------------
  Below is the sample execution for this project

**************************************************
* PROGRAMMED BY : Kevin Truong
* CLASS         : CS1A - TTh - 1p-4:20p
* ASSIGNMENT #11: Multidimensional Arrays
**************************************************

 ____  ____  _  _  __  ____    ____  ____  __    ____  ___  ____  __  ____
(  __)(  _ \/ )( \(  )(_  _)  / ___)(  __)(  )  (  __)/ __)(_  _)/  \(  _ \
 ) _)  )   /) \/ ( )(   )(    \___ \ ) _) / (_/\ ) _)( (__   )( (  O ))   /
(__)  (__\_)\____/(__) (__)   (____/(____)\____/(____)\___) (__) \__/(__\_)

Please Select Fruit File: Fruit.txt


********************
   FRUIT SELECTOR
********************
(W) Winter
(S) Spring
(U) Summer
(F) Fall
(A) Display All
(X) Exit

What season is it? K

*** INVALID INPUT - Please input a W, S, U, F, A, or X ***


********************
   FRUIT SELECTOR
********************
(W) Winter
(S) Spring
(U) Summer
(F) Fall
(A) Display All
(X) Exit

What season is it? W

For WINTER, you might want to try a(n) BraeBurn Apple


********************
   FRUIT SELECTOR
********************
(W) Winter
(S) Spring
(U) Summer
(F) Fall
(A) Display All
(X) Exit

What season is it? P

*** INVALID INPUT - Please input a W, S, U, F, A, or X ***


********************
   FRUIT SELECTOR
********************
(W) Winter
(S) Spring
(U) Summer
(F) Fall
(A) Display All
(X) Exit

What season is it? U

For SUMMER, you might want to try a(n) Calamondin


********************
   FRUIT SELECTOR
********************
(W) Winter
(S) Spring
(U) Summer
(F) Fall
(A) Display All
(X) Exit

What season is it? S

For SPRING, you might want to try a(n) Star Ruby Red Grapefruit


********************
   FRUIT SELECTOR
********************
(W) Winter
(S) Spring
(U) Summer
(F) Fall
(A) Display All
(X) Exit

What season is it? u

For SUMMER, you might want to try a(n) Reed Avocado


********************
   FRUIT SELECTOR
********************
(W) Winter
(S) Spring
(U) Summer
(F) Fall
(A) Display All
(X) Exit

What season is it? s

For SPRING, you might want to try a(n) Hass Avocado


********************
   FRUIT SELECTOR
********************
(W) Winter
(S) Spring
(U) Summer
(F) Fall
(A) Display All
(X) Exit

What season is it? w

For WINTER, you might want to try a(n) Minneola Tangelo


********************
   FRUIT SELECTOR
********************
(W) Winter
(S) Spring
(U) Summer
(F) Fall
(A) Display All
(X) Exit

What season is it? a

(S) Season
(V) Variety
Choose display format: s

SEASON    VARIETY     FRUIT
--------  ----------  -----------------------
WINTER    Grapefruit  Oroblanco Grapefruit
          Mandarin    Satsuma Mandarin
          Orange      Moro Blood Orange
          Exotic      Minneola Tangelo
          Apple       BraeBurn Apple
          Avocado     Fuerte Avocado

SPRING    Grapefruit  Star Ruby Red Grapefruit
          Mandarin    Honey Mandarin
          Orange      Washington Navel Orange
          Exotic      Chandler Pummelo
          Apple       Kanzi Apple
          Avocado     Hass Avocado

SUMMER    Grapefruit  Rio Red Grapefruit
          Mandarin    Gold Nugget Mandarin
          Orange      Lane Late Navel Orange
          Exotic      Calamondin
          Apple       Early Windsor Apple
          Avocado     Reed Avocado

FALL      Grapefruit  Marsh Grapefruit
          Mandarin    Kishu Minu Mandarin
          Orange      Valencia Orange
          Exotic      Yuzu
          Apple       Gala Apple
          Avocado     Dwarf Avocado


********************
   FRUIT SELECTOR
********************
(W) Winter
(S) Spring
(U) Summer
(F) Fall
(A) Display All
(X) Exit

What season is it? a

(S) Season
(V) Variety
Choose display format: v

VARIETY     SEASON    FRUIT
----------  --------  -----------------------
Grapefruit  WINTER    Oroblanco Grapefruit
            SPRING    Star Ruby Red Grapefruit
            SUMMER    Rio Red Grapefruit
            FALL      Marsh Grapefruit

Mandarin    WINTER    Satsuma Mandarin
            SPRING    Honey Mandarin
            SUMMER    Gold Nugget Mandarin
            FALL      Kishu Minu Mandarin

Orange      WINTER    Moro Blood Orange
            SPRING    Washington Navel Orange
            SUMMER    Lane Late Navel Orange
            FALL      Valencia Orange

Exotic      WINTER    Minneola Tangelo
            SPRING    Chandler Pummelo
            SUMMER    Calamondin
            FALL      Yuzu

Apple       WINTER    BraeBurn Apple
            SPRING    Kanzi Apple
            SUMMER    Early Windsor Apple
            FALL      Gala Apple

Avocado     WINTER    Fuerte Avocado
            SPRING    Hass Avocado
            SUMMER    Reed Avocado
            FALL      Dwarf Avocado


********************
   FRUIT SELECTOR
********************
(W) Winter
(S) Spring
(U) Summer
(F) Fall
(A) Display All
(X) Exit

What season is it? f

For FALL, you might want to try a(n) Dwarf Avocado


********************
   FRUIT SELECTOR
********************
(W) Winter
(S) Spring
(U) Summer
(F) Fall
(A) Display All
(X) Exit

What season is it? x

Thank you for using the fruit selector program!
