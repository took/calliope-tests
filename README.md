# calliope-tests
Einge einfache Beispiel-Programme für das Calliope-Board.

Siehe auch:
* http://calliope.cc/
* https://github.com/calliope-mini/

## How to use
### Beispiele direkt auf Calliope speichern
So kannst du die Beispiele direkt auf deinem eigenen Calliope laufen lassen:

* Auf der Seite https://github.com/took/calliope-tests/blob/master/rainbow/NEPOprog.hex einen Rechts-Klick auf den Button "Raw" machen und dann angeben: "Ziel speichern unter..."
* Den Download direkt auf dem Calliope speichern (Festplatte "MINI")

### In den Editor laden
So kannst du die Beispiele im Simulator laufen lassen und selber verändern und dann auf deinem eigenen Calliope laufen lassen:

* Die Datei https://github.com/took/calliope-tests/blob/master/rainbow/NEPOprog.xml runterladen und merken, wo man sie auf der eigenen Festplatte gespeichert hat. 
* Auf https://lab.open-roberta.org/ auswählen: Calliope, dann genauer Auswählen: Calliope 2017
* Dann auf dieser Webseite links oben klicken auf: Bearbeiten -> importiere Programm
* Und dort dann die runtergeladene Datei auf der eigenen Festplatte auswählen

## Beispiele

### [Rainbow](./rainbow)
_Schwierigkeit: Fortgeschritten_

Zeigt auf der RGB-LED vom Calliope-Board im Verlauf von eingen Sekunden alle Regenbogenfarben an.

Siehe auch README.md im entsprechenden Ordner.

### [Temperaturanzeige](./temperaturanzeige)
_Schwierigkeit: Sehr einfach_

![alt text](https://github.com/took/calliope-tests/blob/master/temperaturanzeige/Screenshot.png "Temperaturanzeige")

Zeigt die aktuell gemessene Temperatur als Lauftext in der 5x5-Matrix an.

### [Temperaturwarnung](./temperaturwarnung)
_Schwierigkeit: Mittel_

Gibt Warn-Ton ab, wenn der Temperatur-Sensor mehr als 7 Grad mißt. Signalisiert mit Rot blinkender LED Temperaturen über 5 Grad. Ansonsten zeigt die RGB-LED duch ein grünes Blinken betriebsbereitschaft an.

### [Einfache Bildgalerie](./bildgalerie-einfach)
_Schwierigkeit: Einfach_

![alt text](https://github.com/took/calliope-tests/blob/master/bildgalerie-einfach/Screenshot.png "Einfache Bildgalerie")

Sehr einfache Version einer Bildgalerie. Button B zeigt das jeweils nächste Bild.

### [Fortgeschrittene Bildgalerie](./bildgalerie-fortgeschritten)
_Schwierigkeit: Fortgeschritten_

Bildgalerie mit Zurück- und Vor-Button (A und B)


## Copyleft

Diese Beispiele sollen jedem zugänglich und nutzbar sein. Dafür scheint die GPL geeignet.

### Einige Dateien in diesem Projekt wurden kopiert und unterliegen anderen Lizenzen

* rainbow/HSV-RGB-comparison.svg Author en:user:Goffrie, GNU Free Documentation License, https://commons.wikimedia.org/wiki/File:HSV-RGB-comparison.svg

## Pull-Requests

Welcome!

## FAQ

TODO
