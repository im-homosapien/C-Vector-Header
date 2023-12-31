#ifndef VECTOR_H
#define VECTOR_H

// Libraries
#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <math.h>
#include <stdbool.h>

// Definitions
#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1
#define BUFFER_SIZE 255
#define VEC_END_FLAG (FLT_MIN + FLT_EPSILON)

// Typedefs
typedef float vector;

// Global Variables
extern int PRINTV_SIGDIGITS;

// Vector Utilities
vector *v_make(int);      /* Allocates */
void v_destroy(vector *); /* Releases memory held by the vector */
void assertValidVec(vector *);

int v_len(vector *);
void v_print(vector *);
vector *v_ones(int);
vector *v_fill(int, float);

// Vector I/O
vector *v_read(char *);         /* Reads vector from file */
void v_write(char *, vector *); /* Writes vector from file */

// Vector & Vector-Scalar Operations
bool validOperation(vector *a, vector *b);
vector *v_add(vector *, vector *);
vector *v_sub(vector *, vector *);
vector *v_mul(vector *, float);
vector *v_div(vector *, float);

// Vector Algebra
vector *v_unit(vector *);
float v_mag(vector *);
float v_sum(vector *);

float v_cosine(vector *, vector *);
float v_project(vector *, vector *);
float v_dot(vector *, vector *);

// Data Science
float v_mean(vector *vec);
float v_range(vector *vec);
float v_std(vector *vec);
vector *v_clamp(vector *, float, float);
vector *v_minmaxscale(vector *);
vector *v_standardize(vector *);

#endif /* VECTOR_H */