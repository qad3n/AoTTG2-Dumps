using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x20004E9")]
public sealed class Missing : ISerializable
{
	[Token(Token = "0x400143A")]
	[FieldOffset(Offset = "0x0")]
	public static readonly Missing Value;

	[Token(Token = "0x600246A")]
	[Address(RVA = "0x4EEDAF0", Offset = "0x4EEDAF0", VA = "0x4EEDAF0")]
	private Missing()
	{
	}

	[Token(Token = "0x600246B")]
	[Address(RVA = "0x4EEDB00", Offset = "0x4EEDB00", VA = "0x4EEDB00", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
