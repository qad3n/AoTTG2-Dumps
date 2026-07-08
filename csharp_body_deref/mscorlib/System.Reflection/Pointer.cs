using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x20004EE")]
[CLSCompliant(false)]
public sealed class Pointer : ISerializable
{
	[Token(Token = "0x4001452")]
	[FieldOffset(Offset = "0x10")]
	private unsafe readonly void* _ptr;

	[Token(Token = "0x4001453")]
	[FieldOffset(Offset = "0x18")]
	private readonly Type _ptrType;

	[Token(Token = "0x600248F")]
	[Address(RVA = "0x4EEE9C0", Offset = "0x4EEE9C0", VA = "0x4EEE9C0")]
	private unsafe Pointer(void* ptr, Type ptrType)
	{
	}

	[Token(Token = "0x6002490")]
	[Address(RVA = "0x4EEEA00", Offset = "0x4EEEA00", VA = "0x4EEEA00")]
	public unsafe static object Box(void* ptr, Type type)
	{
		return null;
	}

	[Token(Token = "0x6002491")]
	[Address(RVA = "0x4EEEB70", Offset = "0x4EEEB70", VA = "0x4EEEB70", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
