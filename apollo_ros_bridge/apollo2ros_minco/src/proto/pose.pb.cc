// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pose.proto

#include "pose.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_geometry_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Point3D_geometry_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_geometry_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_PointENU_geometry_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_geometry_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Quaternion_geometry_2eproto;
namespace apollo {
namespace localization {
class PoseDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Pose> _instance;
} _Pose_default_instance_;
}  // namespace localization
}  // namespace apollo
static void InitDefaultsscc_info_Pose_pose_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::apollo::localization::_Pose_default_instance_;
    new (ptr) ::apollo::localization::Pose();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::apollo::localization::Pose::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<3> scc_info_Pose_pose_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 3, 0, InitDefaultsscc_info_Pose_pose_2eproto}, {
      &scc_info_PointENU_geometry_2eproto.base,
      &scc_info_Quaternion_geometry_2eproto.base,
      &scc_info_Point3D_geometry_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_pose_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_pose_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_pose_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_pose_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::localization::Pose, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::localization::Pose, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::localization::Pose, position_),
  PROTOBUF_FIELD_OFFSET(::apollo::localization::Pose, orientation_),
  PROTOBUF_FIELD_OFFSET(::apollo::localization::Pose, linear_velocity_),
  PROTOBUF_FIELD_OFFSET(::apollo::localization::Pose, linear_acceleration_),
  PROTOBUF_FIELD_OFFSET(::apollo::localization::Pose, angular_velocity_),
  PROTOBUF_FIELD_OFFSET(::apollo::localization::Pose, heading_),
  PROTOBUF_FIELD_OFFSET(::apollo::localization::Pose, linear_acceleration_vrf_),
  PROTOBUF_FIELD_OFFSET(::apollo::localization::Pose, angular_velocity_vrf_),
  PROTOBUF_FIELD_OFFSET(::apollo::localization::Pose, euler_angles_),
  0,
  1,
  2,
  3,
  4,
  8,
  5,
  6,
  7,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 14, sizeof(::apollo::localization::Pose)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::localization::_Pose_default_instance_),
};

const char descriptor_table_protodef_pose_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\npose.proto\022\023apollo.localization\032\016geome"
  "try.proto\"\247\003\n\004Pose\022)\n\010position\030\001 \001(\0132\027.a"
  "pollo.common.PointENU\022.\n\013orientation\030\002 \001"
  "(\0132\031.apollo.common.Quaternion\022/\n\017linear_"
  "velocity\030\003 \001(\0132\026.apollo.common.Point3D\0223"
  "\n\023linear_acceleration\030\004 \001(\0132\026.apollo.com"
  "mon.Point3D\0220\n\020angular_velocity\030\005 \001(\0132\026."
  "apollo.common.Point3D\022\017\n\007heading\030\006 \001(\001\0227"
  "\n\027linear_acceleration_vrf\030\007 \001(\0132\026.apollo"
  ".common.Point3D\0224\n\024angular_velocity_vrf\030"
  "\010 \001(\0132\026.apollo.common.Point3D\022,\n\014euler_a"
  "ngles\030\t \001(\0132\026.apollo.common.Point3D"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_pose_2eproto_deps[1] = {
  &::descriptor_table_geometry_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_pose_2eproto_sccs[1] = {
  &scc_info_Pose_pose_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_pose_2eproto_once;
static bool descriptor_table_pose_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_pose_2eproto = {
  &descriptor_table_pose_2eproto_initialized, descriptor_table_protodef_pose_2eproto, "pose.proto", 475,
  &descriptor_table_pose_2eproto_once, descriptor_table_pose_2eproto_sccs, descriptor_table_pose_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_pose_2eproto::offsets,
  file_level_metadata_pose_2eproto, 1, file_level_enum_descriptors_pose_2eproto, file_level_service_descriptors_pose_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_pose_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_pose_2eproto), true);
namespace apollo {
namespace localization {

// ===================================================================

void Pose::InitAsDefaultInstance() {
  ::apollo::localization::_Pose_default_instance_._instance.get_mutable()->position_ = const_cast< ::apollo::common::PointENU*>(
      ::apollo::common::PointENU::internal_default_instance());
  ::apollo::localization::_Pose_default_instance_._instance.get_mutable()->orientation_ = const_cast< ::apollo::common::Quaternion*>(
      ::apollo::common::Quaternion::internal_default_instance());
  ::apollo::localization::_Pose_default_instance_._instance.get_mutable()->linear_velocity_ = const_cast< ::apollo::common::Point3D*>(
      ::apollo::common::Point3D::internal_default_instance());
  ::apollo::localization::_Pose_default_instance_._instance.get_mutable()->linear_acceleration_ = const_cast< ::apollo::common::Point3D*>(
      ::apollo::common::Point3D::internal_default_instance());
  ::apollo::localization::_Pose_default_instance_._instance.get_mutable()->angular_velocity_ = const_cast< ::apollo::common::Point3D*>(
      ::apollo::common::Point3D::internal_default_instance());
  ::apollo::localization::_Pose_default_instance_._instance.get_mutable()->linear_acceleration_vrf_ = const_cast< ::apollo::common::Point3D*>(
      ::apollo::common::Point3D::internal_default_instance());
  ::apollo::localization::_Pose_default_instance_._instance.get_mutable()->angular_velocity_vrf_ = const_cast< ::apollo::common::Point3D*>(
      ::apollo::common::Point3D::internal_default_instance());
  ::apollo::localization::_Pose_default_instance_._instance.get_mutable()->euler_angles_ = const_cast< ::apollo::common::Point3D*>(
      ::apollo::common::Point3D::internal_default_instance());
}
class Pose::_Internal {
 public:
  using HasBits = decltype(std::declval<Pose>()._has_bits_);
  static const ::apollo::common::PointENU& position(const Pose* msg);
  static void set_has_position(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::apollo::common::Quaternion& orientation(const Pose* msg);
  static void set_has_orientation(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static const ::apollo::common::Point3D& linear_velocity(const Pose* msg);
  static void set_has_linear_velocity(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static const ::apollo::common::Point3D& linear_acceleration(const Pose* msg);
  static void set_has_linear_acceleration(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static const ::apollo::common::Point3D& angular_velocity(const Pose* msg);
  static void set_has_angular_velocity(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_heading(HasBits* has_bits) {
    (*has_bits)[0] |= 256u;
  }
  static const ::apollo::common::Point3D& linear_acceleration_vrf(const Pose* msg);
  static void set_has_linear_acceleration_vrf(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static const ::apollo::common::Point3D& angular_velocity_vrf(const Pose* msg);
  static void set_has_angular_velocity_vrf(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static const ::apollo::common::Point3D& euler_angles(const Pose* msg);
  static void set_has_euler_angles(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
};

const ::apollo::common::PointENU&
Pose::_Internal::position(const Pose* msg) {
  return *msg->position_;
}
const ::apollo::common::Quaternion&
Pose::_Internal::orientation(const Pose* msg) {
  return *msg->orientation_;
}
const ::apollo::common::Point3D&
Pose::_Internal::linear_velocity(const Pose* msg) {
  return *msg->linear_velocity_;
}
const ::apollo::common::Point3D&
Pose::_Internal::linear_acceleration(const Pose* msg) {
  return *msg->linear_acceleration_;
}
const ::apollo::common::Point3D&
Pose::_Internal::angular_velocity(const Pose* msg) {
  return *msg->angular_velocity_;
}
const ::apollo::common::Point3D&
Pose::_Internal::linear_acceleration_vrf(const Pose* msg) {
  return *msg->linear_acceleration_vrf_;
}
const ::apollo::common::Point3D&
Pose::_Internal::angular_velocity_vrf(const Pose* msg) {
  return *msg->angular_velocity_vrf_;
}
const ::apollo::common::Point3D&
Pose::_Internal::euler_angles(const Pose* msg) {
  return *msg->euler_angles_;
}
void Pose::clear_position() {
  if (position_ != nullptr) position_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
void Pose::clear_orientation() {
  if (orientation_ != nullptr) orientation_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
void Pose::clear_linear_velocity() {
  if (linear_velocity_ != nullptr) linear_velocity_->Clear();
  _has_bits_[0] &= ~0x00000004u;
}
void Pose::clear_linear_acceleration() {
  if (linear_acceleration_ != nullptr) linear_acceleration_->Clear();
  _has_bits_[0] &= ~0x00000008u;
}
void Pose::clear_angular_velocity() {
  if (angular_velocity_ != nullptr) angular_velocity_->Clear();
  _has_bits_[0] &= ~0x00000010u;
}
void Pose::clear_linear_acceleration_vrf() {
  if (linear_acceleration_vrf_ != nullptr) linear_acceleration_vrf_->Clear();
  _has_bits_[0] &= ~0x00000020u;
}
void Pose::clear_angular_velocity_vrf() {
  if (angular_velocity_vrf_ != nullptr) angular_velocity_vrf_->Clear();
  _has_bits_[0] &= ~0x00000040u;
}
void Pose::clear_euler_angles() {
  if (euler_angles_ != nullptr) euler_angles_->Clear();
  _has_bits_[0] &= ~0x00000080u;
}
Pose::Pose()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.localization.Pose)
}
Pose::Pose(const Pose& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._internal_has_position()) {
    position_ = new ::apollo::common::PointENU(*from.position_);
  } else {
    position_ = nullptr;
  }
  if (from._internal_has_orientation()) {
    orientation_ = new ::apollo::common::Quaternion(*from.orientation_);
  } else {
    orientation_ = nullptr;
  }
  if (from._internal_has_linear_velocity()) {
    linear_velocity_ = new ::apollo::common::Point3D(*from.linear_velocity_);
  } else {
    linear_velocity_ = nullptr;
  }
  if (from._internal_has_linear_acceleration()) {
    linear_acceleration_ = new ::apollo::common::Point3D(*from.linear_acceleration_);
  } else {
    linear_acceleration_ = nullptr;
  }
  if (from._internal_has_angular_velocity()) {
    angular_velocity_ = new ::apollo::common::Point3D(*from.angular_velocity_);
  } else {
    angular_velocity_ = nullptr;
  }
  if (from._internal_has_linear_acceleration_vrf()) {
    linear_acceleration_vrf_ = new ::apollo::common::Point3D(*from.linear_acceleration_vrf_);
  } else {
    linear_acceleration_vrf_ = nullptr;
  }
  if (from._internal_has_angular_velocity_vrf()) {
    angular_velocity_vrf_ = new ::apollo::common::Point3D(*from.angular_velocity_vrf_);
  } else {
    angular_velocity_vrf_ = nullptr;
  }
  if (from._internal_has_euler_angles()) {
    euler_angles_ = new ::apollo::common::Point3D(*from.euler_angles_);
  } else {
    euler_angles_ = nullptr;
  }
  heading_ = from.heading_;
  // @@protoc_insertion_point(copy_constructor:apollo.localization.Pose)
}

void Pose::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Pose_pose_2eproto.base);
  ::memset(&position_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&heading_) -
      reinterpret_cast<char*>(&position_)) + sizeof(heading_));
}

Pose::~Pose() {
  // @@protoc_insertion_point(destructor:apollo.localization.Pose)
  SharedDtor();
}

void Pose::SharedDtor() {
  if (this != internal_default_instance()) delete position_;
  if (this != internal_default_instance()) delete orientation_;
  if (this != internal_default_instance()) delete linear_velocity_;
  if (this != internal_default_instance()) delete linear_acceleration_;
  if (this != internal_default_instance()) delete angular_velocity_;
  if (this != internal_default_instance()) delete linear_acceleration_vrf_;
  if (this != internal_default_instance()) delete angular_velocity_vrf_;
  if (this != internal_default_instance()) delete euler_angles_;
}

void Pose::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Pose& Pose::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Pose_pose_2eproto.base);
  return *internal_default_instance();
}


void Pose::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.localization.Pose)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(position_ != nullptr);
      position_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(orientation_ != nullptr);
      orientation_->Clear();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(linear_velocity_ != nullptr);
      linear_velocity_->Clear();
    }
    if (cached_has_bits & 0x00000008u) {
      GOOGLE_DCHECK(linear_acceleration_ != nullptr);
      linear_acceleration_->Clear();
    }
    if (cached_has_bits & 0x00000010u) {
      GOOGLE_DCHECK(angular_velocity_ != nullptr);
      angular_velocity_->Clear();
    }
    if (cached_has_bits & 0x00000020u) {
      GOOGLE_DCHECK(linear_acceleration_vrf_ != nullptr);
      linear_acceleration_vrf_->Clear();
    }
    if (cached_has_bits & 0x00000040u) {
      GOOGLE_DCHECK(angular_velocity_vrf_ != nullptr);
      angular_velocity_vrf_->Clear();
    }
    if (cached_has_bits & 0x00000080u) {
      GOOGLE_DCHECK(euler_angles_ != nullptr);
      euler_angles_->Clear();
    }
  }
  heading_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* Pose::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional .apollo.common.PointENU position = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_position(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .apollo.common.Quaternion orientation = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_orientation(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .apollo.common.Point3D linear_velocity = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_linear_velocity(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .apollo.common.Point3D linear_acceleration = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_linear_acceleration(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .apollo.common.Point3D angular_velocity = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr = ctx->ParseMessage(_internal_mutable_angular_velocity(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional double heading = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 49)) {
          _Internal::set_has_heading(&has_bits);
          heading_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional .apollo.common.Point3D linear_acceleration_vrf = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          ptr = ctx->ParseMessage(_internal_mutable_linear_acceleration_vrf(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .apollo.common.Point3D angular_velocity_vrf = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 66)) {
          ptr = ctx->ParseMessage(_internal_mutable_angular_velocity_vrf(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .apollo.common.Point3D euler_angles = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 74)) {
          ptr = ctx->ParseMessage(_internal_mutable_euler_angles(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Pose::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.localization.Pose)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .apollo.common.PointENU position = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, _Internal::position(this), target, stream);
  }

  // optional .apollo.common.Quaternion orientation = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, _Internal::orientation(this), target, stream);
  }

  // optional .apollo.common.Point3D linear_velocity = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, _Internal::linear_velocity(this), target, stream);
  }

  // optional .apollo.common.Point3D linear_acceleration = 4;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, _Internal::linear_acceleration(this), target, stream);
  }

  // optional .apollo.common.Point3D angular_velocity = 5;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        5, _Internal::angular_velocity(this), target, stream);
  }

  // optional double heading = 6;
  if (cached_has_bits & 0x00000100u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(6, this->_internal_heading(), target);
  }

  // optional .apollo.common.Point3D linear_acceleration_vrf = 7;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        7, _Internal::linear_acceleration_vrf(this), target, stream);
  }

  // optional .apollo.common.Point3D angular_velocity_vrf = 8;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        8, _Internal::angular_velocity_vrf(this), target, stream);
  }

  // optional .apollo.common.Point3D euler_angles = 9;
  if (cached_has_bits & 0x00000080u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        9, _Internal::euler_angles(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.localization.Pose)
  return target;
}

size_t Pose::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.localization.Pose)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    // optional .apollo.common.PointENU position = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *position_);
    }

    // optional .apollo.common.Quaternion orientation = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *orientation_);
    }

    // optional .apollo.common.Point3D linear_velocity = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *linear_velocity_);
    }

    // optional .apollo.common.Point3D linear_acceleration = 4;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *linear_acceleration_);
    }

    // optional .apollo.common.Point3D angular_velocity = 5;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *angular_velocity_);
    }

    // optional .apollo.common.Point3D linear_acceleration_vrf = 7;
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *linear_acceleration_vrf_);
    }

    // optional .apollo.common.Point3D angular_velocity_vrf = 8;
    if (cached_has_bits & 0x00000040u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *angular_velocity_vrf_);
    }

    // optional .apollo.common.Point3D euler_angles = 9;
    if (cached_has_bits & 0x00000080u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *euler_angles_);
    }

  }
  // optional double heading = 6;
  if (cached_has_bits & 0x00000100u) {
    total_size += 1 + 8;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Pose::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.localization.Pose)
  GOOGLE_DCHECK_NE(&from, this);
  const Pose* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Pose>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.localization.Pose)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.localization.Pose)
    MergeFrom(*source);
  }
}

void Pose::MergeFrom(const Pose& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.localization.Pose)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_mutable_position()->::apollo::common::PointENU::MergeFrom(from._internal_position());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_orientation()->::apollo::common::Quaternion::MergeFrom(from._internal_orientation());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_mutable_linear_velocity()->::apollo::common::Point3D::MergeFrom(from._internal_linear_velocity());
    }
    if (cached_has_bits & 0x00000008u) {
      _internal_mutable_linear_acceleration()->::apollo::common::Point3D::MergeFrom(from._internal_linear_acceleration());
    }
    if (cached_has_bits & 0x00000010u) {
      _internal_mutable_angular_velocity()->::apollo::common::Point3D::MergeFrom(from._internal_angular_velocity());
    }
    if (cached_has_bits & 0x00000020u) {
      _internal_mutable_linear_acceleration_vrf()->::apollo::common::Point3D::MergeFrom(from._internal_linear_acceleration_vrf());
    }
    if (cached_has_bits & 0x00000040u) {
      _internal_mutable_angular_velocity_vrf()->::apollo::common::Point3D::MergeFrom(from._internal_angular_velocity_vrf());
    }
    if (cached_has_bits & 0x00000080u) {
      _internal_mutable_euler_angles()->::apollo::common::Point3D::MergeFrom(from._internal_euler_angles());
    }
  }
  if (cached_has_bits & 0x00000100u) {
    _internal_set_heading(from._internal_heading());
  }
}

void Pose::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.localization.Pose)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Pose::CopyFrom(const Pose& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.localization.Pose)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Pose::IsInitialized() const {
  return true;
}

void Pose::InternalSwap(Pose* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(position_, other->position_);
  swap(orientation_, other->orientation_);
  swap(linear_velocity_, other->linear_velocity_);
  swap(linear_acceleration_, other->linear_acceleration_);
  swap(angular_velocity_, other->angular_velocity_);
  swap(linear_acceleration_vrf_, other->linear_acceleration_vrf_);
  swap(angular_velocity_vrf_, other->angular_velocity_vrf_);
  swap(euler_angles_, other->euler_angles_);
  swap(heading_, other->heading_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Pose::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace localization
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::localization::Pose* Arena::CreateMaybeMessage< ::apollo::localization::Pose >(Arena* arena) {
  return Arena::CreateInternal< ::apollo::localization::Pose >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
