// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Battle.proto

#ifndef PROTOBUF_Battle_2eproto__INCLUDED
#define PROTOBUF_Battle_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace NetProto {
class AllSceneObject;
class AllSceneObjectDefaultTypeInternal;
extern AllSceneObjectDefaultTypeInternal _AllSceneObject_default_instance_;
class RspFreeHero;
class RspFreeHeroDefaultTypeInternal;
extern RspFreeHeroDefaultTypeInternal _RspFreeHero_default_instance_;
class SceneObject;
class SceneObjectDefaultTypeInternal;
extern SceneObjectDefaultTypeInternal _SceneObject_default_instance_;
class SelectHeroReq;
class SelectHeroReqDefaultTypeInternal;
extern SelectHeroReqDefaultTypeInternal _SelectHeroReq_default_instance_;
class SelectHeroRsp;
class SelectHeroRspDefaultTypeInternal;
extern SelectHeroRspDefaultTypeInternal _SelectHeroRsp_default_instance_;
}  // namespace NetProto

namespace NetProto {

namespace protobuf_Battle_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static void InitDefaultsImpl();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_Battle_2eproto

enum SceneObjectType {
  Building = 0,
  Hero = 1,
  Npc = 2,
  MAX = 3,
  SceneObjectType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  SceneObjectType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool SceneObjectType_IsValid(int value);
const SceneObjectType SceneObjectType_MIN = Building;
const SceneObjectType SceneObjectType_MAX = MAX;
const int SceneObjectType_ARRAYSIZE = SceneObjectType_MAX + 1;

const ::google::protobuf::EnumDescriptor* SceneObjectType_descriptor();
inline const ::std::string& SceneObjectType_Name(SceneObjectType value) {
  return ::google::protobuf::internal::NameOfEnum(
    SceneObjectType_descriptor(), value);
}
inline bool SceneObjectType_Parse(
    const ::std::string& name, SceneObjectType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<SceneObjectType>(
    SceneObjectType_descriptor(), name, value);
}
// ===================================================================

class RspFreeHero : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:NetProto.RspFreeHero) */ {
 public:
  RspFreeHero();
  virtual ~RspFreeHero();

  RspFreeHero(const RspFreeHero& from);

  inline RspFreeHero& operator=(const RspFreeHero& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  RspFreeHero(RspFreeHero&& from) noexcept
    : RspFreeHero() {
    *this = ::std::move(from);
  }

  inline RspFreeHero& operator=(RspFreeHero&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline ::google::protobuf::Arena* GetArena() const PROTOBUF_FINAL {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const PROTOBUF_FINAL {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const RspFreeHero& default_instance();

  static inline const RspFreeHero* internal_default_instance() {
    return reinterpret_cast<const RspFreeHero*>(
               &_RspFreeHero_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void UnsafeArenaSwap(RspFreeHero* other);
  void Swap(RspFreeHero* other);
  friend void swap(RspFreeHero& a, RspFreeHero& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline RspFreeHero* New() const PROTOBUF_FINAL { return New(NULL); }

  RspFreeHero* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const RspFreeHero& from);
  void MergeFrom(const RspFreeHero& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(RspFreeHero* other);
  protected:
  explicit RspFreeHero(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // uint64 red_hero_id = 1;
  void clear_red_hero_id();
  static const int kRedHeroIdFieldNumber = 1;
  ::google::protobuf::uint64 red_hero_id() const;
  void set_red_hero_id(::google::protobuf::uint64 value);

  // uint64 blue_hero_id = 2;
  void clear_blue_hero_id();
  static const int kBlueHeroIdFieldNumber = 2;
  ::google::protobuf::uint64 blue_hero_id() const;
  void set_blue_hero_id(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:NetProto.RspFreeHero)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::uint64 red_hero_id_;
  ::google::protobuf::uint64 blue_hero_id_;
  mutable int _cached_size_;
  friend struct protobuf_Battle_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class SelectHeroReq : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:NetProto.SelectHeroReq) */ {
 public:
  SelectHeroReq();
  virtual ~SelectHeroReq();

  SelectHeroReq(const SelectHeroReq& from);

  inline SelectHeroReq& operator=(const SelectHeroReq& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SelectHeroReq(SelectHeroReq&& from) noexcept
    : SelectHeroReq() {
    *this = ::std::move(from);
  }

  inline SelectHeroReq& operator=(SelectHeroReq&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline ::google::protobuf::Arena* GetArena() const PROTOBUF_FINAL {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const PROTOBUF_FINAL {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const SelectHeroReq& default_instance();

  static inline const SelectHeroReq* internal_default_instance() {
    return reinterpret_cast<const SelectHeroReq*>(
               &_SelectHeroReq_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void UnsafeArenaSwap(SelectHeroReq* other);
  void Swap(SelectHeroReq* other);
  friend void swap(SelectHeroReq& a, SelectHeroReq& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SelectHeroReq* New() const PROTOBUF_FINAL { return New(NULL); }

  SelectHeroReq* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SelectHeroReq& from);
  void MergeFrom(const SelectHeroReq& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(SelectHeroReq* other);
  protected:
  explicit SelectHeroReq(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // uint64 hero_id = 1;
  void clear_hero_id();
  static const int kHeroIdFieldNumber = 1;
  ::google::protobuf::uint64 hero_id() const;
  void set_hero_id(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:NetProto.SelectHeroReq)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::uint64 hero_id_;
  mutable int _cached_size_;
  friend struct protobuf_Battle_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class SelectHeroRsp : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:NetProto.SelectHeroRsp) */ {
 public:
  SelectHeroRsp();
  virtual ~SelectHeroRsp();

  SelectHeroRsp(const SelectHeroRsp& from);

  inline SelectHeroRsp& operator=(const SelectHeroRsp& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SelectHeroRsp(SelectHeroRsp&& from) noexcept
    : SelectHeroRsp() {
    *this = ::std::move(from);
  }

  inline SelectHeroRsp& operator=(SelectHeroRsp&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline ::google::protobuf::Arena* GetArena() const PROTOBUF_FINAL {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const PROTOBUF_FINAL {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const SelectHeroRsp& default_instance();

  static inline const SelectHeroRsp* internal_default_instance() {
    return reinterpret_cast<const SelectHeroRsp*>(
               &_SelectHeroRsp_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void UnsafeArenaSwap(SelectHeroRsp* other);
  void Swap(SelectHeroRsp* other);
  friend void swap(SelectHeroRsp& a, SelectHeroRsp& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SelectHeroRsp* New() const PROTOBUF_FINAL { return New(NULL); }

  SelectHeroRsp* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SelectHeroRsp& from);
  void MergeFrom(const SelectHeroRsp& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(SelectHeroRsp* other);
  protected:
  explicit SelectHeroRsp(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // uint64 hero_id = 1;
  void clear_hero_id();
  static const int kHeroIdFieldNumber = 1;
  ::google::protobuf::uint64 hero_id() const;
  void set_hero_id(::google::protobuf::uint64 value);

  // bool is_succ = 2;
  void clear_is_succ();
  static const int kIsSuccFieldNumber = 2;
  bool is_succ() const;
  void set_is_succ(bool value);

  // @@protoc_insertion_point(class_scope:NetProto.SelectHeroRsp)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::uint64 hero_id_;
  bool is_succ_;
  mutable int _cached_size_;
  friend struct protobuf_Battle_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class SceneObject : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:NetProto.SceneObject) */ {
 public:
  SceneObject();
  virtual ~SceneObject();

  SceneObject(const SceneObject& from);

  inline SceneObject& operator=(const SceneObject& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SceneObject(SceneObject&& from) noexcept
    : SceneObject() {
    *this = ::std::move(from);
  }

  inline SceneObject& operator=(SceneObject&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline ::google::protobuf::Arena* GetArena() const PROTOBUF_FINAL {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const PROTOBUF_FINAL {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const SceneObject& default_instance();

  static inline const SceneObject* internal_default_instance() {
    return reinterpret_cast<const SceneObject*>(
               &_SceneObject_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void UnsafeArenaSwap(SceneObject* other);
  void Swap(SceneObject* other);
  friend void swap(SceneObject& a, SceneObject& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SceneObject* New() const PROTOBUF_FINAL { return New(NULL); }

  SceneObject* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SceneObject& from);
  void MergeFrom(const SceneObject& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(SceneObject* other);
  protected:
  explicit SceneObject(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // uint64 objid = 1;
  void clear_objid();
  static const int kObjidFieldNumber = 1;
  ::google::protobuf::uint64 objid() const;
  void set_objid(::google::protobuf::uint64 value);

  // .NetProto.SceneObjectType obj_type = 2;
  void clear_obj_type();
  static const int kObjTypeFieldNumber = 2;
  ::NetProto::SceneObjectType obj_type() const;
  void set_obj_type(::NetProto::SceneObjectType value);

  // int32 model_id = 3;
  void clear_model_id();
  static const int kModelIdFieldNumber = 3;
  ::google::protobuf::int32 model_id() const;
  void set_model_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:NetProto.SceneObject)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::uint64 objid_;
  int obj_type_;
  ::google::protobuf::int32 model_id_;
  mutable int _cached_size_;
  friend struct protobuf_Battle_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class AllSceneObject : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:NetProto.AllSceneObject) */ {
 public:
  AllSceneObject();
  virtual ~AllSceneObject();

  AllSceneObject(const AllSceneObject& from);

  inline AllSceneObject& operator=(const AllSceneObject& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AllSceneObject(AllSceneObject&& from) noexcept
    : AllSceneObject() {
    *this = ::std::move(from);
  }

  inline AllSceneObject& operator=(AllSceneObject&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline ::google::protobuf::Arena* GetArena() const PROTOBUF_FINAL {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const PROTOBUF_FINAL {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const AllSceneObject& default_instance();

  static inline const AllSceneObject* internal_default_instance() {
    return reinterpret_cast<const AllSceneObject*>(
               &_AllSceneObject_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    4;

  void UnsafeArenaSwap(AllSceneObject* other);
  void Swap(AllSceneObject* other);
  friend void swap(AllSceneObject& a, AllSceneObject& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AllSceneObject* New() const PROTOBUF_FINAL { return New(NULL); }

  AllSceneObject* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const AllSceneObject& from);
  void MergeFrom(const AllSceneObject& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(AllSceneObject* other);
  protected:
  explicit AllSceneObject(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .NetProto.SceneObject objs = 1;
  int objs_size() const;
  void clear_objs();
  static const int kObjsFieldNumber = 1;
  const ::NetProto::SceneObject& objs(int index) const;
  ::NetProto::SceneObject* mutable_objs(int index);
  ::NetProto::SceneObject* add_objs();
  ::google::protobuf::RepeatedPtrField< ::NetProto::SceneObject >*
      mutable_objs();
  const ::google::protobuf::RepeatedPtrField< ::NetProto::SceneObject >&
      objs() const;

  // @@protoc_insertion_point(class_scope:NetProto.AllSceneObject)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::RepeatedPtrField< ::NetProto::SceneObject > objs_;
  mutable int _cached_size_;
  friend struct protobuf_Battle_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RspFreeHero

// uint64 red_hero_id = 1;
inline void RspFreeHero::clear_red_hero_id() {
  red_hero_id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 RspFreeHero::red_hero_id() const {
  // @@protoc_insertion_point(field_get:NetProto.RspFreeHero.red_hero_id)
  return red_hero_id_;
}
inline void RspFreeHero::set_red_hero_id(::google::protobuf::uint64 value) {
  
  red_hero_id_ = value;
  // @@protoc_insertion_point(field_set:NetProto.RspFreeHero.red_hero_id)
}

// uint64 blue_hero_id = 2;
inline void RspFreeHero::clear_blue_hero_id() {
  blue_hero_id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 RspFreeHero::blue_hero_id() const {
  // @@protoc_insertion_point(field_get:NetProto.RspFreeHero.blue_hero_id)
  return blue_hero_id_;
}
inline void RspFreeHero::set_blue_hero_id(::google::protobuf::uint64 value) {
  
  blue_hero_id_ = value;
  // @@protoc_insertion_point(field_set:NetProto.RspFreeHero.blue_hero_id)
}

// -------------------------------------------------------------------

// SelectHeroReq

// uint64 hero_id = 1;
inline void SelectHeroReq::clear_hero_id() {
  hero_id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 SelectHeroReq::hero_id() const {
  // @@protoc_insertion_point(field_get:NetProto.SelectHeroReq.hero_id)
  return hero_id_;
}
inline void SelectHeroReq::set_hero_id(::google::protobuf::uint64 value) {
  
  hero_id_ = value;
  // @@protoc_insertion_point(field_set:NetProto.SelectHeroReq.hero_id)
}

// -------------------------------------------------------------------

// SelectHeroRsp

// uint64 hero_id = 1;
inline void SelectHeroRsp::clear_hero_id() {
  hero_id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 SelectHeroRsp::hero_id() const {
  // @@protoc_insertion_point(field_get:NetProto.SelectHeroRsp.hero_id)
  return hero_id_;
}
inline void SelectHeroRsp::set_hero_id(::google::protobuf::uint64 value) {
  
  hero_id_ = value;
  // @@protoc_insertion_point(field_set:NetProto.SelectHeroRsp.hero_id)
}

// bool is_succ = 2;
inline void SelectHeroRsp::clear_is_succ() {
  is_succ_ = false;
}
inline bool SelectHeroRsp::is_succ() const {
  // @@protoc_insertion_point(field_get:NetProto.SelectHeroRsp.is_succ)
  return is_succ_;
}
inline void SelectHeroRsp::set_is_succ(bool value) {
  
  is_succ_ = value;
  // @@protoc_insertion_point(field_set:NetProto.SelectHeroRsp.is_succ)
}

// -------------------------------------------------------------------

// SceneObject

// uint64 objid = 1;
inline void SceneObject::clear_objid() {
  objid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 SceneObject::objid() const {
  // @@protoc_insertion_point(field_get:NetProto.SceneObject.objid)
  return objid_;
}
inline void SceneObject::set_objid(::google::protobuf::uint64 value) {
  
  objid_ = value;
  // @@protoc_insertion_point(field_set:NetProto.SceneObject.objid)
}

// .NetProto.SceneObjectType obj_type = 2;
inline void SceneObject::clear_obj_type() {
  obj_type_ = 0;
}
inline ::NetProto::SceneObjectType SceneObject::obj_type() const {
  // @@protoc_insertion_point(field_get:NetProto.SceneObject.obj_type)
  return static_cast< ::NetProto::SceneObjectType >(obj_type_);
}
inline void SceneObject::set_obj_type(::NetProto::SceneObjectType value) {
  
  obj_type_ = value;
  // @@protoc_insertion_point(field_set:NetProto.SceneObject.obj_type)
}

// int32 model_id = 3;
inline void SceneObject::clear_model_id() {
  model_id_ = 0;
}
inline ::google::protobuf::int32 SceneObject::model_id() const {
  // @@protoc_insertion_point(field_get:NetProto.SceneObject.model_id)
  return model_id_;
}
inline void SceneObject::set_model_id(::google::protobuf::int32 value) {
  
  model_id_ = value;
  // @@protoc_insertion_point(field_set:NetProto.SceneObject.model_id)
}

// -------------------------------------------------------------------

// AllSceneObject

// repeated .NetProto.SceneObject objs = 1;
inline int AllSceneObject::objs_size() const {
  return objs_.size();
}
inline void AllSceneObject::clear_objs() {
  objs_.Clear();
}
inline const ::NetProto::SceneObject& AllSceneObject::objs(int index) const {
  // @@protoc_insertion_point(field_get:NetProto.AllSceneObject.objs)
  return objs_.Get(index);
}
inline ::NetProto::SceneObject* AllSceneObject::mutable_objs(int index) {
  // @@protoc_insertion_point(field_mutable:NetProto.AllSceneObject.objs)
  return objs_.Mutable(index);
}
inline ::NetProto::SceneObject* AllSceneObject::add_objs() {
  // @@protoc_insertion_point(field_add:NetProto.AllSceneObject.objs)
  return objs_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::NetProto::SceneObject >*
AllSceneObject::mutable_objs() {
  // @@protoc_insertion_point(field_mutable_list:NetProto.AllSceneObject.objs)
  return &objs_;
}
inline const ::google::protobuf::RepeatedPtrField< ::NetProto::SceneObject >&
AllSceneObject::objs() const {
  // @@protoc_insertion_point(field_list:NetProto.AllSceneObject.objs)
  return objs_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace NetProto

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::NetProto::SceneObjectType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::NetProto::SceneObjectType>() {
  return ::NetProto::SceneObjectType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Battle_2eproto__INCLUDED
