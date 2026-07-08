using System;
using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x200007B")]
[Flags]
public enum FontStyles
{
	[Token(Token = "0x40003B7")]
	Normal = 0,
	[Token(Token = "0x40003B8")]
	Bold = 1,
	[Token(Token = "0x40003B9")]
	Italic = 2,
	[Token(Token = "0x40003BA")]
	Underline = 4,
	[Token(Token = "0x40003BB")]
	LowerCase = 8,
	[Token(Token = "0x40003BC")]
	UpperCase = 0x10,
	[Token(Token = "0x40003BD")]
	SmallCaps = 0x20,
	[Token(Token = "0x40003BE")]
	Strikethrough = 0x40,
	[Token(Token = "0x40003BF")]
	Superscript = 0x80,
	[Token(Token = "0x40003C0")]
	Subscript = 0x100,
	[Token(Token = "0x40003C1")]
	Highlight = 0x200
}
