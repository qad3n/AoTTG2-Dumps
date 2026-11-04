// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Xml.SmallXmlParserException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Mono.Xml;

[Token(Token = "0x200004C")]
internal class SmallXmlParserException : SystemException
{
	[Token(Token = "0x4000150")]
	[FieldOffset(Offset = "0x90")]
	private int line;

	[Token(Token = "0x4000151")]
	[FieldOffset(Offset = "0x94")]
	private int column;

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x19534A0", Offset = "0x1951AA0", VA = "0x1819534A0")]
	public SmallXmlParserException(string msg, int line, int column)
	{
	}
}
