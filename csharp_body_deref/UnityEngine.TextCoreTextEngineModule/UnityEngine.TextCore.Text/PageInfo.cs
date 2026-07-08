using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000034")]
internal struct PageInfo
{
	[Token(Token = "0x400026D")]
	[FieldOffset(Offset = "0x0")]
	public int firstCharacterIndex;

	[Token(Token = "0x400026E")]
	[FieldOffset(Offset = "0x4")]
	public int lastCharacterIndex;

	[Token(Token = "0x400026F")]
	[FieldOffset(Offset = "0x8")]
	public float ascender;

	[Token(Token = "0x4000270")]
	[FieldOffset(Offset = "0xC")]
	public float baseLine;

	[Token(Token = "0x4000271")]
	[FieldOffset(Offset = "0x10")]
	public float descender;
}
