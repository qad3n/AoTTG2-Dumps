// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.BinaryMethodReturn
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x200040A")]
internal sealed class BinaryMethodReturn
{
	[Token(Token = "0x40010C4")]
	[FieldOffset(Offset = "0x10")]
	private object returnValue;

	[Token(Token = "0x40010C5")]
	[FieldOffset(Offset = "0x18")]
	private object[] args;

	[Token(Token = "0x40010C6")]
	[FieldOffset(Offset = "0x20")]
	private object callContext;

	[Token(Token = "0x40010C7")]
	[FieldOffset(Offset = "0x28")]
	private Type[] argTypes;

	[Token(Token = "0x40010C8")]
	[FieldOffset(Offset = "0x30")]
	private bool bArgsPrimitive;

	[Token(Token = "0x40010C9")]
	[FieldOffset(Offset = "0x34")]
	private System.Runtime.Serialization.Formatters.Binary.MessageEnum messageEnum;

	[Token(Token = "0x40010CA")]
	[FieldOffset(Offset = "0x38")]
	private Type returnType;

	[Token(Token = "0x40010CB")]
	[FieldOffset(Offset = "0x0")]
	private static object instanceOfVoid;

	[Token(Token = "0x6002051")]
	[Address(RVA = "0x3BA36B0", Offset = "0x3BA36B0", VA = "0x3BA36B0")]
	static BinaryMethodReturn()
	{
	}

	[Token(Token = "0x6002052")]
	[Address(RVA = "0x3BA3760", Offset = "0x3BA3760", VA = "0x3BA3760")]
	internal BinaryMethodReturn()
	{
	}

	[Token(Token = "0x6002053")]
	[Address(RVA = "0x3BA3770", Offset = "0x3BA3770", VA = "0x3BA3770", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x6002054")]
	[Address(RVA = "0x3BA3930", Offset = "0x3BA3930", VA = "0x3BA3930")]
	public void Dump()
	{
	}
}
