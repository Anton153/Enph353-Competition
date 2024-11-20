// Generated by gencpp from file enph353_gazebo/GetLegalPlatesResponse.msg
// DO NOT EDIT!


#ifndef ENPH353_GAZEBO_MESSAGE_GETLEGALPLATESRESPONSE_H
#define ENPH353_GAZEBO_MESSAGE_GETLEGALPLATESRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace enph353_gazebo
{
template <class ContainerAllocator>
struct GetLegalPlatesResponse_
{
  typedef GetLegalPlatesResponse_<ContainerAllocator> Type;

  GetLegalPlatesResponse_()
    : plates()  {
    }
  GetLegalPlatesResponse_(const ContainerAllocator& _alloc)
    : plates(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _plates_type;
  _plates_type plates;





  typedef boost::shared_ptr< ::enph353_gazebo::GetLegalPlatesResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::enph353_gazebo::GetLegalPlatesResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetLegalPlatesResponse_

typedef ::enph353_gazebo::GetLegalPlatesResponse_<std::allocator<void> > GetLegalPlatesResponse;

typedef boost::shared_ptr< ::enph353_gazebo::GetLegalPlatesResponse > GetLegalPlatesResponsePtr;
typedef boost::shared_ptr< ::enph353_gazebo::GetLegalPlatesResponse const> GetLegalPlatesResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::enph353_gazebo::GetLegalPlatesResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::enph353_gazebo::GetLegalPlatesResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::enph353_gazebo::GetLegalPlatesResponse_<ContainerAllocator1> & lhs, const ::enph353_gazebo::GetLegalPlatesResponse_<ContainerAllocator2> & rhs)
{
  return lhs.plates == rhs.plates;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::enph353_gazebo::GetLegalPlatesResponse_<ContainerAllocator1> & lhs, const ::enph353_gazebo::GetLegalPlatesResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace enph353_gazebo

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::enph353_gazebo::GetLegalPlatesResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::enph353_gazebo::GetLegalPlatesResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::enph353_gazebo::GetLegalPlatesResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::enph353_gazebo::GetLegalPlatesResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::enph353_gazebo::GetLegalPlatesResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::enph353_gazebo::GetLegalPlatesResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::enph353_gazebo::GetLegalPlatesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4d1915dd30f27b4e3f4a835e33870df3";
  }

  static const char* value(const ::enph353_gazebo::GetLegalPlatesResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4d1915dd30f27b4eULL;
  static const uint64_t static_value2 = 0x3f4a835e33870df3ULL;
};

template<class ContainerAllocator>
struct DataType< ::enph353_gazebo::GetLegalPlatesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "enph353_gazebo/GetLegalPlatesResponse";
  }

  static const char* value(const ::enph353_gazebo::GetLegalPlatesResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::enph353_gazebo::GetLegalPlatesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] plates\n"
;
  }

  static const char* value(const ::enph353_gazebo::GetLegalPlatesResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::enph353_gazebo::GetLegalPlatesResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.plates);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetLegalPlatesResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::enph353_gazebo::GetLegalPlatesResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::enph353_gazebo::GetLegalPlatesResponse_<ContainerAllocator>& v)
  {
    s << indent << "plates[]" << std::endl;
    for (size_t i = 0; i < v.plates.size(); ++i)
    {
      s << indent << "  plates[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.plates[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ENPH353_GAZEBO_MESSAGE_GETLEGALPLATESRESPONSE_H
