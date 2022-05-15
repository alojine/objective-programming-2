# objective-programming
Repository created for objective programming using C++

# v0.1
Šioje versijoje uždavinys buvo sprendžiamas dviem budais:
1. Cmasyvo būdu **Cmasyvas.cpp** faile - Studento duomenys saugomi struktūroje *data*
2. Vektorių būdu **Vektoriai.cpp** faile - Studento duomenys saugomi *data* tipo *vektoriuje*

Programa turi 7 funkcijas: input, output, mediana, vidurkis, select, addmark, genrandom. Programa paklausia vartotojo kiek jis noretų sugeneruoti studentų, paprašo įvesti vardą, pavardę, pažymių kiekį(po įvedimo galime pasirinkti ar norime papildytį kiekį), pasirenkame kaip vesti rezultatą, medianos ar vidurkio metodu.

Į terminalą išvedami šie duomenys: *Vardas*, *Pavardė*, *Galutinis rezultatas*(Vidurkis/Mediana).

# v0.2
Šioje versijoje kodas yra atnaujintas, pridėtas skaitymas ir rašymas į failą. 

Paleidus programa vartotojo paklausiama ar jis nori skaityti studentus iš failo:

Jei **ne**: vyksta praeitos versijos **v0.1** skaitymas iš terminalo.

Jei **taip**: Nuskaitomas failas *studentai.txt*, į failą *kursiokai.txt* išvedamas studento vardas, pavardė, galutinis vidukis ir mediana.

# v0.3
Šioje versijoje atliktas praeitos versijos(v0.2) kodo refactoringas. Programa veikia tuo pačiu principu, tačiau yra išskaidyta į header, resource ir source failus.
1. Pagrindinis failas: *Source.cpp* savyje laiko header failus ir pagrindinę main funkcija kurioje atliktas exception handling skaitymui ir rašymui į failą.
2. Aplanke: *Headers* yra visi programai reikalingi header(.h) failai.
3. Aplanke: *Resources* yra visi programai reikalingi papildomi (.cpp) faila kuriuose aprašytos funkcijos.

# v0.4
Šioje versijoje sukurtas failu generatorius ir matuojami programos vykdymo laikai.
Vartotojas pasirenka generuoti failą automatiškai.
Vartotojas pasirenka naudoti failų generatorių.
Vartotojas iveda failo pavadinimą ir kiekį studentų kuriuos nori sugeneruoti.

Programos kodas yra isskaidytas į tris pagrindinius failus:
1. Pagrindinis failas *Source.cpp* laiko (header) antraštes ir main funkciją.
2. *functions.cpp* laiko savyje funkcijų aprašus.
3. *headers.h* laiko savyje funkcijų antraštes
4. Failo skaitymas vyksta iš ivesto failo. Pvz: studentai100000.txt.
5. Failo išvedimas vyksta į du skirtingus failus: *kietiakai.txt*(studentams kurių galutinis balas >= 5.0) ir *nuskriaustukai.txt* (studentams kurių galutinis balas < 5.0).

Testavimui generuojami 5 atsitiktiniai studentų pažymiai.
Programos laikas nustatomas šiems kriterijams:
1. Failo kūrimui ir jo uždarymui.
2. Duomenų nuskaitymui iš failo.
3. Studentų rušiavimui į grupes.
4. Surušiuotų studentų išvedimą į du failus.
5. Visos programos laikas.

VECTOR
1000
<br>
Failo sudarymas uztruko: 0.0263304 s <br>
Failo nuskaitymas uztruko: 0.0062851 s <br>
Failo skirstymas i grupes uztruko: 0.0001799 s <br>
kietiakai.txt surasymas uztruko: 0.0010151 s <br>
nuskriaustukai.txt surasymas uztruko: 0.0052932 s <br>
Visa programa uztruko 0.0450208 s <br>

10000
<br>
Failo sudarymas uztruko: 0.395983 s <br>
Failo nuskaitymas uztruko: 0.0949548 s <br>
Failo skirstymas i grupes uztruko: 0.0021033 s <br>
kietiakai.txt surasymas uztruko: 0.0077206 s
nuskriaustukai.txt surasymas uztruko: 0.0415379 s <br>
Visa programa uztruko 0.571244 s <br>

100000
<br>
Failo sudarymas uztruko: 2.92119 s <br>
Failo nuskaitymas uztruko: 0.675066 s <br>
Failo skirstymas i grupes uztruko: 0.0210955 s <br>
kietiakai.txt surasymas uztruko: 0.0866178 s <br>
nuskriaustukai.txt surasymas uztruko: 0.389649 s <br>
Visa programa uztruko 4.16463 s <br>

1000000
<br>
Failo sudarymas uztruko: 38.2789 s <br>
Failo nuskaitymas uztruko: 13.4123 s <br>
Failo skirstymas i grupes uztruko: 0.267259 s <br>
kietiakai.txt surasymas uztruko: 0.937183 s <br>
nuskriaustukai.txt surasymas uztruko: 4.50081 s <br>
Visa programa uztruko 58.4967 s <br>

# v0.5
Programa atnaujinta galima rinktis konteinerio tipą į kurį vartotojas nori išsaugoti studentą
Palaidus programą:
1. Ar norite skityti duomenis is failo? (y/n) y
2. Ar norite ivesti faila? (y/n) y
3. Koki konteinerio tipa norite naudoti? vector - 'v', deque - 'd', list - 'l':
studentas išsaugomas į konteinerį tą kurio pirmąją raidę iveda.

Konteinerių spartos lyginimas:
<br>
|                     |       1000      |      10000     |     100000    |   1000000   |   10000000  |
| ------------------- | --------------- | -------------- | ------------- | ----------- | ----------- |
|VECTOR NUSKAITYMAS   |   0.0133934 s   |   0.0324202 s  |  0.343198 s   |  3.17078 s  |   29.5853 s |
|VECTOR RŪŠIAVIMAS    |   0.0001265 s   |   0.0348088 s  |  0.0198464 s  |  0.202764 s |   4.85033 s |
|DEQUE NUSKAITYMAS    |   0.0173607 s   |   0.0612086 s  |  0.329132 s   |  3.07914 s  |   30.1778 s |
|DEQUE RŪŠIAVIMAS     |   0.0001259 s   |   0.0008603 s  |  0.0108355 s  |  0.120002 s |   2.38933 s |
|LIST NUSKAITYMAS     |   0.051306 s    |   0.0343497 s  |  0.370915 s   |  3.5146 s   |   30.9815 s |
|LIST RŪŠIAVIMAS      |   0.0001457 s   |   0.0013439 s  |  0.0327031 s  |  0.135128 s |   3.52304 s |


Parametrai:
- CPU: Intel Core i5-10300H 2.5 GHz
- SSD: 476GB SAMSUNG MZVLQ512HALU
- RAM: 8GB 2933MHz

# v1.0

## Kaip paleisti programą: ##

Reikia parsisiųsti *mingw32* arba *chocolatey*, arba bet kokią komandų eilutės paketų tvarkyklę leidžiančią naudoti *Makefile*. Parsisiųskite *v1.0 release* failus ir išsaugokite juos faile. Tą padarius nueikite į *Command Prompt* arba *PowerShell*, nueikite į vietą kurioje išsaugoti failai, parašykite **make**, kai sukompiliuos executable failą, iveskite **./run** ir programa bus paleista.

## Programos realizacija: ##

 - Ar norite skityti duomenis is failo? (y/n) **n**
    - Jei norite kad programa isvestu vidurki iveskite 'y', jeigu mediana, iveskite 'n': **y** arba **n** 
    - Iveskite studentu skaiciu: **(betkoks sveikas skaicius)**
    - Iveskite studento varda: **(betkoks string tipo kintamasis)**
    - Iveskite studento pavarde: **(betkoks string tipo kintamasis)**
    - Iveskite pazymiu kieki: **(sveikas skaicius)**
    - Jei noretumete ivesti dar pazymiu iveskite 'y', jei ne 'n': **n**
      - Isvedama studento vardas, pavarde ir galutinis rezultaras
      
- Ar norite skityti duomenis is failo? (y/n) **y**
    - Ar norite ivesti faila? (y/n) **n** - skaito is *studentai.txt* failo, **y** 
    - Koki konteinerio tipa norite naudoti? vector - 'v', deque - 'd', list - 'l': *(konteinerio tipas)*
    - Kokia skirstymo strategija norite naudoti? 1 - 'y', 2 - 'n': *(skirstymo strategija)*
    - Iveskite studentu kieki: **(sveikas skaicius)**
    - (Vidurkis/Mediana) - (y/n) 
    
Sukuriamas failas (studentai + studentu kiekis) į jį sugeneruojami vardai, pavardės, pažymiai, vėliau yra nuskaitomas failas, suskaiciuojamas galutinis vidurkis arba mediana, suskirtomas pasirinktas konteineris pagal skirstymo būdą, surikiuojami pagal vardą ir išvedami į 2 skirtingus failus *kietiakai.txt* studentai kurių vidurkis penki ir daugiau, ir *nuskriaustukai.txt* kurių vidurkis mažesnis nei penki.

## Testavimai ##

### Naudojant pirmąją strategiją ###

|                     |       1000      |      10000     |     100000    |   1000000   |   10000000  |
| ------------------- | --------------- | -------------- | ------------- | ----------- | ----------- |
|VECTOR RŪŠIAVIMAS    |   0.0001401 s   |   0.0015573 s  |  0.0247494 s  |  0.259231 s |   3.27844 s |
|DEQUE RŪŠIAVIMAS     |   0.0001259 s   |   0.0008211 s  |  0.134224 s   |  0.134224 s |   3.06859 s |
|LIST RŪŠIAVIMAS      |   0.0010098 s   |   0.0014011 s  |  0.228691 s   |  0.228691 s |   2.26937 s |


### Naudojant antrąją strategiją ###

|                     |       1000      |      10000     |     100000    |   1000000   |   10000000  |
| ------------------- | --------------- | -------------- | ------------- | ----------- | ----------- |
|VECTOR RŪŠIAVIMAS    |   0.0001413 s   |   0.0008275 s  |  0.0175047 s  |  0.222046 s |   2.75799 s |
|DEQUE RŪŠIAVIMAS     |   0.0001771 s   |   0.001222 s   |  0.0185876 s  |  0.190788 s |   2.16689 s |
|LIST RŪŠIAVIMAS      |   0.0001098 s   |   0.000711 s  |  0.0170997 s  |  0.18972 s  |   2.08854 s |


### Programos veikimo laikas be generavimo ###

|                     |       1000      |      10000     |     100000    |   1000000   |   10000000  |
| ------------------- | --------------- | -------------- | ------------- | ----------- | ----------- |
|VECTOR               |   0.0797068 s   |   0.083429 s   |  0.54483 s    |  5.3933 s   |   54.824 s  |
|DEQUE                |   0.0978551 s   |   0.087919 s   |  0.55718 s    |  5.9456 s   |   59.228 s  |
|LIST                 |   0.0637336 s   |   0.0711814 s  |  0.5301 s     |  5.6935 s   |   52.579 s  |

### Testavimo išvada ###
- Greičiausias iš visų testuotų struktūros tipas yra **std::list**

Parametrai:
- CPU: Intel Core i5-10300H 2.5 GHz
- SSD: 476GB SAMSUNG MZVLQ512HALU
- RAM: 8GB 2933MHz

# v1.1
Šioje versijoje programa atlieka tas pačias funkcijas, bet yra pereita nuo **struct** prie **class**.

### Programos veikimo laikao palyginimas pagal optimizavimo flagus ###

|                     |       1000      |      10000     |     100000    |   1000000   |   10000000  |
| ------------------- | --------------- | -------------- | ------------- | ----------- | ----------- |
|O1                   |   0.0523598 s   |   0.102543 s   |  0.61359 s    |  7.4304 s   |   80.193 s  |
|O2                   |   0.0501326 s   |   0.096229 s   |  0.60365 s    |  6.8365 s   |   78.652 s  |
|O3                   |   0.0491632 s   |   0.092973 s   |  0.59381 s    |  6.2704 s   |   77.663 s  |

### Programos veikomo laikao palyginimas **struct** ir **class** ###

|       vector        |     100000    |   1000000   |
| ------------------- | ------------- | ----------- |
|struct               |  0.54483 s    |  5.3933 s   |
|class                |  0.59381 s    |  6.2704 s   |

# v1.2

**Studentas** klasei realizuotas rule of three, destructor, copy constructor, copy asignment operator.

# v1.5

**Studentas** klasei pridetas isvesties operatorius, sukurta abstrakti klase **Zmogus**, kuria paveldi **Studentas** klase.

# v2.0

