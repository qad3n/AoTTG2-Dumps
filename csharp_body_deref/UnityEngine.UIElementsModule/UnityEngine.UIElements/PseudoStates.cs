using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200045B")]
[Flags]
internal enum PseudoStates
{
	[Token(Token = "0x4000D08")]
	Active = 1,
	[Token(Token = "0x4000D09")]
	Hover = 2,
	[Token(Token = "0x4000D0A")]
	Checked = 8,
	[Token(Token = "0x4000D0B")]
	Disabled = 0x20,
	[Token(Token = "0x4000D0C")]
	Focus = 0x40,
	[Token(Token = "0x4000D0D")]
	Root = 0x80
}
