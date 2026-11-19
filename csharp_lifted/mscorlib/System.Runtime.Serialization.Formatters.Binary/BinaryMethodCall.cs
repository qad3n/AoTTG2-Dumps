// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.BinaryMethodCall
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000411")]
internal sealed class BinaryMethodCall
{
	[Token(Token = "0x400101F")]
	[FieldOffset(Offset = "0x10")]
	private string methodName;

	[Token(Token = "0x4001020")]
	[FieldOffset(Offset = "0x18")]
	private string typeName;

	[Token(Token = "0x4001021")]
	[FieldOffset(Offset = "0x20")]
	private object[] args;

	[Token(Token = "0x4001022")]
	[FieldOffset(Offset = "0x28")]
	private object callContext;

	[Token(Token = "0x4001023")]
	[FieldOffset(Offset = "0x30")]
	private Type[] argTypes;

	[Token(Token = "0x4001024")]
	[FieldOffset(Offset = "0x38")]
	private bool bArgsPrimitive;

	[Token(Token = "0x4001025")]
	[FieldOffset(Offset = "0x3C")]
	private System.Runtime.Serialization.Formatters.Binary.MessageEnum messageEnum;

	[Token(Token = "0x6002093")]
	[Address(RVA = "0x53AA7E0", Offset = "0x53A97E0", VA = "0x53AA7E0")]
	internal void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x6002094")]
	[Address(RVA = "0x53AA910", Offset = "0x53A9910", VA = "0x53AA910")]
	internal void Dump()
	{
	}

	[Token(Token = "0x6002095")]
	[Address(RVA = "0x53AA920", Offset = "0x53A9920", VA = "0x53AA920")]
	public BinaryMethodCall()
	{
	}
}
