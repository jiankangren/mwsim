/*
 * This file is part of MWSim.
 *
 * Copyright 2014 University of Augsburg
 *
 * MWSim is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * MWSim is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with MWSim.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * $Id: waitcommand.cpp 1643 2016-02-18 07:11:10Z klugeflo $
 * MOSSCA WCET Simulator
 * @file waitcommand.cpp
 * @brief Waiting for an event message
 * @author Florian Kluge <kluge@informatik.uni-augsburg.de>
 */

#include <repr/command.h>

namespace mwsim {

  WaitCommand::WaitCommand(const std::string & _event, VarParm* _source /*const std::string & _var*/)
    : Command(CT_WAIT), event(_event), source(_source) // var(_var)
  {
    //cout << "created WaitCommand with variable \"" << var << "\"" << endl;
  }


  WaitCommand::WaitCommand(const WaitCommand& rhs)
    : Command(CT_WAIT), event(rhs.event), source(rhs.source) // var(rhs.var)
  {
  }


  WaitCommand::~WaitCommand() { }


  Command *WaitCommand::clone() const {
    return new WaitCommand(*this);
  }


  const std::string & WaitCommand::getEvent() const {
    return event;
  }


  const VarParm* WaitCommand::getSource() const {
    return source;
  }

  /*
  const std::string& WaitCommand::getVar() const {
    return var;
  }
  */

}

