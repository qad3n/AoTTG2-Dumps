// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.IdRefNode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000263")]
internal class IdRefNode
{
	[Token(Token = "0x4000C31")]
	[FieldOffset(Offset = "0x10")]
	internal string Id;

	[Token(Token = "0x4000C32")]
	[FieldOffset(Offset = "0x18")]
	internal int LineNo;

	[Token(Token = "0x4000C33")]
	[FieldOffset(Offset = "0x1C")]
	internal int LinePos;

	[Token(Token = "0x4000C34")]
	[FieldOffset(Offset = "0x20")]
	internal IdRefNode Next;

	[Token(Token = "0x60017AF")]
	[Address(RVA = "0x4734110", Offset = "0x4734110", VA = "0x4734110")]
	internal IdRefNode(IdRefNode next, string id, int lineNo, int linePos)
	{
	}
}
