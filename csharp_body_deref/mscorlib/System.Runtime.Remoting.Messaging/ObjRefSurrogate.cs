using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003BD")]
internal class ObjRefSurrogate : ISerializationSurrogate
{
	[Token(Token = "0x6001EF1")]
	[Address(RVA = "0x4EAC5D0", Offset = "0x4EAC5D0", VA = "0x4EAC5D0", Slot = "6")]
	public virtual void GetObjectData(object obj, SerializationInfo si, StreamingContext sc)
	{
	}

	[Token(Token = "0x6001EF2")]
	[Address(RVA = "0x4EAC6C0", Offset = "0x4EAC6C0", VA = "0x4EAC6C0", Slot = "7")]
	public virtual object SetObjectData(object obj, SerializationInfo si, StreamingContext sc, ISurrogateSelector selector)
	{
		return null;
	}

	[Token(Token = "0x6001EF3")]
	[Address(RVA = "0x4EAC710", Offset = "0x4EAC710", VA = "0x4EAC710")]
	public ObjRefSurrogate()
	{
	}
}
