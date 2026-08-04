// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.RemotingSurrogate
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003BC")]
internal class RemotingSurrogate : ISerializationSurrogate
{
	[Token(Token = "0x6001EEE")]
	[Address(RVA = "0x3B91F70", Offset = "0x3B91F70", VA = "0x3B91F70", Slot = "6")]
	public virtual void GetObjectData(object obj, SerializationInfo si, StreamingContext sc)
	{
	}

	[Token(Token = "0x6001EEF")]
	[Address(RVA = "0x3B920A0", Offset = "0x3B920A0", VA = "0x3B920A0", Slot = "7")]
	public virtual object SetObjectData(object obj, SerializationInfo si, StreamingContext sc, ISurrogateSelector selector)
	{
		return null;
	}

	[Token(Token = "0x6001EF0")]
	[Address(RVA = "0x3B920E0", Offset = "0x3B920E0", VA = "0x3B920E0")]
	public RemotingSurrogate()
	{
	}
}
