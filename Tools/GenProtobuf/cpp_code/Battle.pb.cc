// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Battle.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Battle.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
class RspFreeHeroDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<RspFreeHero>
     _instance;
} _RspFreeHero_default_instance_;
class SelectHeroReqDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<SelectHeroReq>
     _instance;
} _SelectHeroReq_default_instance_;
class SelectHeroRspDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<SelectHeroRsp>
     _instance;
} _SelectHeroRsp_default_instance_;

namespace protobuf_Battle_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[3];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RspFreeHero, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RspFreeHero, free_hero_ids_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SelectHeroReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SelectHeroReq, hero_id_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SelectHeroRsp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SelectHeroRsp, is_succ_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(RspFreeHero)},
  { 6, -1, sizeof(SelectHeroReq)},
  { 12, -1, sizeof(SelectHeroRsp)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_RspFreeHero_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_SelectHeroReq_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_SelectHeroRsp_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "Battle.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 3);
}

}  // namespace
void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _RspFreeHero_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_RspFreeHero_default_instance_);_SelectHeroReq_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_SelectHeroReq_default_instance_);_SelectHeroRsp_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_SelectHeroRsp_default_instance_);}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\014Battle.proto\"$\n\013RspFreeHero\022\025\n\rfree_he"
      "ro_ids\030\001 \003(\004\" \n\rSelectHeroReq\022\017\n\007hero_id"
      "\030\001 \001(\004\" \n\rSelectHeroRsp\022\017\n\007is_succ\030\001 \001(\010"
      "B\003\370\001\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 133);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Battle.proto", &protobuf_RegisterTypes);
}
} // anonymous namespace

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_Battle_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RspFreeHero::kFreeHeroIdsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RspFreeHero::RspFreeHero()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_Battle_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:RspFreeHero)
}
RspFreeHero::RspFreeHero(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena),
  free_hero_ids_(arena) {
  protobuf_Battle_2eproto::InitDefaults();
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:RspFreeHero)
}
RspFreeHero::RspFreeHero(const RspFreeHero& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      free_hero_ids_(from.free_hero_ids_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:RspFreeHero)
}

void RspFreeHero::SharedCtor() {
  _cached_size_ = 0;
}

RspFreeHero::~RspFreeHero() {
  // @@protoc_insertion_point(destructor:RspFreeHero)
  SharedDtor();
}

void RspFreeHero::SharedDtor() {
  ::google::protobuf::Arena* arena = GetArenaNoVirtual();
  GOOGLE_DCHECK(arena == NULL);
  if (arena != NULL) {
    return;
  }

}

void RspFreeHero::ArenaDtor(void* object) {
  RspFreeHero* _this = reinterpret_cast< RspFreeHero* >(object);
  (void)_this;
}
void RspFreeHero::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void RspFreeHero::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RspFreeHero::descriptor() {
  protobuf_Battle_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Battle_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const RspFreeHero& RspFreeHero::default_instance() {
  protobuf_Battle_2eproto::InitDefaults();
  return *internal_default_instance();
}

RspFreeHero* RspFreeHero::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<RspFreeHero>(arena);
}

void RspFreeHero::Clear() {
// @@protoc_insertion_point(message_clear_start:RspFreeHero)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  free_hero_ids_.Clear();
  _internal_metadata_.Clear();
}

bool RspFreeHero::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:RspFreeHero)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated uint64 free_hero_ids = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, this->mutable_free_hero_ids())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 1, 10u, input, this->mutable_free_hero_ids())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:RspFreeHero)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:RspFreeHero)
  return false;
#undef DO_
}

void RspFreeHero::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:RspFreeHero)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint64 free_hero_ids = 1;
  if (this->free_hero_ids_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(1, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _free_hero_ids_cached_byte_size_));
  }
  for (int i = 0, n = this->free_hero_ids_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64NoTag(
      this->free_hero_ids(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:RspFreeHero)
}

::google::protobuf::uint8* RspFreeHero::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:RspFreeHero)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint64 free_hero_ids = 1;
  if (this->free_hero_ids_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      1,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _free_hero_ids_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt64NoTagToArray(this->free_hero_ids_, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:RspFreeHero)
  return target;
}

size_t RspFreeHero::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:RspFreeHero)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint64 free_hero_ids = 1;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt64Size(this->free_hero_ids_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _free_hero_ids_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RspFreeHero::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:RspFreeHero)
  GOOGLE_DCHECK_NE(&from, this);
  const RspFreeHero* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const RspFreeHero>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:RspFreeHero)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:RspFreeHero)
    MergeFrom(*source);
  }
}

void RspFreeHero::MergeFrom(const RspFreeHero& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:RspFreeHero)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  free_hero_ids_.MergeFrom(from.free_hero_ids_);
}

void RspFreeHero::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:RspFreeHero)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RspFreeHero::CopyFrom(const RspFreeHero& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:RspFreeHero)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RspFreeHero::IsInitialized() const {
  return true;
}

void RspFreeHero::Swap(RspFreeHero* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    RspFreeHero* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void RspFreeHero::UnsafeArenaSwap(RspFreeHero* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void RspFreeHero::InternalSwap(RspFreeHero* other) {
  using std::swap;
  free_hero_ids_.InternalSwap(&other->free_hero_ids_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata RspFreeHero::GetMetadata() const {
  protobuf_Battle_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Battle_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// RspFreeHero

// repeated uint64 free_hero_ids = 1;
int RspFreeHero::free_hero_ids_size() const {
  return free_hero_ids_.size();
}
void RspFreeHero::clear_free_hero_ids() {
  free_hero_ids_.Clear();
}
::google::protobuf::uint64 RspFreeHero::free_hero_ids(int index) const {
  // @@protoc_insertion_point(field_get:RspFreeHero.free_hero_ids)
  return free_hero_ids_.Get(index);
}
void RspFreeHero::set_free_hero_ids(int index, ::google::protobuf::uint64 value) {
  free_hero_ids_.Set(index, value);
  // @@protoc_insertion_point(field_set:RspFreeHero.free_hero_ids)
}
void RspFreeHero::add_free_hero_ids(::google::protobuf::uint64 value) {
  free_hero_ids_.Add(value);
  // @@protoc_insertion_point(field_add:RspFreeHero.free_hero_ids)
}
const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
RspFreeHero::free_hero_ids() const {
  // @@protoc_insertion_point(field_list:RspFreeHero.free_hero_ids)
  return free_hero_ids_;
}
::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
RspFreeHero::mutable_free_hero_ids() {
  // @@protoc_insertion_point(field_mutable_list:RspFreeHero.free_hero_ids)
  return &free_hero_ids_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SelectHeroReq::kHeroIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SelectHeroReq::SelectHeroReq()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_Battle_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:SelectHeroReq)
}
SelectHeroReq::SelectHeroReq(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
  protobuf_Battle_2eproto::InitDefaults();
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:SelectHeroReq)
}
SelectHeroReq::SelectHeroReq(const SelectHeroReq& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  hero_id_ = from.hero_id_;
  // @@protoc_insertion_point(copy_constructor:SelectHeroReq)
}

void SelectHeroReq::SharedCtor() {
  hero_id_ = GOOGLE_ULONGLONG(0);
  _cached_size_ = 0;
}

SelectHeroReq::~SelectHeroReq() {
  // @@protoc_insertion_point(destructor:SelectHeroReq)
  SharedDtor();
}

void SelectHeroReq::SharedDtor() {
  ::google::protobuf::Arena* arena = GetArenaNoVirtual();
  GOOGLE_DCHECK(arena == NULL);
  if (arena != NULL) {
    return;
  }

}

void SelectHeroReq::ArenaDtor(void* object) {
  SelectHeroReq* _this = reinterpret_cast< SelectHeroReq* >(object);
  (void)_this;
}
void SelectHeroReq::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void SelectHeroReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SelectHeroReq::descriptor() {
  protobuf_Battle_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Battle_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SelectHeroReq& SelectHeroReq::default_instance() {
  protobuf_Battle_2eproto::InitDefaults();
  return *internal_default_instance();
}

SelectHeroReq* SelectHeroReq::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<SelectHeroReq>(arena);
}

void SelectHeroReq::Clear() {
// @@protoc_insertion_point(message_clear_start:SelectHeroReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  hero_id_ = GOOGLE_ULONGLONG(0);
  _internal_metadata_.Clear();
}

bool SelectHeroReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:SelectHeroReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint64 hero_id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &hero_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:SelectHeroReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:SelectHeroReq)
  return false;
#undef DO_
}

void SelectHeroReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:SelectHeroReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 hero_id = 1;
  if (this->hero_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->hero_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:SelectHeroReq)
}

::google::protobuf::uint8* SelectHeroReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:SelectHeroReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 hero_id = 1;
  if (this->hero_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->hero_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:SelectHeroReq)
  return target;
}

size_t SelectHeroReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:SelectHeroReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint64 hero_id = 1;
  if (this->hero_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->hero_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SelectHeroReq::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:SelectHeroReq)
  GOOGLE_DCHECK_NE(&from, this);
  const SelectHeroReq* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SelectHeroReq>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:SelectHeroReq)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:SelectHeroReq)
    MergeFrom(*source);
  }
}

void SelectHeroReq::MergeFrom(const SelectHeroReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:SelectHeroReq)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.hero_id() != 0) {
    set_hero_id(from.hero_id());
  }
}

void SelectHeroReq::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:SelectHeroReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SelectHeroReq::CopyFrom(const SelectHeroReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:SelectHeroReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SelectHeroReq::IsInitialized() const {
  return true;
}

void SelectHeroReq::Swap(SelectHeroReq* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    SelectHeroReq* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void SelectHeroReq::UnsafeArenaSwap(SelectHeroReq* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void SelectHeroReq::InternalSwap(SelectHeroReq* other) {
  using std::swap;
  swap(hero_id_, other->hero_id_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SelectHeroReq::GetMetadata() const {
  protobuf_Battle_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Battle_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SelectHeroReq

// uint64 hero_id = 1;
void SelectHeroReq::clear_hero_id() {
  hero_id_ = GOOGLE_ULONGLONG(0);
}
::google::protobuf::uint64 SelectHeroReq::hero_id() const {
  // @@protoc_insertion_point(field_get:SelectHeroReq.hero_id)
  return hero_id_;
}
void SelectHeroReq::set_hero_id(::google::protobuf::uint64 value) {
  
  hero_id_ = value;
  // @@protoc_insertion_point(field_set:SelectHeroReq.hero_id)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SelectHeroRsp::kIsSuccFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SelectHeroRsp::SelectHeroRsp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_Battle_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:SelectHeroRsp)
}
SelectHeroRsp::SelectHeroRsp(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
  protobuf_Battle_2eproto::InitDefaults();
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:SelectHeroRsp)
}
SelectHeroRsp::SelectHeroRsp(const SelectHeroRsp& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  is_succ_ = from.is_succ_;
  // @@protoc_insertion_point(copy_constructor:SelectHeroRsp)
}

void SelectHeroRsp::SharedCtor() {
  is_succ_ = false;
  _cached_size_ = 0;
}

SelectHeroRsp::~SelectHeroRsp() {
  // @@protoc_insertion_point(destructor:SelectHeroRsp)
  SharedDtor();
}

void SelectHeroRsp::SharedDtor() {
  ::google::protobuf::Arena* arena = GetArenaNoVirtual();
  GOOGLE_DCHECK(arena == NULL);
  if (arena != NULL) {
    return;
  }

}

void SelectHeroRsp::ArenaDtor(void* object) {
  SelectHeroRsp* _this = reinterpret_cast< SelectHeroRsp* >(object);
  (void)_this;
}
void SelectHeroRsp::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void SelectHeroRsp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SelectHeroRsp::descriptor() {
  protobuf_Battle_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Battle_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SelectHeroRsp& SelectHeroRsp::default_instance() {
  protobuf_Battle_2eproto::InitDefaults();
  return *internal_default_instance();
}

SelectHeroRsp* SelectHeroRsp::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<SelectHeroRsp>(arena);
}

void SelectHeroRsp::Clear() {
// @@protoc_insertion_point(message_clear_start:SelectHeroRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  is_succ_ = false;
  _internal_metadata_.Clear();
}

bool SelectHeroRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:SelectHeroRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool is_succ = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_succ_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:SelectHeroRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:SelectHeroRsp)
  return false;
#undef DO_
}

void SelectHeroRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:SelectHeroRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_succ = 1;
  if (this->is_succ() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->is_succ(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:SelectHeroRsp)
}

::google::protobuf::uint8* SelectHeroRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:SelectHeroRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_succ = 1;
  if (this->is_succ() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->is_succ(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:SelectHeroRsp)
  return target;
}

size_t SelectHeroRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:SelectHeroRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bool is_succ = 1;
  if (this->is_succ() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SelectHeroRsp::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:SelectHeroRsp)
  GOOGLE_DCHECK_NE(&from, this);
  const SelectHeroRsp* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SelectHeroRsp>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:SelectHeroRsp)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:SelectHeroRsp)
    MergeFrom(*source);
  }
}

void SelectHeroRsp::MergeFrom(const SelectHeroRsp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:SelectHeroRsp)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.is_succ() != 0) {
    set_is_succ(from.is_succ());
  }
}

void SelectHeroRsp::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:SelectHeroRsp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SelectHeroRsp::CopyFrom(const SelectHeroRsp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:SelectHeroRsp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SelectHeroRsp::IsInitialized() const {
  return true;
}

void SelectHeroRsp::Swap(SelectHeroRsp* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    SelectHeroRsp* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void SelectHeroRsp::UnsafeArenaSwap(SelectHeroRsp* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void SelectHeroRsp::InternalSwap(SelectHeroRsp* other) {
  using std::swap;
  swap(is_succ_, other->is_succ_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SelectHeroRsp::GetMetadata() const {
  protobuf_Battle_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Battle_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SelectHeroRsp

// bool is_succ = 1;
void SelectHeroRsp::clear_is_succ() {
  is_succ_ = false;
}
bool SelectHeroRsp::is_succ() const {
  // @@protoc_insertion_point(field_get:SelectHeroRsp.is_succ)
  return is_succ_;
}
void SelectHeroRsp::set_is_succ(bool value) {
  
  is_succ_ = value;
  // @@protoc_insertion_point(field_set:SelectHeroRsp.is_succ)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)