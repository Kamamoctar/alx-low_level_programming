#include "main.h"
| ---------------------- | ------------------------------------------------------------------- |
| `0-binary_to_uint.c`   | `unsigned int binary_to_uint(const char *b);`                       |
| `1-print_binary.c`     | `void print_binary(unsigned long int n);`                           |
| `2-get_bit.c`          | `int get_bit(unsigned long int n, unsigned int index);`             |
| `3-set_bit.c`          | `int set_bit(unsigned long int *n, unsigned int index);`            |
| `4-clear_bit.c`        | `int clear_bit(unsigned long int *n, unsigned int index);`          |
| `5-flip_bits.c`        | `unsigned int flip_bits(unsigned long int n, unsigned long int m);` |
| `100-get_endianness.c` | `int get_endianness(void);`                                         |

## Tâches :page_with_curl:

* **0. 0**
  * [0-binary_to_uint.c](./0-binary_to_uint.c) : Fonction en C qui convertit un nombre binaire en `unsigned int`.
  * Le paramètre `b` est un pointeur vers une chaîne de caractères composée de `0` et de `1`.
  * Si `b` est `NULL` ou s'il y a un ou plusieurs caractères dans `b` qui ne sont pas `0` ou `1` - retourne `0`.
  * Sinon - retourne le nombre converti.

* **1. 1**
  * [1-print_binary.c](./1-print_binary.c) : Fonction en C qui affiche la représentation binaire d'un nombre.

* **2. 10**
  * [2-get_bit.c](./2-get_bit.c) : Fonction en C qui renvoie la valeur d'un bit à un index donné.
  * Les indices commencent à `0`.
  * En cas d'erreur - retourne `-1`.
  * Sinon - retourne la valeur du bit à l'index donné.

* **3. 11**
  * [3-set_bit.c](./3-set_bit.c) : Fonction en C qui définit la valeur d'un bit à un index donné à `1`.
  * En cas d'erreur - retourne `-1`.
  * Sinon - retourne `1`.

* **4. 100**
  * [4-clear_bit.c](./4-clear_bit.c) : Fonction en C qui définit la valeur d'un bit à un index donné à `0`.
  * En cas d'erreur - retourne `-1`.
  * Sinon - retourne `1`.

* **5. 101**
  * [5-flip_bits.c](./5-flip_bits.c) : Fonction en C qui renvoie le nombre de bits à inverser pour passer d'un nombre à un autre.

* **6. Endianness**
  * [100-get_endianness.c](./100-get_endianness.c) : Fonction en C qui vérifie l'endianness.
  * Si c'est du big-endian - retourne `0`.
  * Si c'est du little-endian - retourne `1`.

* **7. Crackme3**
  * [101-password](./101-password) : Fichier contenant le mot de passe pour l'exécutable [crackme3](https://github.com/holbertonschool/0x13.c).

