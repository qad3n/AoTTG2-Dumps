// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.OperatorInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x45AB740", Offset = "0x45AB740", VA = "0x45AB740")]
	internal OperatorInfo(Nodes type, int op, int pri)
	{
	}
}
