# Exercise "Lichterkette"

## Problem Description

Eine Baumarktkette möchte die Wirkung von LED-Lichterketten testen und bittet Sie daher, eine Simulationssoftware in “C” zu schreiben.

Eine Lichterkette besteht aus mehreren LED Lampen in den Farben:

| Code | Farbe   |
|------|---------|
| r    | Rot     |
| g    | Grün    |
| b    | Blau    |
| w    | Weiß    |
| o    | Orange  |
| m    | Magenta |


Die Lichterkette wird in Ihrem Programm in einer verketteten Liste gespeichert.
Ein Menü führt durch das Programm:

1. a Anfang:
Mehrere Lichter (Farben) werden eingelesen, bis eine 0 eingegeben wird. Die Lichter werden vorne eingefügt.

2. e Ende:
Mehrere Lichter (Farben) werden eingelesen, bis eine 0 eingegeben wird. Die Lichter werden
hinten eingefügt.

3. i Einfügen (Insert):
Zuerst wird nach einer Position gefragt. Dann wird ein Licht (Farbe) eingelesen. Das Licht wird nach der Position eingefügt.

4. l Löschen:
Eine Position wird gefragt und das Licht wird gelöscht.

5. u Umkehren:
Die Lichterkette umkehren.

6. x Beenden (eXit):
Das Programm wird beendet.

Positionen sind 1-Basiert. Nach jeder Eingabe wird die Lichterkette automatisch ausgegeben.


## Examples

Ein- und Ausgabe auf der Konsole:

> ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
> m: e
> l: r
> l: g
> l: b
> l: 0
> Lichterkette: r - g - b
> m: a
> l: w
> l: 0
> Lichterkette: w - r - g - b
> m: i
> p: 2
> l: o
> Lichterkette: w - r - o - g - b
> m: l
> p: 4
> Lichterkette: w - r - o - b
> m: u
> Lichterkette: b - o - r - w
> m: x
> ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~





