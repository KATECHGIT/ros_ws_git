// Generated by gencpp from file can_test_pkg/CANPacket.msg
// DO NOT EDIT!


#ifndef CAN_TEST_PKG_MESSAGE_CANPACKET_H
#define CAN_TEST_PKG_MESSAGE_CANPACKET_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace can_test_pkg
{
template <class ContainerAllocator>
struct CANPacket_
{
  typedef CANPacket_<ContainerAllocator> Type;

  CANPacket_()
    : header()
    , count(0)
    , id(0)
    , len(0)
    , dat()
    , flag(0)
    , time(0)  {
      dat.assign(0);
  }
  CANPacket_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , count(0)
    , id(0)
    , len(0)
    , dat()
    , flag(0)
    , time(0)  {
  (void)_alloc;
      dat.assign(0);
  }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint32_t _count_type;
  _count_type count;

   typedef uint32_t _id_type;
  _id_type id;

   typedef uint8_t _len_type;
  _len_type len;

   typedef boost::array<uint8_t, 8>  _dat_type;
  _dat_type dat;

   typedef uint16_t _flag_type;
  _flag_type flag;

   typedef uint32_t _time_type;
  _time_type time;





  typedef boost::shared_ptr< ::can_test_pkg::CANPacket_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::can_test_pkg::CANPacket_<ContainerAllocator> const> ConstPtr;

}; // struct CANPacket_

typedef ::can_test_pkg::CANPacket_<std::allocator<void> > CANPacket;

typedef boost::shared_ptr< ::can_test_pkg::CANPacket > CANPacketPtr;
typedef boost::shared_ptr< ::can_test_pkg::CANPacket const> CANPacketConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::can_test_pkg::CANPacket_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::can_test_pkg::CANPacket_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace can_test_pkg

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'can_test_pkg': ['/home/katech/catkin_ws/src/can_test_pkg/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::can_test_pkg::CANPacket_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::can_test_pkg::CANPacket_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::can_test_pkg::CANPacket_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::can_test_pkg::CANPacket_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::can_test_pkg::CANPacket_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::can_test_pkg::CANPacket_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::can_test_pkg::CANPacket_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8315bda71683b8ece50e17e529eea4c1";
  }

  static const char* value(const ::can_test_pkg::CANPacket_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8315bda71683b8ecULL;
  static const uint64_t static_value2 = 0xe50e17e529eea4c1ULL;
};

template<class ContainerAllocator>
struct DataType< ::can_test_pkg::CANPacket_<ContainerAllocator> >
{
  static const char* value()
  {
    return "can_test_pkg/CANPacket";
  }

  static const char* value(const ::can_test_pkg::CANPacket_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::can_test_pkg::CANPacket_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
uint32 count\n\
uint32 id\n\
uint8  len\n\
uint8[8]  dat\n\
uint16 flag\n\
uint32 time\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::can_test_pkg::CANPacket_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::can_test_pkg::CANPacket_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.count);
      stream.next(m.id);
      stream.next(m.len);
      stream.next(m.dat);
      stream.next(m.flag);
      stream.next(m.time);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CANPacket_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::can_test_pkg::CANPacket_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::can_test_pkg::CANPacket_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "count: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.count);
    s << indent << "id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.id);
    s << indent << "len: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.len);
    s << indent << "dat[]" << std::endl;
    for (size_t i = 0; i < v.dat.size(); ++i)
    {
      s << indent << "  dat[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.dat[i]);
    }
    s << indent << "flag: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.flag);
    s << indent << "time: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.time);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CAN_TEST_PKG_MESSAGE_CANPACKET_H