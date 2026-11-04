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
[Token(Token = "0x2000373")]
[ComVisible(true)]
public class ObjRef : IObjectReference, ISerializable
{
	[Token(Token = "0x4000E87")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IChannelInfo channel_info;

	[Token(Token = "0x4000E88")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string uri;

	[Token(Token = "0x4000E89")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private IRemotingTypeInfo typeInfo;

	[Token(Token = "0x4000E8A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private IEnvoyInfo envoyInfo;

	[Token(Token = "0x4000E8B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private int flags;

	[Token(Token = "0x4000E8C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Type _serverType;

	[Token(Token = "0x4000E8D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static int MarshalledObjectRef;

	[Token(Token = "0x4000E8E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	private static int WellKnowObjectRef;

	[Token(Token = "0x1700033C")]
	internal bool IsReferenceToWellKnow
	{
		[Token(Token = "0x6001CA8")]
		[Address(RVA = "0x19DB310", Offset = "0x19D9910", VA = "0x1819DB310")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700033D")]
	public virtual IChannelInfo ChannelInfo
	{
		[Token(Token = "0x6001CA9")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "6")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700033E")]
	public virtual IEnvoyInfo EnvoyInfo
	{
		[Token(Token = "0x6001CAA")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001CAB")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x1700033F")]
	public virtual IRemotingTypeInfo TypeInfo
	{
		[Token(Token = "0x6001CAC")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001CAD")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x17000340")]
	public virtual string URI
	{
		[Token(Token = "0x6001CAE")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001CAF")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30", Slot = "12")]
		set
		{
		}
	}

	[Token(Token = "0x17000341")]
	internal Type ServerType
	{
		[Token(Token = "0x6001CB3")]
		[Address(RVA = "0x19DB370", Offset = "0x19D9970", VA = "0x1819DB370")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001CA2")]
	[Address(RVA = "0x19DB2F0", Offset = "0x19D98F0", VA = "0x1819DB2F0")]
	public ObjRef()
	{
	}

	[Token(Token = "0x6001CA3")]
	[Address(RVA = "0x19DB2A0", Offset = "0x19D98A0", VA = "0x1819DB2A0")]
	internal ObjRef(string uri, IChannelInfo cinfo)
	{
	}

	[Token(Token = "0x6001CA4")]
	[Address(RVA = "0x19DA720", Offset = "0x19D8D20", VA = "0x1819DA720")]
	internal ObjRef DeserializeInTheCurrentDomain(int domainId, byte[] tInfo)
	{
		return null;
	}

	[Token(Token = "0x6001CA5")]
	[Address(RVA = "0x19DAAC0", Offset = "0x19D90C0", VA = "0x1819DAAC0")]
	internal byte[] SerializeType()
	{
		return null;
	}

	[Token(Token = "0x6001CA6")]
	[Address(RVA = "0x19DAC50", Offset = "0x19D9250", VA = "0x1819DAC50")]
	internal ObjRef(Type type, string url, object remoteChannelData)
	{
	}

	[Token(Token = "0x6001CA7")]
	[Address(RVA = "0x19DAD50", Offset = "0x19D9350", VA = "0x1819DAD50")]
	protected ObjRef(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001CB0")]
	[Address(RVA = "0x19DA850", Offset = "0x19D8E50", VA = "0x1819DA850", Slot = "13")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001CB1")]
	[Address(RVA = "0x19DA9F0", Offset = "0x19D8FF0", VA = "0x1819DA9F0", Slot = "14")]
	public virtual object GetRealObject(StreamingContext context)
	{
		return null;
	}

	[Token(Token = "0x6001CB2")]
	[Address(RVA = "0x19DAB50", Offset = "0x19D9150", VA = "0x1819DAB50")]
	internal void UpdateChannelInfo()
	{
	}
}
