# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: ProtoId.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf.internal import enum_type_wrapper
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='ProtoId.proto',
  package='NetProto',
  syntax='proto3',
  serialized_pb=_b('\n\rProtoId.proto\x12\x08NetProto*\x80\x02\n\x07ProtoId\x12\x0b\n\x07PID_Min\x10\x00\x12\x0c\n\x08PID_Ping\x10\x01\x12\x0c\n\x08PID_Pong\x10\x02\x12\x15\n\x11PID_QueryFreeHero\x10\x64\x12\x13\n\x0fPID_RspFreeHero\x10\x65\x12\x15\n\x11PID_SelectHeroReq\x10\x66\x12\x15\n\x11PID_SelectHeroRsp\x10g\x12\x19\n\x15PID_LoadSceneComplete\x10h\x12\x12\n\x0ePID_LeaveScene\x10i\x12\x18\n\x14PID_PullAllSceneInfo\x10j\x12\x1b\n\x17PID_PullAllSceneInfoRsp\x10k\x12\x0c\n\x07PID_Max\x10\x80(B\x03\xf8\x01\x01\x62\x06proto3')
)

_PROTOID = _descriptor.EnumDescriptor(
  name='ProtoId',
  full_name='NetProto.ProtoId',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='PID_Min', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PID_Ping', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PID_Pong', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PID_QueryFreeHero', index=3, number=100,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PID_RspFreeHero', index=4, number=101,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PID_SelectHeroReq', index=5, number=102,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PID_SelectHeroRsp', index=6, number=103,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PID_LoadSceneComplete', index=7, number=104,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PID_LeaveScene', index=8, number=105,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PID_PullAllSceneInfo', index=9, number=106,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PID_PullAllSceneInfoRsp', index=10, number=107,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PID_Max', index=11, number=5120,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=28,
  serialized_end=284,
)
_sym_db.RegisterEnumDescriptor(_PROTOID)

ProtoId = enum_type_wrapper.EnumTypeWrapper(_PROTOID)
PID_Min = 0
PID_Ping = 1
PID_Pong = 2
PID_QueryFreeHero = 100
PID_RspFreeHero = 101
PID_SelectHeroReq = 102
PID_SelectHeroRsp = 103
PID_LoadSceneComplete = 104
PID_LeaveScene = 105
PID_PullAllSceneInfo = 106
PID_PullAllSceneInfoRsp = 107
PID_Max = 5120


DESCRIPTOR.enum_types_by_name['ProtoId'] = _PROTOID
_sym_db.RegisterFileDescriptor(DESCRIPTOR)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\370\001\001'))
# @@protoc_insertion_point(module_scope)
