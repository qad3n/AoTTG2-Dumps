using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003BC")]
internal class RemotingSurrogate : ISerializationSurrogate
{
	[Token(Token = "0x6001EEE")]
	[Address(RVA = "0x4EAC450", Offset = "0x4EAC450", VA = "0x4EAC450", Slot = "6")]
	public virtual void GetObjectData(object obj, SerializationInfo si, StreamingContext sc)
	{
	}

	[Token(Token = "0x6001EEF")]
	[Address(RVA = "0x4EAC580", Offset = "0x4EAC580", VA = "0x4EAC580", Slot = "7")]
	public virtual object SetObjectData(object obj, SerializationInfo si, StreamingContext sc, ISurrogateSelector selector)
	{
		return null;
	}

	[Token(Token = "0x6001EF0")]
	[Address(RVA = "0x4EAC5C0", Offset = "0x4EAC5C0", VA = "0x4EAC5C0")]
	public RemotingSurrogate()
	{
	}
}
