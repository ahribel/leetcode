//
// Created by kuwi on 5/2/25.
//

#include "solution_0011.h"

// find max min(a,b)*distance(a,b)

// intuicja
// wsk1 na poczatku, wsk2 na koncu
// woda = (koniec-poczatek)*min(koniec,poczatek)
// stopniowo zwiekszaj poczatek i zmniejszaj koniec poki poczatek < koniec
// przechowuj max_poczatek i max_koniec
// jesli (*poczatek < *koniec)
// jesli poczatek > min(max_poczatek,max_koniec) // na pewno wyzszy zbiornik, potencjalnie wiecej wody
//      jesli (koniec - poczatek) * min(poczatek,koniec) > woda
//          woda = (max(koniec) - next(poczatek)) * min(next(poczatek),max(koniec))
//          max(poczatek) = next(poczatek)
//      else: nic
// jesli (prev(koniec) > min(max(poczatek),max(koniec)) // potencjalnie wiecej wody
//      jesli (prev(koniec) - max(poczatek)) * min(prev(koniec), max(poczatek)) > woda
//          woda = (prev(koniec) - max(poczatek)) * min(prev(koniec), max(poczatek))
//          max(koniec) = prev(koniec)
//      else: nic

// do sprawdznia - czy zamiast wyliczac cale wyrazenia mozna iteracyjnie domnazac

namespace sol_0011_a {
    int maxArea(vector<int>& height) {
        auto beg { height.begin() };
        auto end { prev(height.end()) };
        auto water { (end - beg) * min(*beg, *end) };
        auto max_beg = beg;
        auto max_end = end;
        while (beg < end) {
            if (*beg < *end) {
                if (*beg > min(*max_beg, *max_end)) {
                    if ((end - beg) * min(*beg, *end) > water) {
                        water = (end - beg) * min(*beg, *end);
                    }
                    max_beg = beg;
                }
                ++beg;
            } else {
                if (*end > min(*max_beg, *max_end)) {
                    if ((end - beg) * min(*end, *beg) > water) {
                        water = (end - beg) * min(*end, *beg);
                    }
                    max_end = end;
                }
                --end;
            }
        }
        return water;
    }
}