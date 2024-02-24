/**********************************************************************************
 *                                                                                *
 *  DynELA Finite Element Code v.4.0                                              *
 *  by Olivier PANTALE                                                            *
 *  Olivier.Pantale@enit.fr                                                       *
 *                                                                                *
 *********************************************************************************/
//@!CODEFILE = DynELA-H-file
//@!BEGIN = PRIVATE

#ifndef __dnlKernel_Defines_h__
#define __dnlKernel_Defines_h__

// SWIG option
// Turn on this option if you want complete support
// of DynELA Python interpreter
#define CSWIG

// Compilation defines for optimization
//#define OPTIMIZE     // This option activates optimized algorithms of the DynELA code. This also desactivate the following options of the code \ref MEM_funct, \ref VERIF_bounds, \ref VERIF_maths, \ref VERIF_alloc and \ref VERIF_assert.
#define VERIF_bounds // Verify the boundaries (indices of matrices and vectors). If the indices are out of bounds, this generates an error.
#define VERIF_maths  // Verify the coherence of mathematical functions such as divisions by zero.
#define VERIF_alloc  // Verify the memory allocations during the execution of the program. For example after each call to the new or malloc function.
#define VERIF_assert // Activates the mechanism of \b assert() verifications

#define plotFileExtension ".plot" // Definition of the extension associated to the graphic plots file of DynELA

// turn off all verifs if OPTIMIZE is on
#ifdef OPTIMIZE
#ifdef VERIF_bounds
#undef VERIF_bounds
#endif
#ifdef VERIF_alloc
#undef VERIF_alloc
#endif
#ifdef VERIF_maths
#undef VERIF_maths
#endif
#ifdef VERIF_assert
#undef VERIF_assert
#endif
#endif

#endif
