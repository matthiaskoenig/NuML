/* src/common/libnuml-namespace.h.  Generated from libnuml-namespace.h.in by configure.  */
/**
* Begin svn Header
* $Rev$:	Revision of last commit
* $Author$:	Author of last commit
* $Date$:	Date of last commit
* $HeadURL$
* $Id$
* End svn Header
* ***************************************************************************
* This file is part of libNUML.  Please visit http://code.google.com/p/numl/for more
* information about NUML, and the latest version of libNUML.
* Copyright (c) 2013 The University of Manchester.
*
* This library is free software; you can redistribute it and/or modify it
* under the terms of the GNU Lesser General Public License as published
* by the Free Software Foundation.  A copy of the license agreement is
* provided in the file named "LICENSE.txt" included with this software
* distribution and also available online as http://www.gnu.org/licenses/lgpl.html
*
* The original code was initially developed by:
*
* 	SBML Team
* 	Control and Dynamical Systems, MC 107-81
* 	California Institute of Technology
* 	Pasadena, CA, 91125, USA
*
*  	http://www.sbml.org
* 	mailto:sbml-team@caltech.edu
*
* Adapted for NUML by:
*
* 	NUML Team
* 	Computational Systems Biology Group
* 	School of Computer Science
* 	The University of Manchester
* 	Manchester, M1 7DN UK
* 	mailto:josephodada@gmail.com
*
*   Contributor(s):
*   Joseph O. Dada, The University of Manchester - initial LIBNUML API and implementation
* ***************************************************************************
**/


#ifndef LIBNUML_NAMESPACE_H
#define LIBNUML_NAMESPACE_H 1

/*
 *
 * The idea of the following marcors are borrowed from 
 * Xerces-C++ XML Parser (http://xerces.apache.org/xerces-c/).
 *
 */

/* Define to enable libNUML C++ namespace */
/* #undef LIBNUML_USE_CPP_NAMESPACE */


#if defined(__cplusplus) && defined(LIBNUML_USE_CPP_NAMESPACE) && !defined(SWIG)
  /* C++ namespace of libNUML */
  #define LIBNUML_CPP_NAMESPACE            libnuml
  #define LIBNUML_CPP_NAMESPACE_BEGIN      namespace LIBNUML_CPP_NAMESPACE {
  #define LIBNUML_CPP_NAMESPACE_END        }
  #define LIBNUML_CPP_NAMESPACE_USE        using namespace LIBNUML_CPP_NAMESPACE;
  #define LIBNUML_CPP_NAMESPACE_QUALIFIER  LIBNUML_CPP_NAMESPACE::

  namespace LIBNUML_CPP_NAMESPACE {}
#else
  #define LIBNUML_CPP_NAMESPACE 
  #define LIBNUML_CPP_NAMESPACE_BEGIN
  #define LIBNUML_CPP_NAMESPACE_END  
  #define LIBNUML_CPP_NAMESPACE_USE 
  #define LIBNUML_CPP_NAMESPACE_QUALIFIER 
#endif


#endif  /* LIBNUML_NAMESPACE_H */
