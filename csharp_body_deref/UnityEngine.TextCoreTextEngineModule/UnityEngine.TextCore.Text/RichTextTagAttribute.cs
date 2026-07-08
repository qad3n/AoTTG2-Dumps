using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x200002B")]
internal struct RichTextTagAttribute
{
	[Token(Token = "0x4000209")]
	[FieldOffset(Offset = "0x0")]
	public int nameHashCode;

	[Token(Token = "0x400020A")]
	[FieldOffset(Offset = "0x4")]
	public int valueHashCode;

	[Token(Token = "0x400020B")]
	[FieldOffset(Offset = "0x8")]
	public TagValueType valueType;

	[Token(Token = "0x400020C")]
	[FieldOffset(Offset = "0xC")]
	public int valueStartIndex;

	[Token(Token = "0x400020D")]
	[FieldOffset(Offset = "0x10")]
	public int valueLength;

	[Token(Token = "0x400020E")]
	[FieldOffset(Offset = "0x14")]
	public TagUnitType unitType;
}
