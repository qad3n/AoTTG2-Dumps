// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.BinaryMethodCall
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000438")]
internal sealed class BinaryMethodCall
{
	[Token(Token = "0x40010BF")]
	[FieldOffset(Offset = "0x10")]
	private string methodName;

	[Token(Token = "0x40010C0")]
	[FieldOffset(Offset = "0x18")]
	private string typeName;

	[Token(Token = "0x40010C1")]
	[FieldOffset(Offset = "0x20")]
	private object[] args;

	[Token(Token = "0x40010C2")]
	[FieldOffset(Offset = "0x28")]
	private object callContext;

	[Token(Token = "0x40010C3")]
	[FieldOffset(Offset = "0x30")]
	private Type[] argTypes;

	[Token(Token = "0x40010C4")]
	[FieldOffset(Offset = "0x38")]
	private bool bArgsPrimitive;

	[Token(Token = "0x40010C5")]
	[FieldOffset(Offset = "0x3C")]
	private System.Runtime.Serialization.Formatters.Binary.MessageEnum messageEnum;

	[Token(Token = "0x60020BD")]
	[Address(RVA = "0x1A0DC30", Offset = "0x1A0C230", VA = "0x181A0DC30")]
	internal void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x60020BE")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	internal void Dump()
	{
	}

	[Token(Token = "0x60020BF")]
	[Address(RVA = "0x1A0DFA0", Offset = "0x1A0C5A0", VA = "0x181A0DFA0")]
	public BinaryMethodCall()
	{
	}
}
