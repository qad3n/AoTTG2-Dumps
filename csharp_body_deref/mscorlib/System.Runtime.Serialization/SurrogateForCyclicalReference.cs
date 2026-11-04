// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.SurrogateForCyclicalReference
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x200040B")]
internal sealed class SurrogateForCyclicalReference : ISerializationSurrogate
{
	[Token(Token = "0x4000FEC")]
	[FieldOffset(Offset = "0x10")]
	private ISerializationSurrogate innerSurrogate;

	[Token(Token = "0x6001FEA")]
	[Address(RVA = "0x1A22220", Offset = "0x1A20820", VA = "0x181A22220", Slot = "4")]
	public void GetObjectData(object obj, SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001FEB")]
	[Address(RVA = "0x1A222F0", Offset = "0x1A208F0", VA = "0x181A222F0", Slot = "5")]
	public object SetObjectData(object obj, SerializationInfo info, StreamingContext context, ISurrogateSelector selector)
	{
		return null;
	}
}
