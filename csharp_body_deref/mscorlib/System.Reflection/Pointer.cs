// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.Pointer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3BD44E0", Offset = "0x3BD44E0", VA = "0x3BD44E0")]
	private unsafe Pointer(void* ptr, Type ptrType)
	{
	}

	[Token(Token = "0x6002490")]
	[Address(RVA = "0x3BD4520", Offset = "0x3BD4520", VA = "0x3BD4520")]
	public unsafe static object Box(void* ptr, Type type)
	{
		return null;
	}

	[Token(Token = "0x6002491")]
	[Address(RVA = "0x3BD4690", Offset = "0x3BD4690", VA = "0x3BD4690", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
