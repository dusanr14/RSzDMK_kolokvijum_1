#ifndef UTIL_H_
#define UTIL_H_

#include <stdint.h>

/// makro za definisanje smera
#define UP 1
// makro za definisanje smera
#define DOWN 0

/***
 * void Sort - funkcija koja sortira niz
 * @param array_lenght- duzina niza
 * @return  Nema povratnu vrednost
 *
 */
void Sort(int16_t *array, int16_t array_length, int8_t mode);


/***
 * int8_t Check -
 * vrsi proveru da li je niz geometrijski
 * @return  ima povratnu vrednost
 *
 */
int8_t Check(int16_t *array);

#endif /* UTIL_H_ */
