using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000199")]
[ComVisible(true)]
public enum PlatformID
{
	[Token(Token = "0x40006BA")]
	Win32S,
	[Token(Token = "0x40006BB")]
	Win32Windows,
	[Token(Token = "0x40006BC")]
	Win32NT,
	[Token(Token = "0x40006BD")]
	WinCE,
	[Token(Token = "0x40006BE")]
	Unix,
	[Token(Token = "0x40006BF")]
	Xbox,
	[Token(Token = "0x40006C0")]
	MacOSX
}
