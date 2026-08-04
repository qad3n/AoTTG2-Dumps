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

[Token(Token = "0x20003BD")]
internal class ObjRefSurrogate : ISerializationSurrogate
{
	[Token(Token = "0x6001EF1")]
	[Address(RVA = "0x3B920F0", Offset = "0x3B920F0", VA = "0x3B920F0", Slot = "6")]
	public virtual void GetObjectData(object obj, SerializationInfo si, StreamingContext sc)
	{
	}

	[Token(Token = "0x6001EF2")]
	[Address(RVA = "0x3B921E0", Offset = "0x3B921E0", VA = "0x3B921E0", Slot = "7")]
	public virtual object SetObjectData(object obj, SerializationInfo si, StreamingContext sc, ISurrogateSelector selector)
	{
		return null;
	}

	[Token(Token = "0x6001EF3")]
	[Address(RVA = "0x3B92230", Offset = "0x3B92230", VA = "0x3B92230")]
	public ObjRefSurrogate()
	{
	}
}
