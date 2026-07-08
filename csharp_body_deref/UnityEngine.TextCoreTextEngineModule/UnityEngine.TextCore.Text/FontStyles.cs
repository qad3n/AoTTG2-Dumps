using System;
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000026")]
[Flags]
public enum FontStyles
{
	[Token(Token = "0x40001E7")]
	Normal = 0,
	[Token(Token = "0x40001E8")]
	Bold = 1,
	[Token(Token = "0x40001E9")]
	Italic = 2,
	[Token(Token = "0x40001EA")]
	Underline = 4,
	[Token(Token = "0x40001EB")]
	LowerCase = 8,
	[Token(Token = "0x40001EC")]
	UpperCase = 0x10,
	[Token(Token = "0x40001ED")]
	SmallCaps = 0x20,
	[Token(Token = "0x40001EE")]
	Strikethrough = 0x40,
	[Token(Token = "0x40001EF")]
	Superscript = 0x80,
	[Token(Token = "0x40001F0")]
	Subscript = 0x100,
	[Token(Token = "0x40001F1")]
	Highlight = 0x200
}
