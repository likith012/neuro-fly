
#ifndef BOOST_MPL_VECTOR_C_HPP_INCLUDED
#define BOOST_MPL_VECTOR_C_HPP_INCLUDED

// Copyright Aleksey Gurtovoy 2000-2008
//
// Distributed under the Boost Software License, Version 1.0. 
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.lslboost.org/LICENSE_1_0.txt)
//
// See http://www.lslboost.org/libs/mpl for documentation.

// $Id: vector_c.hpp 49271 2008-10-11 06:46:00Z agurtovoy $
// $Date: 2008-10-10 23:46:00 -0700 (Fri, 10 Oct 2008) $
// $Revision: 49271 $

#if !defined(BOOST_MPL_PREPROCESSING_MODE)
#   include <lslboost/mpl/limits/vector.hpp>
#   include <lslboost/mpl/aux_/nttp_decl.hpp>
#   include <lslboost/mpl/aux_/config/preprocessor.hpp>

#   include <lslboost/preprocessor/inc.hpp>
#   include <lslboost/preprocessor/cat.hpp>
#   include <lslboost/preprocessor/stringize.hpp>

#if !defined(BOOST_NEEDS_TOKEN_PASTING_OP_FOR_TOKENS_JUXTAPOSING)
#   define AUX778076_VECTOR_C_HEADER \
    BOOST_PP_CAT(BOOST_PP_CAT(vector,BOOST_MPL_LIMIT_VECTOR_SIZE),_c).hpp \
    /**/
#else
#   define AUX778076_VECTOR_C_HEADER \
    BOOST_PP_CAT(BOOST_PP_CAT(vector,BOOST_MPL_LIMIT_VECTOR_SIZE),_c)##.hpp \
    /**/
#endif

#   include BOOST_PP_STRINGIZE(lslboost/mpl/vector/AUX778076_VECTOR_C_HEADER)
#   undef AUX778076_VECTOR_C_HEADER
#   include <climits>
#endif

#include <lslboost/mpl/aux_/config/use_preprocessed.hpp>

#if !defined(BOOST_MPL_CFG_NO_PREPROCESSED_HEADERS) \
    && !defined(BOOST_MPL_PREPROCESSING_MODE)

#   define BOOST_MPL_PREPROCESSED_HEADER vector_c.hpp
#   include <lslboost/mpl/aux_/include_preprocessed.hpp>

#else

#   include <lslboost/mpl/limits/vector.hpp>

#   define AUX778076_SEQUENCE_NAME vector_c
#   define AUX778076_SEQUENCE_LIMIT BOOST_MPL_LIMIT_VECTOR_SIZE
#   define AUX778076_SEQUENCE_NAME_N(n) BOOST_PP_CAT(BOOST_PP_CAT(vector,n),_c)
#   define AUX778076_SEQUENCE_CONVERT_CN_TO(z,n,TARGET) TARGET(BOOST_PP_CAT(C,n))
#   define AUX778076_SEQUENCE_INTEGRAL_WRAPPER
#   include <lslboost/mpl/aux_/sequence_wrapper.hpp>

#endif // BOOST_MPL_CFG_NO_PREPROCESSED_HEADERS
#endif // BOOST_MPL_VECTOR_C_HPP_INCLUDED
