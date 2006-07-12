/*!
 * \file 
 * \brief Definitions of matrix inversion routines
 * \author Tony Ottosson
 *
 * $Date$
 * $Revision$
 *
 * -------------------------------------------------------------------------
 *
 * IT++ - C++ library of mathematical, signal processing, speech processing,
 *        and communications classes and functions
 *
 * Copyright (C) 1995-2006  (see AUTHORS file for a list of contributors)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 *
 * -------------------------------------------------------------------------
 */

#ifndef INV_H
#define INV_H

#include <itpp/base/mat.h>


namespace itpp {

  /*!
    \addtogroup inverse
  */

  /*!
    \brief Inverse of real square matrix.
    \ingroup inverse

    Calculate the inverse of the real matrix \f$\mathbf{X}\f$

    Solves the equation system \f$ \mathbf{Y} \mathbf{X} = \mathbf{I}\f$ using LU-factorization.
    IT++ needs to be compiled with the LAPACK for the inverse to be available.
  */
  bool inv(const mat &X, mat &Y);

  /*!
    \brief Inverse of real square matrix.
    \ingroup inverse

    Calculate the inverse of the real matrix \f$\mathbf{X}\f$

    Solves the equation system \f$ \mathbf{Y} \mathbf{X} = \mathbf{I}\f$ using LU-factorization.
    IT++ needs to be compiled with LAPACK support for the inverse to be available.
  */
  mat inv(const mat &X);


  /*!
    \brief Inverse of complex square matrix.
    \ingroup inverse

    Calculate the inverse of the complex matrix \f$\mathbf{X}\f$

    Solves the equation system \f$ \mathbf{Y} \mathbf{X} = \mathbf{I}\f$ using LU-factorization.
    IT++ needs to be compiled with LAPACK support for the inverse to be available.
  */
  bool inv(const cmat &X, cmat &Y);

  /*!
    \brief Inverse of real square matrix.
    \ingroup inverse

    Calculate the inverse of the complex matrix \f$\mathbf{X}\f$

    Solves the equation system \f$ \mathbf{Y} \mathbf{X} = \mathbf{I}\f$ using LU-factorization.
    IT++ needs to be compiled with the LAPACK for the inverse to be available.
  */
  cmat inv(const cmat &X);


} // namespace itpp

#endif // #ifndef INV_H
