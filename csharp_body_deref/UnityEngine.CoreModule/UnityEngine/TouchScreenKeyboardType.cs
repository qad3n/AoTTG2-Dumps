using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x200019E")]
public enum TouchScreenKeyboardType
{
	[Token(Token = "0x40005DE")]
	Default,
	[Token(Token = "0x40005DF")]
	ASCIICapable,
	[Token(Token = "0x40005E0")]
	NumbersAndPunctuation,
	[Token(Token = "0x40005E1")]
	URL,
	[Token(Token = "0x40005E2")]
	NumberPad,
	[Token(Token = "0x40005E3")]
	PhonePad,
	[Token(Token = "0x40005E4")]
	NamePhonePad,
	[Token(Token = "0x40005E5")]
	EmailAddress,
	[Token(Token = "0x40005E6")]
	[Obsolete("Wii U is no longer supported as of Unity 2018.1.")]
	NintendoNetworkAccount,
	[Token(Token = "0x40005E7")]
	Social,
	[Token(Token = "0x40005E8")]
	Search,
	[Token(Token = "0x40005E9")]
	DecimalPad,
	[Token(Token = "0x40005EA")]
	OneTimeCode
}
