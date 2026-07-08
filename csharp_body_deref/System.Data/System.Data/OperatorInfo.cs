using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200005A")]
internal sealed class OperatorInfo
{
	[Token(Token = "0x40001F3")]
	[FieldOffset(Offset = "0x10")]
	internal Nodes _type;

	[Token(Token = "0x40001F4")]
	[FieldOffset(Offset = "0x14")]
	internal int _op;

	[Token(Token = "0x40001F5")]
	[FieldOffset(Offset = "0x18")]
	internal int _priority;

	[Token(Token = "0x6000611")]
	[Address(RVA = "0x426DFE0", Offset = "0x426DFE0", VA = "0x426DFE0")]
	internal OperatorInfo(Nodes type, int op, int pri)
	{
	}
}
