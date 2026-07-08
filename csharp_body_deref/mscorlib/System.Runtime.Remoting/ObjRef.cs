using System.Runtime.ConstrainedExecution;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Serializable]
[Token(Token = "0x2000344")]
[ComVisible(true)]
public class ObjRef : IObjectReference, ISerializable
{
	[Token(Token = "0x4000E7A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IChannelInfo channel_info;

	[Token(Token = "0x4000E7B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string uri;

	[Token(Token = "0x4000E7C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private IRemotingTypeInfo typeInfo;

	[Token(Token = "0x4000E7D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private IEnvoyInfo envoyInfo;

	[Token(Token = "0x4000E7E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private int flags;

	[Token(Token = "0x4000E7F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Type _serverType;

	[Token(Token = "0x4000E80")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static int MarshalledObjectRef;

	[Token(Token = "0x4000E81")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	private static int WellKnowObjectRef;

	[Token(Token = "0x1700033A")]
	internal bool IsReferenceToWellKnow
	{
		[Token(Token = "0x6001C39")]
		[Address(RVA = "0x4E7B630", Offset = "0x4E7B630", VA = "0x4E7B630")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700033B")]
	public virtual IChannelInfo ChannelInfo
	{
		[Token(Token = "0x6001C3A")]
		[Address(RVA = "0x4E7B690", Offset = "0x4E7B690", VA = "0x4E7B690", Slot = "6")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700033C")]
	public virtual IEnvoyInfo EnvoyInfo
	{
		[Token(Token = "0x6001C3B")]
		[Address(RVA = "0x4E7B6A0", Offset = "0x4E7B6A0", VA = "0x4E7B6A0", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001C3C")]
		[Address(RVA = "0x4E7B6B0", Offset = "0x4E7B6B0", VA = "0x4E7B6B0", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x1700033D")]
	public virtual IRemotingTypeInfo TypeInfo
	{
		[Token(Token = "0x6001C3D")]
		[Address(RVA = "0x4E7B6C0", Offset = "0x4E7B6C0", VA = "0x4E7B6C0", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001C3E")]
		[Address(RVA = "0x4E7B6D0", Offset = "0x4E7B6D0", VA = "0x4E7B6D0", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x1700033E")]
	public virtual string URI
	{
		[Token(Token = "0x6001C3F")]
		[Address(RVA = "0x4E7B6E0", Offset = "0x4E7B6E0", VA = "0x4E7B6E0", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001C40")]
		[Address(RVA = "0x4E7B6F0", Offset = "0x4E7B6F0", VA = "0x4E7B6F0", Slot = "12")]
		set
		{
		}
	}

	[Token(Token = "0x1700033F")]
	internal Type ServerType
	{
		[Token(Token = "0x6001C44")]
		[Address(RVA = "0x4E7B9F0", Offset = "0x4E7B9F0", VA = "0x4E7B9F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001C33")]
	[Address(RVA = "0x4E7A7D0", Offset = "0x4E7A7D0", VA = "0x4E7A7D0")]
	public ObjRef()
	{
	}

	[Token(Token = "0x6001C34")]
	[Address(RVA = "0x4E7A8A0", Offset = "0x4E7A8A0", VA = "0x4E7A8A0")]
	internal ObjRef(string uri, IChannelInfo cinfo)
	{
	}

	[Token(Token = "0x6001C35")]
	[Address(RVA = "0x4E7A8E0", Offset = "0x4E7A8E0", VA = "0x4E7A8E0")]
	internal ObjRef DeserializeInTheCurrentDomain(int domainId, byte[] tInfo)
	{
		return null;
	}

	[Token(Token = "0x6001C36")]
	[Address(RVA = "0x4E7AA30", Offset = "0x4E7AA30", VA = "0x4E7AA30")]
	internal byte[] SerializeType()
	{
		return null;
	}

	[Token(Token = "0x6001C37")]
	[Address(RVA = "0x4E7AAB0", Offset = "0x4E7AAB0", VA = "0x4E7AAB0")]
	internal ObjRef(Type type, string url, object remoteChannelData)
	{
	}

	[Token(Token = "0x6001C38")]
	[Address(RVA = "0x4E7B030", Offset = "0x4E7B030", VA = "0x4E7B030")]
	protected ObjRef(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001C41")]
	[Address(RVA = "0x4E7B700", Offset = "0x4E7B700", VA = "0x4E7B700", Slot = "13")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001C42")]
	[Address(RVA = "0x4E7B890", Offset = "0x4E7B890", VA = "0x4E7B890", Slot = "14")]
	public virtual object GetRealObject(StreamingContext context)
	{
		return null;
	}

	[Token(Token = "0x6001C43")]
	[Address(RVA = "0x4E7A7F0", Offset = "0x4E7A7F0", VA = "0x4E7A7F0")]
	internal void UpdateChannelInfo()
	{
	}
}
