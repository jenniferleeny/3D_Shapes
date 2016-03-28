#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"
#include "parser.h"

int main( int argc, char** argv ) {

  screen s;

  color c;
  c.red = 0;
  c.blue = 0;
  c.green =225;

  struct matrix *points;
  struct matrix *edges;
  struct matrix *transform;
  clear_screen(s);
  
  points = new_matrix(4, 4);
  edges = new_matrix(4, 4);
  transform = new_matrix(4, 4);

  if ( argc == 2 )
    parse_file(//"script_3d", transform, edges, s);
	       argv[1], transform, edges, s );
  else
    parse_file( "stdin", transform, edges, s );
  free_matrix( points );
  free_matrix( transform );
  free_matrix( edges );
}  
