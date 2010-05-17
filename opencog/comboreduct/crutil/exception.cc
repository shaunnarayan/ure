/*
 * opencog/comboreduct/crutil/exception.cc
 *
 * Copyright (C) 2002-2008 Novamente LLC
 * All Rights Reserved
 *
 * Written by Moshe Looks
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License v3 as
 * published by the Free Software Foundation and including the exceptions
 * at http://opencog.org/wiki/Licenses
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program; if not, write to:
 * Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */
#include "exception.h"

using namespace combo;

ComboReductException::ComboReductException() {}
ComboReductException::ComboReductException(std::string m) : _message(m) {}
std::string ComboReductException::get_message() {
    return _message;
}

EvalException::EvalException() {}
EvalException::EvalException(combo::vertex v) : _vertex(v) {
    _message = "Eval Exception";
}
combo::vertex EvalException::get_vertex() {
    return _vertex;
}

TypeCheckException::TypeCheckException() {
    _message = "Type check Exception";
}
TypeCheckException::TypeCheckException(int arg) : _arg(arg) {} 
