// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.ObjRefSurrogate
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003EC")]
internal class ObjRefSurrogate : ISerializationSurrogate
{
	[Token(Token = "0x6001F60")]
	[Address(RVA = "0x1A04490", Offset = "0x1A02A90", VA = "0x181A04490", Slot = "6")]
	public virtual void GetObjectData(object obj, SerializationInfo si, StreamingContext sc)
	{
	}

	[Token(Token = "0x6001F61")]
	[Address(RVA = "0x1A045A0", Offset = "0x1A02BA0", VA = "0x181A045A0", Slot = "7")]
	public virtual object SetObjectData(object obj, SerializationInfo si, StreamingContext sc, ISurrogateSelector selector)
	{
		return null;
	}

	[Token(Token = "0x6001F62")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public ObjRefSurrogate()
	{
	}
}
