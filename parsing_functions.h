#ifndef PARSING_FUNCTIONS_H
#define PARSING_FUNCTIONS_H
/* parsing_functions.c - Functions for parsing reStructuredText and
 * freeing element lists. */

#include "rst_peg.h"

/* free_element_list - free list of elements recursively */
void free_element_list(element * elt);
/* free_element - free element and contents */
void free_element(element *elt);

element * parse_references(char *string, int extensions);
element * parse_notes(char *string, int extensions, element *reference_list);
element * parse_rst(char *string, int extensions, element *reference_list, element *note_list);

#endif
