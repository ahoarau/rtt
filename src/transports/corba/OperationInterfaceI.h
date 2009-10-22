/***************************************************************************
  tag: Peter Soetens  Mon Jun 26 13:25:59 CEST 2006  FactoriesI.h

                        FactoriesI.h -  description
                           -------------------
    begin                : Mon June 26 2006
    copyright            : (C) 2006 Peter Soetens
    email                : peter.soetens@fmtc.be

 ***************************************************************************
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU General Public                   *
 *   License as published by the Free Software Foundation;                 *
 *   version 2 of the License.                                             *
 *                                                                         *
 *   As a special exception, you may use this file as part of a free       *
 *   software library without restriction.  Specifically, if other files   *
 *   instantiate templates or use macros or inline functions from this     *
 *   file, or you compile this file and link it with other files to        *
 *   produce an executable, this file does not by itself cause the         *
 *   resulting executable to be covered by the GNU General Public          *
 *   License.  This exception does not however invalidate any other        *
 *   reasons why the executable file might be covered by the GNU General   *
 *   Public License.                                                       *
 *                                                                         *
 *   This library is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU     *
 *   Lesser General Public License for more details.                       *
 *                                                                         *
 *   You should have received a copy of the GNU General Public             *
 *   License along with this library; if not, write to the Free Software   *
 *   Foundation, Inc., 59 Temple Place,                                    *
 *   Suite 330, Boston, MA  02111-1307  USA                                *
 *                                                                         *
 ***************************************************************************/


// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// be/be_codegen.cpp:844

#ifndef FACTORIESI_H_
#define FACTORIESI_H_

#include "../rtt-config.h"
#include "corba.h"
#include "corba.h"
#ifdef CORBA_IS_TAO
#include "OperationInterfaceS.h"
#else
#include "OperationInterfaceC.h"
#endif
#include "../../interface/OperationInterface.hpp"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
#pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

class  Orocos_CMethodInterface_i
    : public virtual POA_RTT::corba::CMethodInterface,
      public virtual PortableServer::RefCountServantBase
{
    RTT::internal::MethodFactory* mfact;
    PortableServer::POA_var mpoa;
public:
  //Constructor
    Orocos_CMethodInterface_i (RTT::internal::MethodFactory* mfact, PortableServer::POA_ptr the_poa);

  //Destructor
  virtual ~Orocos_CMethodInterface_i (void);

    PortableServer::POA_ptr _default_POA();

  virtual
  ::RTT::corba::CMethodList * getMethods (
    )
    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

  virtual
  ::RTT::corba::CDescriptions * getArguments (
      const char* method
    )
    ACE_THROW_SPEC ((
      CORBA::SystemException
      ,::RTT::corba::CNoSuchNameException
    ));

  virtual
  char * getResultType (
      const char* method
    )
    ACE_THROW_SPEC ((
      CORBA::SystemException
      ,::RTT::corba::CNoSuchNameException
    ));

  virtual
  char * getDescription (
      const char* method
    )
    ACE_THROW_SPEC ((
      CORBA::SystemException
      ,::RTT::corba::CNoSuchNameException
    ));

  virtual
  ::RTT::corba::CMethod_ptr createMethod (
      const char * method,
      const ::RTT::corba::CArguments& args
    )
    ACE_THROW_SPEC ((
      CORBA::SystemException
    ,::RTT::corba::CNoSuchNameException
    ,::RTT::corba::CWrongNumbArgException
    ,::RTT::corba::CWrongTypeArgException
    ));

  virtual
  ::RTT::corba::CMethod_ptr createMethodAny (
      const char * method,
      const ::RTT::corba::CAnyArguments& args
    )
    ACE_THROW_SPEC ((
      CORBA::SystemException
    ,::RTT::corba::CNoSuchNameException
    ,::RTT::corba::CWrongNumbArgException
    ,::RTT::corba::CWrongTypeArgException
    ));
};

class  Orocos_CCommandInterface_i
    : public virtual POA_RTT::corba::CCommandInterface,
      public virtual PortableServer::RefCountServantBase
{
    RTT::internal::CommandFactory* mfact;
    PortableServer::POA_var mpoa;
public:
  //Constructor
  Orocos_CCommandInterface_i (RTT::internal::CommandFactory* fact, PortableServer::POA_ptr the_poa);

  //Destructor
  virtual ~Orocos_CCommandInterface_i (void);

    PortableServer::POA_ptr _default_POA();

  virtual
  ::RTT::corba::CCommandList * getCommands (
    )
    ACE_THROW_SPEC ((
      CORBA::SystemException
    ));

  virtual
  ::RTT::corba::CDescriptions * getArguments (
      const char* command
    )
    ACE_THROW_SPEC ((
      CORBA::SystemException
    ,::RTT::corba::CNoSuchNameException
    ));

  virtual
  char * getResultType (
      const char* command
    )
    ACE_THROW_SPEC ((
      CORBA::SystemException
    ,::RTT::corba::CNoSuchNameException
    ));

  virtual
  char * getDescription (
      const char* command
    )
    ACE_THROW_SPEC ((
      CORBA::SystemException
    ,::RTT::corba::CNoSuchNameException
    ));

  virtual
  ::RTT::corba::CCommand_ptr createCommand (
      const char * command,
      const ::RTT::corba::CArguments& args
    )
    ACE_THROW_SPEC ((
      CORBA::SystemException
    ,::RTT::corba::CNoSuchNameException
    ,::RTT::corba::CWrongNumbArgException
    ,::RTT::corba::CWrongTypeArgException
    ));

  virtual
  ::RTT::corba::CCommand_ptr createCommandAny (
      const char * command,
      const ::RTT::corba::CAnyArguments& args
    )
    ACE_THROW_SPEC ((
      CORBA::SystemException
    ,::RTT::corba::CNoSuchNameException
    ,::RTT::corba::CWrongNumbArgException
    ,::RTT::corba::CWrongTypeArgException
    ));
};


#endif /* FACTORIESI_H_  */
