// Generated by gencpp from file my_service/AddIntsResponse.msg
// DO NOT EDIT!


#ifndef MY_SERVICE_MESSAGE_ADDINTSRESPONSE_H
#define MY_SERVICE_MESSAGE_ADDINTSRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace my_service
{
template <class ContainerAllocator>
struct AddIntsResponse_
{
  typedef AddIntsResponse_<ContainerAllocator> Type;

  AddIntsResponse_()
    : sum(0)  {
    }
  AddIntsResponse_(const ContainerAllocator& _alloc)
    : sum(0)  {
  (void)_alloc;
    }



   typedef int32_t _sum_type;
  _sum_type sum;




  typedef boost::shared_ptr< ::my_service::AddIntsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::my_service::AddIntsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct AddIntsResponse_

typedef ::my_service::AddIntsResponse_<std::allocator<void> > AddIntsResponse;

typedef boost::shared_ptr< ::my_service::AddIntsResponse > AddIntsResponsePtr;
typedef boost::shared_ptr< ::my_service::AddIntsResponse const> AddIntsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::my_service::AddIntsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::my_service::AddIntsResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace my_service

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::my_service::AddIntsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::my_service::AddIntsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::my_service::AddIntsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::my_service::AddIntsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_service::AddIntsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_service::AddIntsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::my_service::AddIntsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0ba699c25c9418c0366f3595c0c8e8ec";
  }

  static const char* value(const ::my_service::AddIntsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0ba699c25c9418c0ULL;
  static const uint64_t static_value2 = 0x366f3595c0c8e8ecULL;
};

template<class ContainerAllocator>
struct DataType< ::my_service::AddIntsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "my_service/AddIntsResponse";
  }

  static const char* value(const ::my_service::AddIntsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::my_service::AddIntsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 sum\n\
";
  }

  static const char* value(const ::my_service::AddIntsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::my_service::AddIntsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sum);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AddIntsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::my_service::AddIntsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::my_service::AddIntsResponse_<ContainerAllocator>& v)
  {
    s << indent << "sum: ";
    Printer<int32_t>::stream(s, indent + "  ", v.sum);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MY_SERVICE_MESSAGE_ADDINTSRESPONSE_H
