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

[Token(Token = "0x20004F7")]
[CLSCompliant(false)]
public sealed class Pointer : ISerializable
{
	[Token(Token = "0x40013B2")]
	[FieldOffset(Offset = "0x10")]
	private unsafe readonly void* _ptr;

	[Token(Token = "0x40013B3")]
	[FieldOffset(Offset = "0x18")]
	private readonly Type _ptrType;

	[Token(Token = "0x60024DF")]
	[Address(RVA = "0x53DB6B0", Offset = "0x53DA6B0", VA = "0x53DB6B0")]
	private unsafe Pointer(void* ptr, Type ptrType)
	{
	}

	[Token(Token = "0x60024E0")]
	[Address(RVA = "0x53DB6F0", Offset = "0x53DA6F0", VA = "0x53DB6F0")]
	public unsafe static object Box(void* ptr, Type type)
	{
		return null;
	}

	[Token(Token = "0x60024E1")]
	[Address(RVA = "0x53DB860", Offset = "0x53DA860", VA = "0x53DB860", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
