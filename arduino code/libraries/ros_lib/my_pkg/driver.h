#ifndef _ROS_my_pkg_driver_h
#define _ROS_my_pkg_driver_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace my_pkg
{

  class driver : public ros::Msg
  {
    public:
      typedef int32_t _a1_type;
      _a1_type a1;
      typedef int32_t _a2_type;
      _a2_type a2;
      typedef int32_t _a3_type;
      _a3_type a3;
      typedef int32_t _m1_type;
      _m1_type m1;
      typedef int32_t _m2_type;
      _m2_type m2;
      typedef int32_t _m3_type;
      _m3_type m3;
      typedef int32_t _u1_type;
      _u1_type u1;
      typedef int32_t _u2_type;
      _u2_type u2;
      typedef int32_t _u3_type;
      _u3_type u3;
      typedef int32_t _t1_type;
      _t1_type t1;
      typedef int32_t _t2_type;
      _t2_type t2;
      typedef int32_t _t3_type;
      _t3_type t3;

    driver():
      a1(0),
      a2(0),
      a3(0),
      m1(0),
      m2(0),
      m3(0),
      u1(0),
      u2(0),
      u3(0),
      t1(0),
      t2(0),
      t3(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_a1;
      u_a1.real = this->a1;
      *(outbuffer + offset + 0) = (u_a1.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_a1.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_a1.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_a1.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->a1);
      union {
        int32_t real;
        uint32_t base;
      } u_a2;
      u_a2.real = this->a2;
      *(outbuffer + offset + 0) = (u_a2.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_a2.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_a2.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_a2.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->a2);
      union {
        int32_t real;
        uint32_t base;
      } u_a3;
      u_a3.real = this->a3;
      *(outbuffer + offset + 0) = (u_a3.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_a3.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_a3.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_a3.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->a3);
      union {
        int32_t real;
        uint32_t base;
      } u_m1;
      u_m1.real = this->m1;
      *(outbuffer + offset + 0) = (u_m1.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_m1.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_m1.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_m1.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->m1);
      union {
        int32_t real;
        uint32_t base;
      } u_m2;
      u_m2.real = this->m2;
      *(outbuffer + offset + 0) = (u_m2.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_m2.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_m2.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_m2.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->m2);
      union {
        int32_t real;
        uint32_t base;
      } u_m3;
      u_m3.real = this->m3;
      *(outbuffer + offset + 0) = (u_m3.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_m3.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_m3.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_m3.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->m3);
      union {
        int32_t real;
        uint32_t base;
      } u_u1;
      u_u1.real = this->u1;
      *(outbuffer + offset + 0) = (u_u1.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_u1.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_u1.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_u1.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->u1);
      union {
        int32_t real;
        uint32_t base;
      } u_u2;
      u_u2.real = this->u2;
      *(outbuffer + offset + 0) = (u_u2.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_u2.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_u2.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_u2.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->u2);
      union {
        int32_t real;
        uint32_t base;
      } u_u3;
      u_u3.real = this->u3;
      *(outbuffer + offset + 0) = (u_u3.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_u3.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_u3.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_u3.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->u3);
      union {
        int32_t real;
        uint32_t base;
      } u_t1;
      u_t1.real = this->t1;
      *(outbuffer + offset + 0) = (u_t1.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_t1.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_t1.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_t1.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->t1);
      union {
        int32_t real;
        uint32_t base;
      } u_t2;
      u_t2.real = this->t2;
      *(outbuffer + offset + 0) = (u_t2.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_t2.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_t2.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_t2.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->t2);
      union {
        int32_t real;
        uint32_t base;
      } u_t3;
      u_t3.real = this->t3;
      *(outbuffer + offset + 0) = (u_t3.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_t3.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_t3.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_t3.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->t3);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_a1;
      u_a1.base = 0;
      u_a1.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_a1.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_a1.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_a1.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->a1 = u_a1.real;
      offset += sizeof(this->a1);
      union {
        int32_t real;
        uint32_t base;
      } u_a2;
      u_a2.base = 0;
      u_a2.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_a2.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_a2.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_a2.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->a2 = u_a2.real;
      offset += sizeof(this->a2);
      union {
        int32_t real;
        uint32_t base;
      } u_a3;
      u_a3.base = 0;
      u_a3.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_a3.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_a3.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_a3.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->a3 = u_a3.real;
      offset += sizeof(this->a3);
      union {
        int32_t real;
        uint32_t base;
      } u_m1;
      u_m1.base = 0;
      u_m1.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_m1.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_m1.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_m1.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->m1 = u_m1.real;
      offset += sizeof(this->m1);
      union {
        int32_t real;
        uint32_t base;
      } u_m2;
      u_m2.base = 0;
      u_m2.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_m2.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_m2.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_m2.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->m2 = u_m2.real;
      offset += sizeof(this->m2);
      union {
        int32_t real;
        uint32_t base;
      } u_m3;
      u_m3.base = 0;
      u_m3.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_m3.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_m3.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_m3.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->m3 = u_m3.real;
      offset += sizeof(this->m3);
      union {
        int32_t real;
        uint32_t base;
      } u_u1;
      u_u1.base = 0;
      u_u1.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_u1.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_u1.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_u1.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->u1 = u_u1.real;
      offset += sizeof(this->u1);
      union {
        int32_t real;
        uint32_t base;
      } u_u2;
      u_u2.base = 0;
      u_u2.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_u2.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_u2.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_u2.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->u2 = u_u2.real;
      offset += sizeof(this->u2);
      union {
        int32_t real;
        uint32_t base;
      } u_u3;
      u_u3.base = 0;
      u_u3.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_u3.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_u3.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_u3.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->u3 = u_u3.real;
      offset += sizeof(this->u3);
      union {
        int32_t real;
        uint32_t base;
      } u_t1;
      u_t1.base = 0;
      u_t1.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_t1.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_t1.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_t1.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->t1 = u_t1.real;
      offset += sizeof(this->t1);
      union {
        int32_t real;
        uint32_t base;
      } u_t2;
      u_t2.base = 0;
      u_t2.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_t2.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_t2.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_t2.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->t2 = u_t2.real;
      offset += sizeof(this->t2);
      union {
        int32_t real;
        uint32_t base;
      } u_t3;
      u_t3.base = 0;
      u_t3.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_t3.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_t3.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_t3.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->t3 = u_t3.real;
      offset += sizeof(this->t3);
     return offset;
    }

    const char * getType(){ return "my_pkg/driver"; };
    const char * getMD5(){ return "2a67c94b959af84d2d2a686477f38323"; };

  };

}
#endif
