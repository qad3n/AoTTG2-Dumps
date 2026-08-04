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

[Token(Token = "0x200002E")]
internal class SmallXmlParserException : SystemException
{
	[Token(Token = "0x40000CE")]
	[FieldOffset(Offset = "0x8C")]
	private int line;

	[Token(Token = "0x40000CF")]
	[FieldOffset(Offset = "0x90")]
	private int column;

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x3ACED70", Offset = "0x3ACED70", VA = "0x3ACED70")]
	public SmallXmlParserException(string msg, int line, int column)
	{
	}
}
