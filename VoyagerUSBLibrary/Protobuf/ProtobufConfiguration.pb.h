// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ProtobufConfiguration.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ProtobufConfiguration_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ProtobufConfiguration_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3008000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3008000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ProtobufConfiguration_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ProtobufConfiguration_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ProtobufConfiguration_2eproto;
class BNC;
class BNCDefaultTypeInternal;
extern BNCDefaultTypeInternal _BNC_default_instance_;
class Lemo;
class LemoDefaultTypeInternal;
extern LemoDefaultTypeInternal _Lemo_default_instance_;
class ProtobufConfiguration;
class ProtobufConfigurationDefaultTypeInternal;
extern ProtobufConfigurationDefaultTypeInternal _ProtobufConfiguration_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::BNC* Arena::CreateMaybeMessage<::BNC>(Arena*);
template<> ::Lemo* Arena::CreateMaybeMessage<::Lemo>(Arena*);
template<> ::ProtobufConfiguration* Arena::CreateMaybeMessage<::ProtobufConfiguration>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

enum Gain : int {
  LOW = 0,
  MEDIUM = 1,
  HIGH = 2,
  GAINNOTUSED = 3,
  Gain_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  Gain_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool Gain_IsValid(int value);
constexpr Gain Gain_MIN = LOW;
constexpr Gain Gain_MAX = GAINNOTUSED;
constexpr int Gain_ARRAYSIZE = Gain_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Gain_descriptor();
template<typename T>
inline const std::string& Gain_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Gain>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Gain_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Gain_descriptor(), enum_t_value);
}
inline bool Gain_Parse(
    const std::string& name, Gain* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Gain>(
    Gain_descriptor(), name, value);
}
enum Iepe : int {
  OFF = 0,
  ON = 1,
  IEPENOTUSED = 2,
  Iepe_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  Iepe_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool Iepe_IsValid(int value);
constexpr Iepe Iepe_MIN = OFF;
constexpr Iepe Iepe_MAX = IEPENOTUSED;
constexpr int Iepe_ARRAYSIZE = Iepe_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Iepe_descriptor();
template<typename T>
inline const std::string& Iepe_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Iepe>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Iepe_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Iepe_descriptor(), enum_t_value);
}
inline bool Iepe_Parse(
    const std::string& name, Iepe* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Iepe>(
    Iepe_descriptor(), name, value);
}
enum Input : int {
  Aux1 = 0,
  Aux2 = 1,
  Flown = 2,
  Input_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  Input_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool Input_IsValid(int value);
constexpr Input Input_MIN = Aux1;
constexpr Input Input_MAX = Flown;
constexpr int Input_ARRAYSIZE = Input_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Input_descriptor();
template<typename T>
inline const std::string& Input_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Input>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Input_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Input_descriptor(), enum_t_value);
}
inline bool Input_Parse(
    const std::string& name, Input* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Input>(
    Input_descriptor(), name, value);
}
// ===================================================================

class Lemo :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Lemo) */ {
 public:
  Lemo();
  virtual ~Lemo();

  Lemo(const Lemo& from);
  Lemo(Lemo&& from) noexcept
    : Lemo() {
    *this = ::std::move(from);
  }

  inline Lemo& operator=(const Lemo& from) {
    CopyFrom(from);
    return *this;
  }
  inline Lemo& operator=(Lemo&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const Lemo& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Lemo* internal_default_instance() {
    return reinterpret_cast<const Lemo*>(
               &_Lemo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Lemo* other);
  friend void swap(Lemo& a, Lemo& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Lemo* New() const final {
    return CreateMaybeMessage<Lemo>(nullptr);
  }

  Lemo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Lemo>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Lemo& from);
  void MergeFrom(const Lemo& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Lemo* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Lemo";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ProtobufConfiguration_2eproto);
    return ::descriptor_table_ProtobufConfiguration_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .Gain Gain = 1;
  void clear_gain();
  static const int kGainFieldNumber = 1;
  ::Gain gain() const;
  void set_gain(::Gain value);

  // @@protoc_insertion_point(class_scope:Lemo)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  int gain_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ProtobufConfiguration_2eproto;
};
// -------------------------------------------------------------------

class BNC :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:BNC) */ {
 public:
  BNC();
  virtual ~BNC();

  BNC(const BNC& from);
  BNC(BNC&& from) noexcept
    : BNC() {
    *this = ::std::move(from);
  }

  inline BNC& operator=(const BNC& from) {
    CopyFrom(from);
    return *this;
  }
  inline BNC& operator=(BNC&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const BNC& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const BNC* internal_default_instance() {
    return reinterpret_cast<const BNC*>(
               &_BNC_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(BNC* other);
  friend void swap(BNC& a, BNC& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline BNC* New() const final {
    return CreateMaybeMessage<BNC>(nullptr);
  }

  BNC* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<BNC>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const BNC& from);
  void MergeFrom(const BNC& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(BNC* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "BNC";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ProtobufConfiguration_2eproto);
    return ::descriptor_table_ProtobufConfiguration_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .Gain Gain = 1;
  void clear_gain();
  static const int kGainFieldNumber = 1;
  ::Gain gain() const;
  void set_gain(::Gain value);

  // .Iepe Iepe = 2;
  void clear_iepe();
  static const int kIepeFieldNumber = 2;
  ::Iepe iepe() const;
  void set_iepe(::Iepe value);

  // @@protoc_insertion_point(class_scope:BNC)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  int gain_;
  int iepe_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ProtobufConfiguration_2eproto;
};
// -------------------------------------------------------------------

class ProtobufConfiguration :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ProtobufConfiguration) */ {
 public:
  ProtobufConfiguration();
  virtual ~ProtobufConfiguration();

  ProtobufConfiguration(const ProtobufConfiguration& from);
  ProtobufConfiguration(ProtobufConfiguration&& from) noexcept
    : ProtobufConfiguration() {
    *this = ::std::move(from);
  }

  inline ProtobufConfiguration& operator=(const ProtobufConfiguration& from) {
    CopyFrom(from);
    return *this;
  }
  inline ProtobufConfiguration& operator=(ProtobufConfiguration&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const ProtobufConfiguration& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ProtobufConfiguration* internal_default_instance() {
    return reinterpret_cast<const ProtobufConfiguration*>(
               &_ProtobufConfiguration_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(ProtobufConfiguration* other);
  friend void swap(ProtobufConfiguration& a, ProtobufConfiguration& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ProtobufConfiguration* New() const final {
    return CreateMaybeMessage<ProtobufConfiguration>(nullptr);
  }

  ProtobufConfiguration* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ProtobufConfiguration>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ProtobufConfiguration& from);
  void MergeFrom(const ProtobufConfiguration& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ProtobufConfiguration* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ProtobufConfiguration";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ProtobufConfiguration_2eproto);
    return ::descriptor_table_ProtobufConfiguration_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // bytes audioData = 1;
  void clear_audiodata();
  static const int kAudioDataFieldNumber = 1;
  const std::string& audiodata() const;
  void set_audiodata(const std::string& value);
  void set_audiodata(std::string&& value);
  void set_audiodata(const char* value);
  void set_audiodata(const void* value, size_t size);
  std::string* mutable_audiodata();
  std::string* release_audiodata();
  void set_allocated_audiodata(std::string* audiodata);

  // string command = 12;
  void clear_command();
  static const int kCommandFieldNumber = 12;
  const std::string& command() const;
  void set_command(const std::string& value);
  void set_command(std::string&& value);
  void set_command(const char* value);
  void set_command(const char* value, size_t size);
  std::string* mutable_command();
  std::string* release_command();
  void set_allocated_command(std::string* command);

  // .BNC BNC1 = 13;
  bool has_bnc1() const;
  void clear_bnc1();
  static const int kBNC1FieldNumber = 13;
  const ::BNC& bnc1() const;
  ::BNC* release_bnc1();
  ::BNC* mutable_bnc1();
  void set_allocated_bnc1(::BNC* bnc1);

  // .BNC BNC2 = 14;
  bool has_bnc2() const;
  void clear_bnc2();
  static const int kBNC2FieldNumber = 14;
  const ::BNC& bnc2() const;
  ::BNC* release_bnc2();
  ::BNC* mutable_bnc2();
  void set_allocated_bnc2(::BNC* bnc2);

  // .Lemo Lemo = 15;
  bool has_lemo() const;
  void clear_lemo();
  static const int kLemoFieldNumber = 15;
  const ::Lemo& lemo() const;
  ::Lemo* release_lemo();
  ::Lemo* mutable_lemo();
  void set_allocated_lemo(::Lemo* lemo);

  // uint32 samplingFrequency = 2;
  void clear_samplingfrequency();
  static const int kSamplingFrequencyFieldNumber = 2;
  ::PROTOBUF_NAMESPACE_ID::uint32 samplingfrequency() const;
  void set_samplingfrequency(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // uint32 TDMMode = 3;
  void clear_tdmmode();
  static const int kTDMModeFieldNumber = 3;
  ::PROTOBUF_NAMESPACE_ID::uint32 tdmmode() const;
  void set_tdmmode(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // uint32 nrOfChannels = 4;
  void clear_nrofchannels();
  static const int kNrOfChannelsFieldNumber = 4;
  ::PROTOBUF_NAMESPACE_ID::uint32 nrofchannels() const;
  void set_nrofchannels(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // uint32 selectedChannels = 5;
  void clear_selectedchannels();
  static const int kSelectedChannelsFieldNumber = 5;
  ::PROTOBUF_NAMESPACE_ID::uint32 selectedchannels() const;
  void set_selectedchannels(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // uint32 MsAudio = 6;
  void clear_msaudio();
  static const int kMsAudioFieldNumber = 6;
  ::PROTOBUF_NAMESPACE_ID::uint32 msaudio() const;
  void set_msaudio(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // uint32 frameSize = 7;
  void clear_framesize();
  static const int kFrameSizeFieldNumber = 7;
  ::PROTOBUF_NAMESPACE_ID::uint32 framesize() const;
  void set_framesize(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // uint32 samplesPerChannel = 8;
  void clear_samplesperchannel();
  static const int kSamplesPerChannelFieldNumber = 8;
  ::PROTOBUF_NAMESPACE_ID::uint32 samplesperchannel() const;
  void set_samplesperchannel(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // uint32 bytesPerSample = 9;
  void clear_bytespersample();
  static const int kBytesPerSampleFieldNumber = 9;
  ::PROTOBUF_NAMESPACE_ID::uint32 bytespersample() const;
  void set_bytespersample(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // uint64 timestamp = 11;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 11;
  ::PROTOBUF_NAMESPACE_ID::uint64 timestamp() const;
  void set_timestamp(::PROTOBUF_NAMESPACE_ID::uint64 value);

  // uint32 bytesPerChannel = 10;
  void clear_bytesperchannel();
  static const int kBytesPerChannelFieldNumber = 10;
  ::PROTOBUF_NAMESPACE_ID::uint32 bytesperchannel() const;
  void set_bytesperchannel(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // @@protoc_insertion_point(class_scope:ProtobufConfiguration)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr audiodata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr command_;
  ::BNC* bnc1_;
  ::BNC* bnc2_;
  ::Lemo* lemo_;
  ::PROTOBUF_NAMESPACE_ID::uint32 samplingfrequency_;
  ::PROTOBUF_NAMESPACE_ID::uint32 tdmmode_;
  ::PROTOBUF_NAMESPACE_ID::uint32 nrofchannels_;
  ::PROTOBUF_NAMESPACE_ID::uint32 selectedchannels_;
  ::PROTOBUF_NAMESPACE_ID::uint32 msaudio_;
  ::PROTOBUF_NAMESPACE_ID::uint32 framesize_;
  ::PROTOBUF_NAMESPACE_ID::uint32 samplesperchannel_;
  ::PROTOBUF_NAMESPACE_ID::uint32 bytespersample_;
  ::PROTOBUF_NAMESPACE_ID::uint64 timestamp_;
  ::PROTOBUF_NAMESPACE_ID::uint32 bytesperchannel_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ProtobufConfiguration_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Lemo

// .Gain Gain = 1;
inline void Lemo::clear_gain() {
  gain_ = 0;
}
inline ::Gain Lemo::gain() const {
  // @@protoc_insertion_point(field_get:Lemo.Gain)
  return static_cast< ::Gain >(gain_);
}
inline void Lemo::set_gain(::Gain value) {
  
  gain_ = value;
  // @@protoc_insertion_point(field_set:Lemo.Gain)
}

// -------------------------------------------------------------------

// BNC

// .Gain Gain = 1;
inline void BNC::clear_gain() {
  gain_ = 0;
}
inline ::Gain BNC::gain() const {
  // @@protoc_insertion_point(field_get:BNC.Gain)
  return static_cast< ::Gain >(gain_);
}
inline void BNC::set_gain(::Gain value) {
  
  gain_ = value;
  // @@protoc_insertion_point(field_set:BNC.Gain)
}

// .Iepe Iepe = 2;
inline void BNC::clear_iepe() {
  iepe_ = 0;
}
inline ::Iepe BNC::iepe() const {
  // @@protoc_insertion_point(field_get:BNC.Iepe)
  return static_cast< ::Iepe >(iepe_);
}
inline void BNC::set_iepe(::Iepe value) {
  
  iepe_ = value;
  // @@protoc_insertion_point(field_set:BNC.Iepe)
}

// -------------------------------------------------------------------

// ProtobufConfiguration

// bytes audioData = 1;
inline void ProtobufConfiguration::clear_audiodata() {
  audiodata_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& ProtobufConfiguration::audiodata() const {
  // @@protoc_insertion_point(field_get:ProtobufConfiguration.audioData)
  return audiodata_.GetNoArena();
}
inline void ProtobufConfiguration::set_audiodata(const std::string& value) {
  
  audiodata_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ProtobufConfiguration.audioData)
}
inline void ProtobufConfiguration::set_audiodata(std::string&& value) {
  
  audiodata_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ProtobufConfiguration.audioData)
}
inline void ProtobufConfiguration::set_audiodata(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  audiodata_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ProtobufConfiguration.audioData)
}
inline void ProtobufConfiguration::set_audiodata(const void* value, size_t size) {
  
  audiodata_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ProtobufConfiguration.audioData)
}
inline std::string* ProtobufConfiguration::mutable_audiodata() {
  
  // @@protoc_insertion_point(field_mutable:ProtobufConfiguration.audioData)
  return audiodata_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ProtobufConfiguration::release_audiodata() {
  // @@protoc_insertion_point(field_release:ProtobufConfiguration.audioData)
  
  return audiodata_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ProtobufConfiguration::set_allocated_audiodata(std::string* audiodata) {
  if (audiodata != nullptr) {
    
  } else {
    
  }
  audiodata_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), audiodata);
  // @@protoc_insertion_point(field_set_allocated:ProtobufConfiguration.audioData)
}

// uint32 samplingFrequency = 2;
inline void ProtobufConfiguration::clear_samplingfrequency() {
  samplingfrequency_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 ProtobufConfiguration::samplingfrequency() const {
  // @@protoc_insertion_point(field_get:ProtobufConfiguration.samplingFrequency)
  return samplingfrequency_;
}
inline void ProtobufConfiguration::set_samplingfrequency(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  samplingfrequency_ = value;
  // @@protoc_insertion_point(field_set:ProtobufConfiguration.samplingFrequency)
}

// uint32 TDMMode = 3;
inline void ProtobufConfiguration::clear_tdmmode() {
  tdmmode_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 ProtobufConfiguration::tdmmode() const {
  // @@protoc_insertion_point(field_get:ProtobufConfiguration.TDMMode)
  return tdmmode_;
}
inline void ProtobufConfiguration::set_tdmmode(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  tdmmode_ = value;
  // @@protoc_insertion_point(field_set:ProtobufConfiguration.TDMMode)
}

// uint32 nrOfChannels = 4;
inline void ProtobufConfiguration::clear_nrofchannels() {
  nrofchannels_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 ProtobufConfiguration::nrofchannels() const {
  // @@protoc_insertion_point(field_get:ProtobufConfiguration.nrOfChannels)
  return nrofchannels_;
}
inline void ProtobufConfiguration::set_nrofchannels(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  nrofchannels_ = value;
  // @@protoc_insertion_point(field_set:ProtobufConfiguration.nrOfChannels)
}

// uint32 selectedChannels = 5;
inline void ProtobufConfiguration::clear_selectedchannels() {
  selectedchannels_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 ProtobufConfiguration::selectedchannels() const {
  // @@protoc_insertion_point(field_get:ProtobufConfiguration.selectedChannels)
  return selectedchannels_;
}
inline void ProtobufConfiguration::set_selectedchannels(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  selectedchannels_ = value;
  // @@protoc_insertion_point(field_set:ProtobufConfiguration.selectedChannels)
}

// uint32 MsAudio = 6;
inline void ProtobufConfiguration::clear_msaudio() {
  msaudio_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 ProtobufConfiguration::msaudio() const {
  // @@protoc_insertion_point(field_get:ProtobufConfiguration.MsAudio)
  return msaudio_;
}
inline void ProtobufConfiguration::set_msaudio(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  msaudio_ = value;
  // @@protoc_insertion_point(field_set:ProtobufConfiguration.MsAudio)
}

// uint32 frameSize = 7;
inline void ProtobufConfiguration::clear_framesize() {
  framesize_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 ProtobufConfiguration::framesize() const {
  // @@protoc_insertion_point(field_get:ProtobufConfiguration.frameSize)
  return framesize_;
}
inline void ProtobufConfiguration::set_framesize(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  framesize_ = value;
  // @@protoc_insertion_point(field_set:ProtobufConfiguration.frameSize)
}

// uint32 samplesPerChannel = 8;
inline void ProtobufConfiguration::clear_samplesperchannel() {
  samplesperchannel_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 ProtobufConfiguration::samplesperchannel() const {
  // @@protoc_insertion_point(field_get:ProtobufConfiguration.samplesPerChannel)
  return samplesperchannel_;
}
inline void ProtobufConfiguration::set_samplesperchannel(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  samplesperchannel_ = value;
  // @@protoc_insertion_point(field_set:ProtobufConfiguration.samplesPerChannel)
}

// uint32 bytesPerSample = 9;
inline void ProtobufConfiguration::clear_bytespersample() {
  bytespersample_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 ProtobufConfiguration::bytespersample() const {
  // @@protoc_insertion_point(field_get:ProtobufConfiguration.bytesPerSample)
  return bytespersample_;
}
inline void ProtobufConfiguration::set_bytespersample(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  bytespersample_ = value;
  // @@protoc_insertion_point(field_set:ProtobufConfiguration.bytesPerSample)
}

// uint32 bytesPerChannel = 10;
inline void ProtobufConfiguration::clear_bytesperchannel() {
  bytesperchannel_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 ProtobufConfiguration::bytesperchannel() const {
  // @@protoc_insertion_point(field_get:ProtobufConfiguration.bytesPerChannel)
  return bytesperchannel_;
}
inline void ProtobufConfiguration::set_bytesperchannel(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  bytesperchannel_ = value;
  // @@protoc_insertion_point(field_set:ProtobufConfiguration.bytesPerChannel)
}

// uint64 timestamp = 11;
inline void ProtobufConfiguration::clear_timestamp() {
  timestamp_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 ProtobufConfiguration::timestamp() const {
  // @@protoc_insertion_point(field_get:ProtobufConfiguration.timestamp)
  return timestamp_;
}
inline void ProtobufConfiguration::set_timestamp(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:ProtobufConfiguration.timestamp)
}

// string command = 12;
inline void ProtobufConfiguration::clear_command() {
  command_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& ProtobufConfiguration::command() const {
  // @@protoc_insertion_point(field_get:ProtobufConfiguration.command)
  return command_.GetNoArena();
}
inline void ProtobufConfiguration::set_command(const std::string& value) {
  
  command_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ProtobufConfiguration.command)
}
inline void ProtobufConfiguration::set_command(std::string&& value) {
  
  command_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ProtobufConfiguration.command)
}
inline void ProtobufConfiguration::set_command(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  command_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ProtobufConfiguration.command)
}
inline void ProtobufConfiguration::set_command(const char* value, size_t size) {
  
  command_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ProtobufConfiguration.command)
}
inline std::string* ProtobufConfiguration::mutable_command() {
  
  // @@protoc_insertion_point(field_mutable:ProtobufConfiguration.command)
  return command_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ProtobufConfiguration::release_command() {
  // @@protoc_insertion_point(field_release:ProtobufConfiguration.command)
  
  return command_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ProtobufConfiguration::set_allocated_command(std::string* command) {
  if (command != nullptr) {
    
  } else {
    
  }
  command_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), command);
  // @@protoc_insertion_point(field_set_allocated:ProtobufConfiguration.command)
}

// .BNC BNC1 = 13;
inline bool ProtobufConfiguration::has_bnc1() const {
  return this != internal_default_instance() && bnc1_ != nullptr;
}
inline void ProtobufConfiguration::clear_bnc1() {
  if (GetArenaNoVirtual() == nullptr && bnc1_ != nullptr) {
    delete bnc1_;
  }
  bnc1_ = nullptr;
}
inline const ::BNC& ProtobufConfiguration::bnc1() const {
  const ::BNC* p = bnc1_;
  // @@protoc_insertion_point(field_get:ProtobufConfiguration.BNC1)
  return p != nullptr ? *p : *reinterpret_cast<const ::BNC*>(
      &::_BNC_default_instance_);
}
inline ::BNC* ProtobufConfiguration::release_bnc1() {
  // @@protoc_insertion_point(field_release:ProtobufConfiguration.BNC1)
  
  ::BNC* temp = bnc1_;
  bnc1_ = nullptr;
  return temp;
}
inline ::BNC* ProtobufConfiguration::mutable_bnc1() {
  
  if (bnc1_ == nullptr) {
    auto* p = CreateMaybeMessage<::BNC>(GetArenaNoVirtual());
    bnc1_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ProtobufConfiguration.BNC1)
  return bnc1_;
}
inline void ProtobufConfiguration::set_allocated_bnc1(::BNC* bnc1) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete bnc1_;
  }
  if (bnc1) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      bnc1 = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, bnc1, submessage_arena);
    }
    
  } else {
    
  }
  bnc1_ = bnc1;
  // @@protoc_insertion_point(field_set_allocated:ProtobufConfiguration.BNC1)
}

// .BNC BNC2 = 14;
inline bool ProtobufConfiguration::has_bnc2() const {
  return this != internal_default_instance() && bnc2_ != nullptr;
}
inline void ProtobufConfiguration::clear_bnc2() {
  if (GetArenaNoVirtual() == nullptr && bnc2_ != nullptr) {
    delete bnc2_;
  }
  bnc2_ = nullptr;
}
inline const ::BNC& ProtobufConfiguration::bnc2() const {
  const ::BNC* p = bnc2_;
  // @@protoc_insertion_point(field_get:ProtobufConfiguration.BNC2)
  return p != nullptr ? *p : *reinterpret_cast<const ::BNC*>(
      &::_BNC_default_instance_);
}
inline ::BNC* ProtobufConfiguration::release_bnc2() {
  // @@protoc_insertion_point(field_release:ProtobufConfiguration.BNC2)
  
  ::BNC* temp = bnc2_;
  bnc2_ = nullptr;
  return temp;
}
inline ::BNC* ProtobufConfiguration::mutable_bnc2() {
  
  if (bnc2_ == nullptr) {
    auto* p = CreateMaybeMessage<::BNC>(GetArenaNoVirtual());
    bnc2_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ProtobufConfiguration.BNC2)
  return bnc2_;
}
inline void ProtobufConfiguration::set_allocated_bnc2(::BNC* bnc2) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete bnc2_;
  }
  if (bnc2) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      bnc2 = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, bnc2, submessage_arena);
    }
    
  } else {
    
  }
  bnc2_ = bnc2;
  // @@protoc_insertion_point(field_set_allocated:ProtobufConfiguration.BNC2)
}

// .Lemo Lemo = 15;
inline bool ProtobufConfiguration::has_lemo() const {
  return this != internal_default_instance() && lemo_ != nullptr;
}
inline void ProtobufConfiguration::clear_lemo() {
  if (GetArenaNoVirtual() == nullptr && lemo_ != nullptr) {
    delete lemo_;
  }
  lemo_ = nullptr;
}
inline const ::Lemo& ProtobufConfiguration::lemo() const {
  const ::Lemo* p = lemo_;
  // @@protoc_insertion_point(field_get:ProtobufConfiguration.Lemo)
  return p != nullptr ? *p : *reinterpret_cast<const ::Lemo*>(
      &::_Lemo_default_instance_);
}
inline ::Lemo* ProtobufConfiguration::release_lemo() {
  // @@protoc_insertion_point(field_release:ProtobufConfiguration.Lemo)
  
  ::Lemo* temp = lemo_;
  lemo_ = nullptr;
  return temp;
}
inline ::Lemo* ProtobufConfiguration::mutable_lemo() {
  
  if (lemo_ == nullptr) {
    auto* p = CreateMaybeMessage<::Lemo>(GetArenaNoVirtual());
    lemo_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ProtobufConfiguration.Lemo)
  return lemo_;
}
inline void ProtobufConfiguration::set_allocated_lemo(::Lemo* lemo) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete lemo_;
  }
  if (lemo) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      lemo = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, lemo, submessage_arena);
    }
    
  } else {
    
  }
  lemo_ = lemo;
  // @@protoc_insertion_point(field_set_allocated:ProtobufConfiguration.Lemo)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::Gain> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Gain>() {
  return ::Gain_descriptor();
}
template <> struct is_proto_enum< ::Iepe> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Iepe>() {
  return ::Iepe_descriptor();
}
template <> struct is_proto_enum< ::Input> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Input>() {
  return ::Input_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ProtobufConfiguration_2eproto