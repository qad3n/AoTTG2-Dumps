using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x20000A0")]
public struct RichTextTagAttribute
{
	[Token(Token = "0x400059C")]
	[FieldOffset(Offset = "0x0")]
	public int nameHashCode;

	[Token(Token = "0x400059D")]
	[FieldOffset(Offset = "0x4")]
	public int valueHashCode;

	[Token(Token = "0x400059E")]
	[FieldOffset(Offset = "0x8")]
	public TagValueType valueType;

	[Token(Token = "0x400059F")]
	[FieldOffset(Offset = "0xC")]
	public int valueStartIndex;

	[Token(Token = "0x40005A0")]
	[FieldOffset(Offset = "0x10")]
	public int valueLength;

	[Token(Token = "0x40005A1")]
	[FieldOffset(Offset = "0x14")]
	public TagUnitType unitType;
}
