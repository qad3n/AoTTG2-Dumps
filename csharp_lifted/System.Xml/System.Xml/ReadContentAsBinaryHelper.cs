// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.ReadContentAsBinaryHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000036")]
internal class ReadContentAsBinaryHelper
{
	[Token(Token = "0x2000037")]
	private enum State
	{
		[Token(Token = "0x400011D")]
		None,
		[Token(Token = "0x400011E")]
		InReadContent,
		[Token(Token = "0x400011F")]
		InReadElementContent
	}

	[Token(Token = "0x4000118")]
	[FieldOffset(Offset = "0x10")]
	private XmlReader reader;

	[Token(Token = "0x4000119")]
	[FieldOffset(Offset = "0x18")]
	private State state;

	[Token(Token = "0x400011A")]
	[FieldOffset(Offset = "0x1C")]
	private int valueOffset;

	[Token(Token = "0x400011B")]
	[FieldOffset(Offset = "0x20")]
	private bool isEnd;

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x6099EA0", Offset = "0x6098EA0", VA = "0x6099EA0")]
	internal void Finish()
	{
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x609A0B0", Offset = "0x60990B0", VA = "0x609A0B0")]
	internal void Reset()
	{
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x6099FE0", Offset = "0x6098FE0", VA = "0x6099FE0")]
	private bool MoveToNextContentNode(bool moveIfOnContentNode)
	{
		return default(bool);
	}
}
