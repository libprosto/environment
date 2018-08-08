/* ************************************************************************* *\
 * This file is part of prosto library.                                      *
 *                                                                           *
 * prosto is free software; you can redistribute it and/or modify it         *
 * under the terms of the GNU Lesser General Public License as published by  *
 * the Free Software Foundation; either version 2.1 of the License.          *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser   *
 * General Public License for more details.                                  *
 *                                                                           *
 * You should have received a copy of the GNU Lesser General Public License  *
 * along with this library (see the file LICENCE); If not, see               *
 * <http://www.gnu.org/licenses/old-licenses/lgpl-2.1.en.html>.              *
\* ************************************************************************* */

/*!
 * \author michail peterlis
 * \brief  Debug macros definitions
 * ************************************************************************* */


#ifndef PROSTO_DEBUG_HPP
#define PROSTO_DEBUG_HPP


/*! \def PROSTO_DEBUG should be defined in debug mode. It's used for different debug modes
 *  in the library.
 *
 *  \def PROSTO_PSEUDO_DEBUG is used for pseudo debuging :). Pseudo debug is mostly used as
 *  an additional debug layer while the compilation is done without debug information.
 */

#if defined(_DEBUG) || defined(DEBUG)
#  define PROSTO_DEBUG 1
#endif

#if defined(NDEBUG)
#  undef PROSTO_DEBUG
#endif

#if defined(PROSTO_DEBUG)
#  define PROSTO_PSEUDO_DEBUG 1
#endif

#endif // PROSTO_DEBUG_HPP
