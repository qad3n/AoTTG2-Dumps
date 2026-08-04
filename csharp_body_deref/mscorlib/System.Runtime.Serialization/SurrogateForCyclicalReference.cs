// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.SurrogateForCyclicalReference
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x20003DC")]
internal sealed class SurrogateForCyclicalReference : ISerializationSurrogate
{
	[Token(Token = "0x4000FE6")]
	[FieldOffset(Offset = "0x10")]
	private ISerializationSurrogate innerSurrogate;

	[Token(Token = "0x6001F7B")]
	[Address(RVA = "0x3B98020", Offset = "0x3B98020", VA = "0x3B98020", Slot = "4")]
	public void GetObjectData(object obj, SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001F7C")]
	[Address(RVA = "0x3B980F0", Offset = "0x3B980F0", VA = "0x3B980F0", Slot = "5")]
	public object SetObjectData(object obj, SerializationInfo info, StreamingContext context, ISurrogateSelector selector)
	{
		return null;
	}
}
