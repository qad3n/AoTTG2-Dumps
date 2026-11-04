// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.BinaryMethodReturn
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000439")]
internal sealed class BinaryMethodReturn
{
	[Token(Token = "0x40010C6")]
	[FieldOffset(Offset = "0x10")]
	private object returnValue;

	[Token(Token = "0x40010C7")]
	[FieldOffset(Offset = "0x18")]
	private object[] args;

	[Token(Token = "0x40010C8")]
	[FieldOffset(Offset = "0x20")]
	private object callContext;

	[Token(Token = "0x40010C9")]
	[FieldOffset(Offset = "0x28")]
	private Type[] argTypes;

	[Token(Token = "0x40010CA")]
	[FieldOffset(Offset = "0x30")]
	private bool bArgsPrimitive;

	[Token(Token = "0x40010CB")]
	[FieldOffset(Offset = "0x34")]
	private System.Runtime.Serialization.Formatters.Binary.MessageEnum messageEnum;

	[Token(Token = "0x40010CC")]
	[FieldOffset(Offset = "0x38")]
	private Type returnType;

	[Token(Token = "0x40010CD")]
	[FieldOffset(Offset = "0x0")]
	private static object instanceOfVoid;

	[Token(Token = "0x60020C0")]
	[Address(RVA = "0x1A0E3B0", Offset = "0x1A0C9B0", VA = "0x181A0E3B0")]
	static BinaryMethodReturn()
	{
	}

	[Token(Token = "0x60020C1")]
	[Address(RVA = "0x1A0E470", Offset = "0x1A0CA70", VA = "0x181A0E470")]
	internal BinaryMethodReturn()
	{
	}

	[Token(Token = "0x60020C2")]
	[Address(RVA = "0x1A0DFB0", Offset = "0x1A0C5B0", VA = "0x181A0DFB0", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x60020C3")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public void Dump()
	{
	}
}
