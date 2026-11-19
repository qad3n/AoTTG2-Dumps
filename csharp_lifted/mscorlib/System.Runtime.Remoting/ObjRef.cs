// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.ObjRef
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.ConstrainedExecution;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Serializable]
[Token(Token = "0x200034C")]
[ComVisible(true)]
public class ObjRef : IObjectReference, ISerializable
{
	[Token(Token = "0x4000DE7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IChannelInfo channel_info;

	[Token(Token = "0x4000DE8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string uri;

	[Token(Token = "0x4000DE9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private IRemotingTypeInfo typeInfo;

	[Token(Token = "0x4000DEA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private IEnvoyInfo envoyInfo;

	[Token(Token = "0x4000DEB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private int flags;

	[Token(Token = "0x4000DEC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Type _serverType;

	[Token(Token = "0x4000DED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static int MarshalledObjectRef;

	[Token(Token = "0x4000DEE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	private static int WellKnowObjectRef;

	[Token(Token = "0x1700033B")]
	internal bool IsReferenceToWellKnow
	{
		[Token(Token = "0x6001C7E")]
		[Address(RVA = "0x536A8C0", Offset = "0x53698C0", VA = "0x536A8C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700033C")]
	public virtual IChannelInfo ChannelInfo
	{
		[Token(Token = "0x6001C7F")]
		[Address(RVA = "0x536A920", Offset = "0x5369920", VA = "0x536A920", Slot = "6")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700033D")]
	public virtual IEnvoyInfo EnvoyInfo
	{
		[Token(Token = "0x6001C80")]
		[Address(RVA = "0x536A930", Offset = "0x5369930", VA = "0x536A930", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001C81")]
		[Address(RVA = "0x536A940", Offset = "0x5369940", VA = "0x536A940", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x1700033E")]
	public virtual IRemotingTypeInfo TypeInfo
	{
		[Token(Token = "0x6001C82")]
		[Address(RVA = "0x536A950", Offset = "0x5369950", VA = "0x536A950", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001C83")]
		[Address(RVA = "0x536A960", Offset = "0x5369960", VA = "0x536A960", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x1700033F")]
	public virtual string URI
	{
		[Token(Token = "0x6001C84")]
		[Address(RVA = "0x536A970", Offset = "0x5369970", VA = "0x536A970", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001C85")]
		[Address(RVA = "0x536A980", Offset = "0x5369980", VA = "0x536A980", Slot = "12")]
		set
		{
		}
	}

	[Token(Token = "0x17000340")]
	internal Type ServerType
	{
		[Token(Token = "0x6001C89")]
		[Address(RVA = "0x536AC80", Offset = "0x5369C80", VA = "0x536AC80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001C78")]
	[Address(RVA = "0x5369A70", Offset = "0x5368A70", VA = "0x5369A70")]
	public ObjRef()
	{
	}

	[Token(Token = "0x6001C79")]
	[Address(RVA = "0x5369B40", Offset = "0x5368B40", VA = "0x5369B40")]
	internal ObjRef(string uri, IChannelInfo cinfo)
	{
	}

	[Token(Token = "0x6001C7A")]
	[Address(RVA = "0x5369B80", Offset = "0x5368B80", VA = "0x5369B80")]
	internal ObjRef DeserializeInTheCurrentDomain(int domainId, byte[] tInfo)
	{
		return null;
	}

	[Token(Token = "0x6001C7B")]
	[Address(RVA = "0x5369CC0", Offset = "0x5368CC0", VA = "0x5369CC0")]
	internal byte[] SerializeType()
	{
		return null;
	}

	[Token(Token = "0x6001C7C")]
	[Address(RVA = "0x5369D40", Offset = "0x5368D40", VA = "0x5369D40")]
	internal ObjRef(Type type, string url, object remoteChannelData)
	{
	}

	[Token(Token = "0x6001C7D")]
	[Address(RVA = "0x536A2C0", Offset = "0x53692C0", VA = "0x536A2C0")]
	protected ObjRef(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001C86")]
	[Address(RVA = "0x536A990", Offset = "0x5369990", VA = "0x536A990", Slot = "13")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001C87")]
	[Address(RVA = "0x536AB20", Offset = "0x5369B20", VA = "0x536AB20", Slot = "14")]
	public virtual object GetRealObject(StreamingContext context)
	{
		return null;
	}

	[Token(Token = "0x6001C88")]
	[Address(RVA = "0x5369A90", Offset = "0x5368A90", VA = "0x5369A90")]
	internal void UpdateChannelInfo()
	{
	}
}
