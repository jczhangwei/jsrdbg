/*
 * A Remote Debugger for SpiderMonkey Java Script engine.
 * Copyright (C) 2014-2015 Sławomir Wojtasiak
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include "encoding.hpp"
#include <langinfo.h>

#include <string>
#include <iostream>
#include <sstream>
#include <iconv.h>
#include <errno.h>
#include <limits.h>
#include <string.h>

#define MBS_ENC_LOCAL_ENCODING_BUFF_LEN         512

using namespace std;
using namespace Utils;

EncodingFailedException::EncodingFailedException( const string msg )
    : _msg(msg) {
}

EncodingFailedException::~EncodingFailedException() {
}

const std::string EncodingFailedException::getMsg() const {
    return _msg;
}
