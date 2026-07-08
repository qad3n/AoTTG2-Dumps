using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x20003DC")]
internal sealed class SurrogateForCyclicalReference : ISerializationSurrogate
{
	[Token(Token = "0x4000FE6")]
	[FieldOffset(Offset = "0x10")]
	private ISerializationSurrogate innerSurrogate;

	[Token(Token = "0x6001F7B")]
	[Address(RVA = "0x4EB2500", Offset = "0x4EB2500", VA = "0x4EB2500", Slot = "4")]
	public void GetObjectData(object obj, SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001F7C")]
	[Address(RVA = "0x4EB25D0", Offset = "0x4EB25D0", VA = "0x4EB25D0", Slot = "5")]
	public object SetObjectData(object obj, SerializationInfo info, StreamingContext context, ISurrogateSelector selector)
	{
		return null;
	}
}
