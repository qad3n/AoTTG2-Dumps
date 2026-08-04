// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.BinaryMethodCall
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000409")]
internal sealed class BinaryMethodCall
{
	[Token(Token = "0x40010BD")]
	[FieldOffset(Offset = "0x10")]
	private string methodName;

	[Token(Token = "0x40010BE")]
	[FieldOffset(Offset = "0x18")]
	private string typeName;

	[Token(Token = "0x40010BF")]
	[FieldOffset(Offset = "0x20")]
	private object[] args;

	[Token(Token = "0x40010C0")]
	[FieldOffset(Offset = "0x28")]
	private object callContext;

	[Token(Token = "0x40010C1")]
	[FieldOffset(Offset = "0x30")]
	private Type[] argTypes;

	[Token(Token = "0x40010C2")]
	[FieldOffset(Offset = "0x38")]
	private bool bArgsPrimitive;

	[Token(Token = "0x40010C3")]
	[FieldOffset(Offset = "0x3C")]
	private System.Runtime.Serialization.Formatters.Binary.MessageEnum messageEnum;

	[Token(Token = "0x600204E")]
	[Address(RVA = "0x3BA33E0", Offset = "0x3BA33E0", VA = "0x3BA33E0")]
	internal void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x600204F")]
	[Address(RVA = "0x3BA3690", Offset = "0x3BA3690", VA = "0x3BA3690")]
	internal void Dump()
	{
	}

	[Token(Token = "0x6002050")]
	[Address(RVA = "0x3BA36A0", Offset = "0x3BA36A0", VA = "0x3BA36A0")]
	public BinaryMethodCall()
	{
	}
}
