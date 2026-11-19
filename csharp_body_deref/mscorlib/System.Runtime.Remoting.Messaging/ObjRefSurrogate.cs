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

[Token(Token = "0x20003C5")]
internal class ObjRefSurrogate : ISerializationSurrogate
{
	[Token(Token = "0x6001F36")]
	[Address(RVA = "0x5399B40", Offset = "0x5398B40", VA = "0x5399B40", Slot = "6")]
	public virtual void GetObjectData(object obj, SerializationInfo si, StreamingContext sc)
	{
	}

	[Token(Token = "0x6001F37")]
	[Address(RVA = "0x5399C30", Offset = "0x5398C30", VA = "0x5399C30", Slot = "7")]
	public virtual object SetObjectData(object obj, SerializationInfo si, StreamingContext sc, ISurrogateSelector selector)
	{
		return null;
	}

	[Token(Token = "0x6001F38")]
	[Address(RVA = "0x5399C80", Offset = "0x5398C80", VA = "0x5399C80")]
	public ObjRefSurrogate()
	{
	}
}
