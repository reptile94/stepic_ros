// Generated by gencpp from file concatsrv/ConCatResponse.msg
// DO NOT EDIT!


#ifndef CONCATSRV_MESSAGE_CONCATRESPONSE_H
#define CONCATSRV_MESSAGE_CONCATRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace concatsrv
{
template <class ContainerAllocator>
struct ConCatResponse_
{
  typedef ConCatResponse_<ContainerAllocator> Type;

  ConCatResponse_()
    : concat()  {
    }
  ConCatResponse_(const ContainerAllocator& _alloc)
    : concat(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _concat_type;
  _concat_type concat;




  typedef boost::shared_ptr< ::concatsrv::ConCatResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::concatsrv::ConCatResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ConCatResponse_

typedef ::concatsrv::ConCatResponse_<std::allocator<void> > ConCatResponse;

typedef boost::shared_ptr< ::concatsrv::ConCatResponse > ConCatResponsePtr;
typedef boost::shared_ptr< ::concatsrv::ConCatResponse const> ConCatResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::concatsrv::ConCatResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::concatsrv::ConCatResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace concatsrv

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::concatsrv::ConCatResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::concatsrv::ConCatResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::concatsrv::ConCatResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::concatsrv::ConCatResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::concatsrv::ConCatResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::concatsrv::ConCatResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::concatsrv::ConCatResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fd92e3c6c18676d4026c12266bd6f5b5";
  }

  static const char* value(const ::concatsrv::ConCatResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfd92e3c6c18676d4ULL;
  static const uint64_t static_value2 = 0x026c12266bd6f5b5ULL;
};

template<class ContainerAllocator>
struct DataType< ::concatsrv::ConCatResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "concatsrv/ConCatResponse";
  }

  static const char* value(const ::concatsrv::ConCatResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::concatsrv::ConCatResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string concat\n\
";
  }

  static const char* value(const ::concatsrv::ConCatResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::concatsrv::ConCatResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.concat);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ConCatResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::concatsrv::ConCatResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::concatsrv::ConCatResponse_<ContainerAllocator>& v)
  {
    s << indent << "concat: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.concat);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CONCATSRV_MESSAGE_CONCATRESPONSE_H
