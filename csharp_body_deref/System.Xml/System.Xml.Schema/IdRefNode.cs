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
	[Address(RVA = "0x43F69B0", Offset = "0x43F69B0", VA = "0x43F69B0")]
	internal IdRefNode(IdRefNode next, string id, int lineNo, int linePos)
	{
	}
}
