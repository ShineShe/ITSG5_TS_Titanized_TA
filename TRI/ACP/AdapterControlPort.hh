// This Test Port skeleton header file was generated by the
// TTCN-3 Compiler of the TTCN-3 Test Executor version CRL 113 200/5 R3A
// for Lenard Nagy (elnrnag@elx1pjld12-hz) on Tue Nov  3 08:54:32 2015

// Copyright Ericsson Telecom AB 2000-2014

// You may modify this file. Add your attributes and prototypes of your
// member functions here.

#ifndef AdapterControlPort_HH
#define AdapterControlPort_HH

#include "LibItsGeoNetworking_TestSystem.hh"
#include "LibItsGeoNetworking_TypesAndValues.hh"
#include "LibItsCommon_TypesAndValues.hh"
#include "TRI_mapper_API.hh"

namespace LibItsGeoNetworking__TestSystem {

  class AdapterControlPort : public AdapterControlPort_BASE {
  public:
    AdapterControlPort(const char *par_port_name = NULL);
    ~AdapterControlPort();

    void set_parameter(const char *parameter_name,
		       const char *parameter_value);

  private:
    /* void Handle_Fd_Event(int fd, boolean is_readable,
       boolean is_writable, boolean is_error); */
    void Handle_Fd_Event_Error(int fd);
    void Handle_Fd_Event_Writable(int fd);
    void Handle_Fd_Event_Readable(int fd);
    /* void Handle_Timeout(double time_since_last_call); */
  protected:
    void user_map(const char *system_port);
    void user_unmap(const char *system_port);

    void user_start();
    void user_stop();

    void outgoing_send(const LibItsGeoNetworking__TypesAndValues::AcGnPrimitive& send_par);
    void outgoing_send(const LibItsIpv6OverGeoNetworking__TypesAndValues::AcGn6Primitive& send_par);
    TRI__interface__Types::TRI_mapper_data  mp_data;
  };

} /* end of namespace */

#endif
