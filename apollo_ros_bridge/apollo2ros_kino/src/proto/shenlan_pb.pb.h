// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: shenlan_pb.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_shenlan_5fpb_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_shenlan_5fpb_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3010000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3010000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "geometry.pb.h"
#include "header.pb.h"
#include "pose.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_shenlan_5fpb_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_shenlan_5fpb_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_shenlan_5fpb_2eproto;
namespace apollo {
namespace shenlan {
class NavPath;
class NavPathDefaultTypeInternal;
extern NavPathDefaultTypeInternal _NavPath_default_instance_;
}  // namespace shenlan
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> ::apollo::shenlan::NavPath* Arena::CreateMaybeMessage<::apollo::shenlan::NavPath>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace apollo {
namespace shenlan {

// ===================================================================

class NavPath :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.shenlan.NavPath) */ {
 public:
  NavPath();
  virtual ~NavPath();

  NavPath(const NavPath& from);
  NavPath(NavPath&& from) noexcept
    : NavPath() {
    *this = ::std::move(from);
  }

  inline NavPath& operator=(const NavPath& from) {
    CopyFrom(from);
    return *this;
  }
  inline NavPath& operator=(NavPath&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const NavPath& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const NavPath* internal_default_instance() {
    return reinterpret_cast<const NavPath*>(
               &_NavPath_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(NavPath& a, NavPath& b) {
    a.Swap(&b);
  }
  inline void Swap(NavPath* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline NavPath* New() const final {
    return CreateMaybeMessage<NavPath>(nullptr);
  }

  NavPath* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<NavPath>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const NavPath& from);
  void MergeFrom(const NavPath& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(NavPath* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.shenlan.NavPath";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_shenlan_5fpb_2eproto);
    return ::descriptor_table_shenlan_5fpb_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPoseFieldNumber = 2,
    kHeaderFieldNumber = 1,
  };
  // repeated .apollo.localization.Pose Pose = 2;
  int pose_size() const;
  private:
  int _internal_pose_size() const;
  public:
  void clear_pose();
  ::apollo::localization::Pose* mutable_pose(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::localization::Pose >*
      mutable_pose();
  private:
  const ::apollo::localization::Pose& _internal_pose(int index) const;
  ::apollo::localization::Pose* _internal_add_pose();
  public:
  const ::apollo::localization::Pose& pose(int index) const;
  ::apollo::localization::Pose* add_pose();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::localization::Pose >&
      pose() const;

  // optional .apollo.common.Header header = 1;
  bool has_header() const;
  private:
  bool _internal_has_header() const;
  public:
  void clear_header();
  const ::apollo::common::Header& header() const;
  ::apollo::common::Header* release_header();
  ::apollo::common::Header* mutable_header();
  void set_allocated_header(::apollo::common::Header* header);
  private:
  const ::apollo::common::Header& _internal_header() const;
  ::apollo::common::Header* _internal_mutable_header();
  public:

  // @@protoc_insertion_point(class_scope:apollo.shenlan.NavPath)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::localization::Pose > pose_;
  ::apollo::common::Header* header_;
  friend struct ::TableStruct_shenlan_5fpb_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// NavPath

// optional .apollo.common.Header header = 1;
inline bool NavPath::_internal_has_header() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || header_ != nullptr);
  return value;
}
inline bool NavPath::has_header() const {
  return _internal_has_header();
}
inline const ::apollo::common::Header& NavPath::_internal_header() const {
  const ::apollo::common::Header* p = header_;
  return p != nullptr ? *p : *reinterpret_cast<const ::apollo::common::Header*>(
      &::apollo::common::_Header_default_instance_);
}
inline const ::apollo::common::Header& NavPath::header() const {
  // @@protoc_insertion_point(field_get:apollo.shenlan.NavPath.header)
  return _internal_header();
}
inline ::apollo::common::Header* NavPath::release_header() {
  // @@protoc_insertion_point(field_release:apollo.shenlan.NavPath.header)
  _has_bits_[0] &= ~0x00000001u;
  ::apollo::common::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::apollo::common::Header* NavPath::_internal_mutable_header() {
  _has_bits_[0] |= 0x00000001u;
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::apollo::common::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  return header_;
}
inline ::apollo::common::Header* NavPath::mutable_header() {
  // @@protoc_insertion_point(field_mutable:apollo.shenlan.NavPath.header)
  return _internal_mutable_header();
}
inline void NavPath::set_allocated_header(::apollo::common::Header* header) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(header_);
  }
  if (header) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      header = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, header, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  header_ = header;
  // @@protoc_insertion_point(field_set_allocated:apollo.shenlan.NavPath.header)
}

// repeated .apollo.localization.Pose Pose = 2;
inline int NavPath::_internal_pose_size() const {
  return pose_.size();
}
inline int NavPath::pose_size() const {
  return _internal_pose_size();
}
inline ::apollo::localization::Pose* NavPath::mutable_pose(int index) {
  // @@protoc_insertion_point(field_mutable:apollo.shenlan.NavPath.Pose)
  return pose_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::localization::Pose >*
NavPath::mutable_pose() {
  // @@protoc_insertion_point(field_mutable_list:apollo.shenlan.NavPath.Pose)
  return &pose_;
}
inline const ::apollo::localization::Pose& NavPath::_internal_pose(int index) const {
  return pose_.Get(index);
}
inline const ::apollo::localization::Pose& NavPath::pose(int index) const {
  // @@protoc_insertion_point(field_get:apollo.shenlan.NavPath.Pose)
  return _internal_pose(index);
}
inline ::apollo::localization::Pose* NavPath::_internal_add_pose() {
  return pose_.Add();
}
inline ::apollo::localization::Pose* NavPath::add_pose() {
  // @@protoc_insertion_point(field_add:apollo.shenlan.NavPath.Pose)
  return _internal_add_pose();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::localization::Pose >&
NavPath::pose() const {
  // @@protoc_insertion_point(field_list:apollo.shenlan.NavPath.Pose)
  return pose_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace shenlan
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_shenlan_5fpb_2eproto
