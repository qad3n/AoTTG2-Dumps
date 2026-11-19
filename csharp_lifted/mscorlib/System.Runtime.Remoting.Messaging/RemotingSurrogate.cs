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

[Token(Token = "0x20003C4")]
internal class RemotingSurrogate : ISerializationSurrogate
{
	[Token(Token = "0x6001F33")]
	[Address(RVA = "0x53999D0", Offset = "0x53989D0", VA = "0x53999D0", Slot = "6")]
	public virtual void GetObjectData(object obj, SerializationInfo si, StreamingContext sc)
	{
	}

	[Token(Token = "0x6001F34")]
	[Address(RVA = "0x5399AF0", Offset = "0x5398AF0", VA = "0x5399AF0", Slot = "7")]
	public virtual object SetObjectData(object obj, SerializationInfo si, StreamingContext sc, ISurrogateSelector selector)
	{
		return null;
	}

	[Token(Token = "0x6001F35")]
	[Address(RVA = "0x5399B30", Offset = "0x5398B30", VA = "0x5399B30")]
	public RemotingSurrogate()
	{
	}
}
