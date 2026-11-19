// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.SurrogateForCyclicalReference
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x20003E4")]
internal sealed class SurrogateForCyclicalReference : ISerializationSurrogate
{
	[Token(Token = "0x4000F4C")]
	[FieldOffset(Offset = "0x10")]
	private ISerializationSurrogate innerSurrogate;

	[Token(Token = "0x6001FC0")]
	[Address(RVA = "0x539F770", Offset = "0x539E770", VA = "0x539F770", Slot = "4")]
	public void GetObjectData(object obj, SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001FC1")]
	[Address(RVA = "0x539F840", Offset = "0x539E840", VA = "0x539F840", Slot = "5")]
	public object SetObjectData(object obj, SerializationInfo info, StreamingContext context, ISurrogateSelector selector)
	{
		return null;
	}
}
