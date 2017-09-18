// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test.proto
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace NetProto {

  /// <summary>Holder for reflection information generated from test.proto</summary>
  public static partial class TestReflection {

    #region Descriptor
    /// <summary>File descriptor for test.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static TestReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "Cgp0ZXN0LnByb3RvEghOZXRQcm90byI3CgRQb25nEg0KBW1zZ0lEGAEgASgF",
            "Eg4KBnVzZXJpZBgCIAEoBRIQCgh1c2VybmFtZRgDIAEoCUID+AEBYgZwcm90",
            "bzM="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { },
          new pbr::GeneratedClrTypeInfo(null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::NetProto.Pong), global::NetProto.Pong.Parser, new[]{ "MsgID", "Userid", "Username" }, null, null, null)
          }));
    }
    #endregion

  }
  #region Messages
  public sealed partial class Pong : pb::IMessage<Pong> {
    private static readonly pb::MessageParser<Pong> _parser = new pb::MessageParser<Pong>(() => new Pong());
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<Pong> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::NetProto.TestReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public Pong() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public Pong(Pong other) : this() {
      msgID_ = other.msgID_;
      userid_ = other.userid_;
      username_ = other.username_;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public Pong Clone() {
      return new Pong(this);
    }

    /// <summary>Field number for the "msgID" field.</summary>
    public const int MsgIDFieldNumber = 1;
    private int msgID_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int MsgID {
      get { return msgID_; }
      set {
        msgID_ = value;
      }
    }

    /// <summary>Field number for the "userid" field.</summary>
    public const int UseridFieldNumber = 2;
    private int userid_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int Userid {
      get { return userid_; }
      set {
        userid_ = value;
      }
    }

    /// <summary>Field number for the "username" field.</summary>
    public const int UsernameFieldNumber = 3;
    private string username_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string Username {
      get { return username_; }
      set {
        username_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as Pong);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(Pong other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (MsgID != other.MsgID) return false;
      if (Userid != other.Userid) return false;
      if (Username != other.Username) return false;
      return true;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      if (MsgID != 0) hash ^= MsgID.GetHashCode();
      if (Userid != 0) hash ^= Userid.GetHashCode();
      if (Username.Length != 0) hash ^= Username.GetHashCode();
      return hash;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override string ToString() {
      return pb::JsonFormatter.ToDiagnosticString(this);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void WriteTo(pb::CodedOutputStream output) {
      if (MsgID != 0) {
        output.WriteRawTag(8);
        output.WriteInt32(MsgID);
      }
      if (Userid != 0) {
        output.WriteRawTag(16);
        output.WriteInt32(Userid);
      }
      if (Username.Length != 0) {
        output.WriteRawTag(26);
        output.WriteString(Username);
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      if (MsgID != 0) {
        size += 1 + pb::CodedOutputStream.ComputeInt32Size(MsgID);
      }
      if (Userid != 0) {
        size += 1 + pb::CodedOutputStream.ComputeInt32Size(Userid);
      }
      if (Username.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(Username);
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(Pong other) {
      if (other == null) {
        return;
      }
      if (other.MsgID != 0) {
        MsgID = other.MsgID;
      }
      if (other.Userid != 0) {
        Userid = other.Userid;
      }
      if (other.Username.Length != 0) {
        Username = other.Username;
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(pb::CodedInputStream input) {
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            input.SkipLastField();
            break;
          case 8: {
            MsgID = input.ReadInt32();
            break;
          }
          case 16: {
            Userid = input.ReadInt32();
            break;
          }
          case 26: {
            Username = input.ReadString();
            break;
          }
        }
      }
    }

  }

  #endregion

}

#endregion Designer generated code
